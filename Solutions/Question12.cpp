#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main()
{
    string input_t;
    string temp_t;
    string word_find;
    string checkpalindrome;
    string lowercase_string;
    string uppercase_string;

    bool ispalindrome = true;
    bool alphabet_check = false;

    int count_word =0;
    int i = 0;
    int len_string = 0, len_palindrome = 0, len_lowercase = 0, len_uppercase = 0;
    int word_location = 0;

    cout << "Enter String: ";
    getline(cin, input_t);
    
    len_string = input_t.length();
    cout<< "Length of Input String is " << len_string;
    
    // Convert input to alphabets and spaces only

    for (char ch: input_t)
        {
            if(ch >= 'a' && ch <= 'z')
            {
                temp_t+= ch;
                alphabet_check = true;
            }
            else if (ch == ' ')
            {
                if (alphabet_check)
                {
                    temp_t+= ' ';
                    alphabet_check = false;
                }
            }
        cout << "\nThe converted string is "<< temp_t;
        }

    // Count number of words based on spaces between words

    for (char ch : temp_t)
    {
        if(ch == ' ')
        {
            count_word++;
        }
    }
    cout << "\nTotal word count is "<< count_word+1;

    // Check if a string is palindrome 

    cout << "\nEnter a string to be checked palindrome : ";
    cin >> checkpalindrome;

    len_palindrome = checkpalindrome.length();

    for (int i = 0; i < (len_palindrome/2); i++ )
    {
        if(checkpalindrome[i] != checkpalindrome[len_palindrome-i-1])
        {
            ispalindrome = false;
            // cout << "\nThe string is not palindrome";
        }
        else 
        {
            ispalindrome = true;
            // cout << "\nThe string is palindrome";
        }
    }
    if (ispalindrome == 1)
    {
        cout << "\nthe string is palindrome\n";
    }
    else
    {
        cout << "\nthe string is not palindrome\n";
    }
    // find a word in array
    cout << "\nEnter a word to be found in string : ";
    cin >> word_find;
    word_location = temp_t.find(word_find);
    cout << "\nWord is found at position "<< word_location;

    // Convert to lowercase
    
    cout << "\nEnter a string to be converted to lowercase : ";
    cin >> lowercase_string;
    len_lowercase = lowercase_string.length();
    for (int i=0; i<len_lowercase; i++)
    {
        lowercase_string[i] = tolower(lowercase_string[i]); //Convert uppercase to lowercase
    }

    cout << "\nConverted string to lowercase is : " << lowercase_string;
    // Convert to uppercase
    
    cout << "\nEnter a string to be converted to UPPERCASE : ";
    cin >> uppercase_string;
    len_uppercase = uppercase_string.length();
    for (int i=0; i<len_uppercase; i++)
    {
        uppercase_string[i] = toupper(uppercase_string[i]); //Convert uppercase to lowercase
    }
    cout << "\nConverted string to UPPERCASE is : " << uppercase_string;

   return 0;
}