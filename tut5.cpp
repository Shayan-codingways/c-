// Task 6: Check whether the given output is vowel or constant

#include <iostream>
using namespace std;

int main()
{
    //declaration
    char c;
    bool isLowercaseVowel, isUppercaseVowel;

    //taking input of a character
    cout << "Enter an alphabet: ";
    cin >> c;

    // evaluates to 1 (true) if c is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // evaluates to 1 (true) if c is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // show error message if c is not an alphabet
    if (!isalpha(c)) // isalpha function --> if c is alphabet
        printf("Error! Non-alphabetic character.");

    else if (isLowercaseVowel || isUppercaseVowel)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";


    return 0;

}