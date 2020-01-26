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
//Menu Driven Program...

void menu();
int getChoice();
void showFees(string type, double rate, int term);

int main(int argc, const char * argv[])
{
    const double ADULT_RATE= 120.0,
                 CHILD_RATE= 60.0,
                 SENIOR_RATE=100.00;
    
    int choice;
    int term;
    
    do{
        menu();
        choice = getChoice();

        if (choice != 4)
        {
            cout << "For how many months? ";
            cin >> term;
            
            switch(choice)
            {
                case 1: showFees("Adult", ADULT_RATE, term);
                        break;
                case 2: showFees("Child", CHILD_RATE, term);
                        break;
                case 3: showFees("Senior", SENIOR_RATE, term);
                        break;
            }
        }
        
    }while(choice != 4);
    return 0;
}
void menu()
{
    cout <<"Health Club Membership Menu"<<endl;
    cout <<"1.  Standard Adult Membership"<<endl;
    cout <<"2.  Child Membership"<<endl;
    cout <<"3.  Senior Citizen Membership"<<endl;
    cout <<"4.  Quit"<<endl;
}

int getChoice()
{
    //If value is not within 1-4
    int choice;
    cin >> choice;
    while(choice <1 || choice >4 )
    {
        cout <<"Please enter a value from 1-4 "<< endl;
        cin >> choice;
    }
    return choice;

}

void showFees(string type, double rate, int term)
{
    cout<<endl;
    cout <<"Member Type: "<< type << endl;
    cout <<"Number of months "<< term << endl;
    cout <<"Total Charges:  $"<< (rate*term) << endl;
    
    cout <<"Press Enter to return to Menu. "<< endl;
    cin.get(); //Clear the previous \n out of the inout buffer
    cin.get(); //Wait unitl user presses ENTER

    
}