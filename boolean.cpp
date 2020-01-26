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
//Boolean function to determins even or odd value


bool isEven(int);
int main(int argc, const char * argv[])
{
    
    int num;
    cout << "Enter an integer and I will tell you if it is even or odd: " << endl;
    cin>> num;
    
    if(isEven(num))
    {
        cout << "Number is even."<< endl;
    } else
    {
        cout << "Number is odd."<< endl;
    }
    
    return 0;
}

bool isEven(int num)
{
    if(num % 2 == 0)
        return true;
    else
        return false;
}

