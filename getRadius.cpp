//  EPP PRAC CHAPTER 6
//  main.cpp
//  practiceEPP
//
//  Created by Iris on 3/6/18.
//  Copyright © 2018 raulyg. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

//******************************************************************************************************************//
//Get AREA of a circle

double getRadius();
double calcArea(double radius, double pi);


int main(int argc, const char * argv[]) {
    // insert code here..
    // A = pi * r ^ 2
    const double pi = 3.14;
    
    cout << "Calculates area of a circle... "<< endl;
    
    double radius;
    radius = getRadius();
    
    double area;
    area = calcArea(radius, pi);
    
    cout << "The area of your circle is: "<< area << endl;
    
    return 0;
}

double getRadius()
{
    double radius;
    cout<< "What is the radius of the circel? ";
    cin >> radius;
    
    return radius;
}

double calcArea(double radius, double pi)
{
    double area;
    area = pi * pow(radius, 2);
    return area;
    
}