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
* Assign $\sqrt{{(x_2 - x_1)}^{2}+{(y_2 - y_1)}^{2}}$ to *distance*
* Print *distance*


# Implementation

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
    double x1,y1,x2,y2,distance;
    cout << "Provide x1:" ;
    cin >> x1;
    cout << "Provide y1:" ;
    cin >> y1;
    cout << "Provide x2:" ;
    cin >> x2;
    cout << "Provide y2:" ;
    cin >> y2;

    distance = sqrt((x2-x1)^2 + (y2-y1)^2);

    /* Print the distance */
    cout << "The distance between the two points is " << distance << endl;
    return (0);
}
/*--------------------------End---------------------*/
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ 

# Software Testing and Verification
