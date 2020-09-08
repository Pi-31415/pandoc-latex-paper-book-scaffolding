---
title: ENGR–UH 1000 | Lab 0 Report
author: Pi (pk2269@nyu.edu)
date: Sep 8, 2020
---

# Problem Identification and Statement

Computing the distance between two given points in a Cartesian plane, given the Cartesian coordinates of the two points.

# Gathering of Information and Input/Output Description


# Test Cases and Algorithm Design

* Get input $x_1$ from user
* Assign $x_1$ to variable $x_1$
* Get input $y_1$ from user
* Assign $y_1$ to variable $y_1$
* Get input $x_2$ from user
* Assign $x_2$ to variable $x_2$
* Get input $y_2$ from user
* Assign $y_2$ to variable $y_2$
* Assign $\sqrt{{x_2 - x_1}^{2}+{y_2 - y_1}^{2}}$ to distance
* Print distance


# Implementation


# Software Testing and Verification


% Pandoc math demos

$a^2 + b^2 = c^2$

$v(t) = v_0 + \frac{1}{2}at^2$

$\gamma = \frac{1}{\sqrt{1 - v^2/c^2}}$  

$\exists x \forall y (Rxy \equiv Ryx)$

$p \wedge q \models p$

$\Box\diamond p\equiv\diamond p$

$\int_{0}^{1} x dx = \left[ \frac{1}{2}x^2 \right]_{0}^{1} = \frac{1}{2}$

$e^x = \sum_{n=0}^\infty \frac{x^n}{n!} = \lim_{n\rightarrow\infty} (1+x/n)^n$

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ {.cpp .numberLines}
/*-------------------------------------------------*/
/* Name: Pi, Student Number: N13394469 */
/* Date: Sep 8, 2020. */
/* Program: distance.cpp */
/* Description: This program computes the distance */
/* between two points. */
/*-------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
/* Declare and initialize the variables */
double x1 = -1, y1 = -3, x2 = 4, y2 = 6;
double length1, length2, distance;

/* Compute the sides of a right triangle */
length1 = x2 - x1;
length2 = y2 - y1;

/* Compute the distance between the two points. */
distance = sqrt(length1*length1 + length2*length2);

/* Print the distance */
cout << "The distance between the two points is " << distance << endl;
 return (0);
}
/*--------------------------End---------------------*/
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 