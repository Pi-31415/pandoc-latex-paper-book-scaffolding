---
title: Technical Writeup for the website
author: Pi
date: June, 2020
---

Dear Elham,

Here are some useful technical information that you might find helpful.

## Domain Name

~~~~~~~
if (a > 3) {
  moveShip(5 * gravity, DOWN);
}
~~~~~~~

## Website

A2 Hosting - [https://www.a2hosting.com/](https://www.a2hosting.com/)

## Content Management System
https://magento.com/

## Mordern Technologies which you can use
React js https://reactjs.org/

## Payment Platform
**Stripe** [https://stripe.com/](https://stripe.com/)


>For certain common messages, the messages can be answered by a customer service bot. But questions that cannot be answered by the bot will be redirected to the Editors. Public Visitors are advised by the bot to leave their emails such that Editors can reply by email 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ {.python .numberLines}
class FSM(object):

"""This is a Finite State Machine (FSM).
"""

def __init__(self, initial_state, memory=None):

    """This creates the FSM. You set the initial state here. The "memory"
    attribute is any object that you want to pass along to the action
    functions. It is not used by the FSM. For parsing you would typically
    pass a list to be used as a stack. """

    # Map (input_symbol, current_state) --> (action, next_state).
    self.state_transitions = {}
    # Map (current_state) --> (action, next_state).
    self.state_transitions_any = {}
    self.default_transition = None
    ...
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 