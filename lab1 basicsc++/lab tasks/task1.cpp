/*
Write a program that prompts the user to enter the weight of a person in kilograms and outputs the equivalent weight in pounds. Output both the weights rounded to two decimal
places. (Note that 1 kilogram = 2.2 pounds.) Format your output with two decimal places.
*/

#include <iostream>
#include<cstdio>
using namespace std;

int main()
{
    float weight;

    cout << "!!!!!!!!!Weight converter!!!!!!!!!!" << endl;

    // input
    cout << "Enter your weight in kilograms: ";
    cin >> weight;

    //process
    float weight_lb=weight*2.20462; 
    
    //output
    cout << endl << "Your weight " << weight << " in kgs is equivalent to ";
    printf("%.2f",weight_lb); //2dps

    return 0;
}