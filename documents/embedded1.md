---
title: ECE4144 - GPIO Hands On Assignment
author: Pi (pk2269@nyu.edu)
date: Feb 27 2023
---

# Preliminaries

## **(1) What registers are necessary to set a GPIO pin and to read a GPIO pin?  How does each register function?**

**Data Direction Register, and Data Registers** are necessary to set GPIO pin and read one. The registers. The Data Direction Registers control the direction of data flow for each pin, determining whether the pin is set as an input or an output (out is encoded as 1 and in is encoded as 0).

To modify the output state of the GPIO pin, we use the PORT register with the name of the port letter (A, B or C) which contains the pin (i.e. PORTA). This register controls the output state of the pin within that port.

Similarly, to modify the input state of the GPIO pin, we use the PIN register with the name of the port letter (A, B or C) which contains the pin (i.e. PINA). This register controls the input state of the pin within that port.

## **(2) Explain how to set, clear, toggle, or test a bit of a register, without changing the other bits.**

A register is a set of bits that store information or configuration settings. To manipulate a specific bit in a register, we need to use bitwise operators. These operators let us work with individual bits within a number. 

**Setting :** To set a bit in a register, we use the bitwise OR operator (|). For example, let's say we have a register called reg and we want to set bit 3 to 1. we can do this using the following code: 

```c
reg |= (1 << 3)
```

This sets bit 3 of reg to 1 without changing any other bits.

**Clearing :** To clear a bit in a register, we use the bitwise AND operator (&). For example, let's say we have a register called reg and we want to clear bit 5. we can do this using the following code:

```c
reg &= ~(1 << 5)
```

This clears bit 5 of reg to 0 without changing any other bits.

**Toggling :** To toggle a bit in a register, we use the bitwise XOR operator (^). For example, let's say we have a register called reg and we want to toggle bit 2. We can do this using the following code:

```c
reg ^= (1 << 2)
```

This toggles bit 2 of reg between 0 and 1 without changing any other bits.

**Testing :**To test a bit in a register, we use the bitwise AND operator (&) with a mask that has a 1 in the bit position we want to test. For example, let's say we have a register called reg and we want to test if bit 7 is set. We can do this using the following code:
```c
if (reg & (1 << 7)) { 
    /* bit 7 is set */ 
    } else { 
        /* bit 7 is not set */ 
    }
```
 This checks if bit 7 of reg is 1 or 0 without changing any other bits.

When we use these bitwise operators, we are only affecting the bit positions that we specify. All other bits in the register remain unchanged.

## **(3) Enumerate the available GPIO ports/pins available on the playground classic board.**

The Adafruit Playground Classic board provides 24 pins that can be used for a wide range of applications. These pins are known as general-purpose input/output (GPIO) pins, and they are divided into three groups, each consisting of eight pins. These groups are referred to as Port A, Port B, and Port C, with each individual pin assigned a unique number ranging from 0 to 7. As such, Port A includes pins A0 through A7, Port B includes pins B0 through B7, and Port C includes pins C0 through C7.

# Details

## **(4a) Three Pins** 

We are using the Pins #6 (PD7), #9 (PD5) and #10 (PD6). These pins allows us to specify the input and output mode in GPIO and transfer the values.

## **(4b) Sketch of Schematic** 

![Schematic Sketch](schematic.jpg)


## **(4c and d) 3 Bit Binary Counter Code**
```cpp
#include <Arduino.h>
// Declare the pin outputs for PIN #6, #9 and #10
#define LED_PORT 0x2B
#define LED_DDR 0x2A
#define LED_PIN1 5
#define LED_PIN2 6
#define LED_PIN3 7
#define LED_DELAY 1000

void setup()
{
  // Setup code here, to run once:
  DDRB |= (1 << LED_PIN1);
  DDRD |= (1 << LED_PIN3);
  DDRB |= (1 << LED_PIN2);
}

void loop()
{
  // Main code here, to run repeatedly:
  for (int i = 0; i < 8; i++)
  {
    // Increment the bit from 0 to 7 and set the LED pins accordingly
    int bit1 = i & 1;
    int bit2 = (i >> 1) & 1;
    int bit3 = (i >> 2) & 1;
    PORTB = (bit1 << LED_PIN1) | (bit2 << LED_PIN2) | (bit3 << LED_PIN3);
    PORTB = (bit1 << LED_PIN1) | (bit2 << LED_PIN2) | (bit3 << LED_PIN3);
    PORTD = (bit1 << LED_PIN1) | (bit2 << LED_PIN2) | (bit3 << LED_PIN3);
    delay(LED_DELAY);
  }
}
```

## **(5) Code with Buttons to start and stop the counter, and reset the counter**

```cpp
#include <Arduino.h>
// Declare the pin outputs for PIN #6, #9 and #10
#define LED_PORT 0x2B
#define LED_DDR 0x2A
#define LED_PIN1 5
#define LED_PIN2 6
#define LED_PIN3 7
#define LED_DELAY 1000

// This keeps track of whether the timer is on or not
int timerOn = true;
int bit1 = 0;
int bit2 = 0;
int bit3 = 0;

void setup()
{
  // Setup code here, to run once:
  DDRB |= (1 << LED_PIN1);
  DDRD |= (1 << LED_PIN3);
  DDRB |= (1 << LED_PIN2);
  // Set the Right button as input for reset
  // F^->Input
  DDRF &= ~(1 << 6);
  // Set the Left button as input for start stop
  DDRD &= ~(1 << 4);
}

void loop()
{
  // Main code here, to run repeatedly:
  for (int i = 0; i < 8; i++)
  {

    // Increment the bit from 0 to 7 and set the LED pins accordingly
    // 1 is used to mask the bit, so that only the last bit is used
    bit1 = i & 1;
    bit2 = (i >> 1) & 1;
    bit3 = (i >> 2) & 1;

    // This toggles the counter between on and off mode
    if ((PIND & (1 << 4)) == 0)
    {
    }
    else
    {
      // Pressing the left button starts and stops the timer
      timerOn = !timerOn;
      delay(LED_DELAY);
    }

    // If the timer is on, activate the coutner, else turn it off
    if (timerOn)
    {
      PORTB = (bit1 << LED_PIN1) | (bit2 << LED_PIN2) | (bit3 << LED_PIN3);
      PORTB = (bit1 << LED_PIN1) | (bit2 << LED_PIN2) | (bit3 << LED_PIN3);
      PORTD = (bit1 << LED_PIN1) | (bit2 << LED_PIN2) | (bit3 << LED_PIN3);
      delay(LED_DELAY);
    }
    else
    {
      // Turn the timer off
      PORTB = (0 << LED_PIN1);
      PORTD = (0 << LED_PIN1);
    }

    // This resets the counter to 0 when the right button is pressed
    if ((PINF & (1 << 6)) == 0)
    {
    }
    else
    {
      // Pressing the right button resets the counter
      i = 0;
    }
  }
}
```