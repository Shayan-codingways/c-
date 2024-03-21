/*
Write a program that reads a student name followed by five test scores. The program should output the student name, the five test scores, and the average test score. Output the
average test score with two decimal places.
*/

#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int i; 
    string name;
    float arr[5];
    float sum=0;

    cout<<"-----------------Student Details------------------"<< endl;
    cout<<"Enter student name and marks: ";
    cin >>name;
    cout<<" ";
    for(i=0;i<5;i++){
        cin >> arr[i];
        cout<< " ";
        sum=sum+arr[i];
    }

    float avg=sum/5;

    cout<<endl<<"student name: "<<name <<endl;
    cout << "Test scores: ";
    for (i = 0; i < 5; i++)
    {
        cout << " " << arr[i];
    }
    cout << endl;

    cout << "Average Test score: ";
    printf("%0.2f",avg);

    return 0;
}