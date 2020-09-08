/*-------------------------------------------------*/
/* Name: Pi, Student Number: N13394469 */
/* Date: Sep 8, 2020. */
/* Program: distance.cpp */
/* Description: This program computes the distance between two points. */
/*-------------------------------------------------*/
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* Declare and initialize the variables */
    double x1,y1,x2,y2,d;
    cout << "Provide x1: " ;
    cin >> x1;
    cout << "Provide y1: " ;
    cin >> y1;
    cout << "Provide x2: " ;
    cin >> x2;
    cout << "Provide y2: " ;
    cin >> y2;

    d = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    /* Print the distance */
    cout << "The distance between the two points is " << d << endl;
    return (0);
}
/*--------------------------End---------------------*/