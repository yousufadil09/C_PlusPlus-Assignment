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
    int count_word =0, i = 0, len_string = 0, alpha_check = 0, num_check = 0, word_find = 0, count_alphabet =0, count_num =0;
    bool alphabet_check = false;
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

    // find a word in array

    word_find = temp_t.find(word_find);

    cout << "\nWord is found at position "<< word_find;

    // Check if a string is palindrome 

    

   return 0;
}