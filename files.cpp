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
//Text File

 int main(int argc, const char * argv[])
{
    string name;
    char choice;
    
    ofstream outFile;
    outFile.open("students.txt");
    
    cout <<"Enter the names of three students: "<< endl;

    for(int i =1; i <= 3; i++)
    {
        cout << "Friend #"<< i << ": ";
        cin >> name;
        outFile<< name << endl;
    }
    outFile.close();
    
    cout<<"Names saved to txt file.."<< endl;
    
    fstream inFile;
    inFile.open("students.txt");
    
    cout <<"PUASED, Press Y to see names."<< endl;
    cin>>choice;
    if(choice == 'y' || choice =='Y')
    {
    cout <<"Here are the names again from the student file" << endl;
        for(int count = 1; count <= 3; count++)
        {
            inFile>> name;
            cout << name << endl;
        }
        
    }else
        cout << "INVALID" << endl;
    
    inFile.close();

    
    return 0;
}

