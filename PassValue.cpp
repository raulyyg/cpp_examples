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


//Passes value through function and retrieves sum of 3 numbers inputed by user...

int showsum(int num1,int num2,int num3)
{
    int sum;
    sum = num1+num2+num3;
    return sum;
}


int main(int argc, const char * argv[]) {
    // insert code here..
    int num1,num2,num3;
    cout << "Enter 3 integers and I will display their sum: "<< endl;
    cin >> num1 >> num2 >> num3;
    cout << endl;
    
    int sum;
    sum = showsum(num1,num2,num3);
    cout<< "Heres the sum of your numbers: " << sum << endl;
    
    return 0;
}
