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
//Divides 2 user inputed numbers with condition none 0 integer

double divideNum(double num1, double num2)
{
    double result;
    result = num1 / num2;
    
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here..
    double num1,num2;
    cout << "Enter 2 integers and I will divide the first number by the second: "<< endl;
    cin >>num1>>num2;

    while (num2 == 0.0)
    {
        cout << "Sorry cannot divide by 0... try again! " << endl;
        cout << "Enter 2 numbers: ";
        cin >> num1>>num2;
    }
    
    double result;
    result = divideNum(num1,num2);
    cout << endl;

    cout<< "Heres the result of your numbers: " << result << endl;
    
    return 0;
}
