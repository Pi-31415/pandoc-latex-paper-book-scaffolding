---
title: ENGR–UH 1000 Lab 0 Report
author: Pi (pk2269@nyu.edu)
date: Sep 8, 2020
---

# Problem Identification and Statement.


# Gathering of Information and Input/Output Description.


# Test Cases (Hand-Solved Examples) and Algorithm Design.


# Implementation.

# Software Testing and Verification.



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ {.cpp .numberLines}
/*-------------------------------------------------*/
/* Name: your_name_here, Student Number: 0000001 */
/* Date: August 24, 2020. */
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