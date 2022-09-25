//CS002: #77215
//Kyi_Lei_Aye
//kaye_programming_project3
//Cash Register Simulator

#include <iostream>


//declaring constant variables for pennies
const int DOLLAR = 100;
const int QUARTER = 25;
const int DIME = 10;
const int NICKEL = 5;
const int PENNIE = 1;


int main()
{
    using namespace std;

    //declaring variables to store the userinput values
    double totalAmount, payment, change, cents, remainder; 
    int dollars = 0;
    int quarters = 0; 
    int dimes = 0;
    int nickels = 0;
    double pennies = 0;
    

    //taking userinput 
    cout << "Enter Purchase Amount: $";
    cin >> totalAmount;
    cout << "Enter Amount Received: $";
    cin >> payment;

    //calculating total change
    change = payment - totalAmount;
    cout << "Total Change: $" << change << endl;
    cout << endl;

    //changing the change from Dollar to Pennies
    cents = change * 100;
    

    //Finding dollars
    dollars = cents / DOLLAR;
    remainder = cents - (dollars * DOLLAR);

    //Finding quarters
    if(remainder != 0)
    {   
        quarters = remainder / QUARTER;
        remainder -= (quarters * QUARTER);
        
        //Finding dimes
        if(remainder != 0)
        {
            dimes = remainder / DIME;
            remainder -= (dimes * DIME);

            //Finding nickels
            if(remainder != 0)
            {
                nickels = remainder / NICKEL;
                remainder -= (nickels * NICKEL);
                
                //Finding pennies
                if(remainder != 0)
                {   
                    pennies = remainder;
                    
                }
            }
        }
    }

    //output of the program
    cout << "Dollars: " << dollars << endl;
    cout << "Quarters: " << quarters << endl;
    cout << "Dimes " << dimes << endl;
    cout << "Nickels: " << nickels << endl;
    cout << "Pennies: " << pennies << endl;



    return 0;
}
