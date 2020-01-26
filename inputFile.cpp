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
//Reads from file TEMP with function
void readFile(ifstream &);

int main(int argc, const char * argv[])
{
    ifstream inputFile;
    inputFile.open("weather.dat");
    if(inputFile.fail()){
        cout<<"Errror opening file" << endl;
    }
    else
    {
        readFile(inputFile);
        inputFile.close();
    }
    
    
    return 0;
}

void readFile(ifstream & file)
{
    int temp;
    
    while (file >> temp)
    {
        cout << temp << "   ";
        cout << endl;
    }
    
}
