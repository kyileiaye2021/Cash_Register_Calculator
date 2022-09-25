# Cash_Register_Calculator
##### Editor: Kyi Lei Aye

### Project Overview
This project is for calculating the amount of changes that the cashier have to give back to customers.

### How to use
This program is easy to use as it is needed to be downloaded and can be run on any computer with an appropriate compiler. Users are required to fill the Purchase Amount and Total Payment Amount to calculate the change.

### Project Design and Structure
1. including directives for I/O process
2. declaring constant variables to store the exact amount of coins
3. declaring variables to store the user input values
4. initializing the variables of coin values to 0 
5. taking userinput values
6. finding the number of dollars and coins by using "If" functions
7. outputting the values

### Problem Solving Algorithm Use
1. Get the total change amount
2. Convert the total change amount to Cents
3. Quotient is the value got when the dividend is divided by the divisor
4. Remainder is the subtraction of the value(multiplication of divisor and quotient) from dividend
5. Find the amount of Dollar by the method of No.3
6. Get the remainder from finding Dollars and use the method of both 3 and 4 to find the values of Coins and the rest of the remainders
7. The final remainder should be Pennies

### Challenges of the program
1. As there is a data type incompatibility, the developer need to be careful with converting implicitly the double data type to integer data type
2. As modulo operator cannot be used with double data type, another technique is necessary to be created to get the remainder

### References
1. "**Problem Solving with C++**" by Walter Savitch, Chapter 2, 3
2. "https://www.math-only-math.com/dividend-divisor-quotient-and-remainder.html"
