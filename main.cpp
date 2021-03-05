/*
 * ****************************************************************
 * 2.18 (Comparing Integers) Write a program that asks the user   *
 * to enter two integers, obtains the numbers from the user, then *
 * prints the larger number followed by the words "is larger." If *
 * the numbers are equal, print the message "These numbers are    *
 * equal . "                                                      *
 * ****************************************************************
 */

#include <iostream> // enable input and output of program
using namespace std; // use standard library namespace

//begin main function
int main() {
    int num1{0}; //first integer to compare (initialized at 0)
    int num2{0}; //second integer to compare (initialized at 0)

    cout << "Enter integers to be compared \n\n";
    cout << "Please enter first integer to compare: ";//prompt user for input
    cin >> num1 ; // reads first integer to compare
    cout << "Please enter second integer to compare: ";//prompt user for input
    cin >> num2; //read second integer to compare
    // Statements to decide if num1 or num2 is larger or equal to each other
    if (num1 > num2){
        cout << num1 << " is larger.\n";
    }

    if (num1 < num2){
        cout << num2 << " is larger.\n";
    }

    if (num1 == num2){
        cout << "The numbers are equal.\n";
    }
    return 0;
} // end main function
