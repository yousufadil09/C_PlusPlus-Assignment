#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_text, alphabet_individual;
    int i =0, alphabets =0, vowels =0, individual_letters =0,len_input = 0; 
    int alpha_char[26] = {0};

    cout << "Enter your string : \n";
    getline (cin,input_text); // to get complete line with whitespaces in the form of string as simple cin usage causes the string to consider the text before whitespace only
    len_input = input_text.length();
    for (int i=0; i<len_input; i++)
    {
        input_text[i] = tolower(input_text[i]); //Convert uppercase to lowercase
    }

    if (input_text.empty())
    {
        cout << "string is empty";
    }
    else 
    {   for (int i=0; i<=input_text.length(); i++)
        {
            if((input_text[i] >= 'A' && input_text[i] <= 'Z')|| (input_text[i] >= 'a' && input_text[i] <= 'z'))
            {alphabets++;
                individual_letters = input_text[i] - 'a'; //Calculate the ASCII address of alphabet
                ++alpha_char[individual_letters];         //Store the count of alphabet with respect to ASCII address in alpha_char variable at the individual_letters location 
            }
            if((input_text[i] == 'A' || input_text[i] == 'E' || input_text[i] == 'I' || input_text[i] == 'O' || input_text[i] == 'U') || (input_text[i] == 'a' || input_text[i] == 'e' || input_text[i] == 'i' || input_text[i] == 'o' || input_text[i] == 'u'))
            {vowels++;}

        } 
    
    }
    cout << "\nLength of string: " << input_text.length();
    cout << "\nNumber of total Alphabets are: "<<alphabets;
    cout << "\nNumber of total Vowels are: "<<vowels<< endl;
    for (i=0; i<=26; i++)
    {
        cout << char(i+'a') << ":" << alpha_char[i] << endl;
    }
    
return 0;
}
