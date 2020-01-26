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

//******************************************************************************************************************//\
//Passing values by reference EXAMPLE
void getNum(int &num1, int &num2);
void swap(int &num1, int &num2);

int main(int argc, const char * argv[])
{
    int small, big;
    getNum(small, big);
    swap(small,big);
    
    cout << "The 2 input numbers ordered from smallest to bigget are " << small << " and " << big << endl;
    
    return 0;
}


void getNum(int &num1, int &num2)
{
    cout <<"Enter an integer: ";
    cin >> num1;
    
    cout <<"Enter another integer: ";
    cin >> num2;
}

void swap(int &num1, int &num2)
{
    int temp;
    
    if(num1 > num2)
    {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }
  
}