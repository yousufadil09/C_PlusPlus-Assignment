#include <iostream>
#include <string>

using namespace std;

string convertwords(string input_t, int len_string)
{
 // Convert input to alphabets and spaces only
    
    string temp_t;
    bool alphabet_check = false;

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

return temp_t;    
}

void countwords(string input_t, int len_string)
{
    int countword = 0;
    string temp_text;

    temp_text = convertwords(input_t, len_string);
    
    // Count number of words based on spaces between words

    for (char ch : temp_text)
    {
        if(ch == ' ')
        {
            countword++;
        }
    }
    cout << "\nTotal word count is "<< countword+1;

}

void ispalindrome()
{
    string checkpalindrome;
    int len_palindrome = 0;
    bool ispalindrome = false;

    cout << "\nEnter a string to be checked palindrome : ";
    cin >> checkpalindrome;

    len_palindrome = checkpalindrome.length();

    for (int i = 0; i < len_palindrome/2; i++ )
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
    if (ispalindrome)
    {
        cout << "\nthe string is palindrome\n";
    }
    else
    {
        cout << "\nthe string is not palindrome\n";
    }
}

void findword(string input_t, int len_string)
{
    int word_location;
    string word_find;
    string temp_text;

    // temp_text = convertwords(input_t, len_string);
    cout << "\nEnter a word to be found in string : ";
    cin >> word_find;
    word_location = input_t.find(word_find);
    cout << "\nWord is found at position "<< word_location;
}

void lowercasefun()
{
    string lowercase_string;
    int len_lowercase = 0;

    // Convert to lowercase
    
    cout << "\nEnter a string to be converted to lowercase : ";
    cin >> lowercase_string;
    len_lowercase = lowercase_string.length();

    for (int i=0; i<len_lowercase; i++)
    {
        lowercase_string[i] = tolower(lowercase_string[i]); //Convert uppercase to lowercase
    }
    cout << "\nConverted string to lowercase is : " << lowercase_string;
}

void uppercasefun()
{
    string uppercase_string;
    int len_uppercase = 0;

    // Convert to lowercase
    
    cout << "\nEnter a string to be converted to UPPERCASE : ";
    cin >> uppercase_string;
    len_uppercase = uppercase_string.length();

    for (int i=0; i<len_uppercase; i++)
    {
        uppercase_string[i] = toupper(uppercase_string[i]); //Convert uppercase to lowercase
    }
    cout << "\nConverted string to UPPERCASE is : " << uppercase_string;
}
int main()
{
    int wordcount = 0;
    int len_string = 0;
    int findwords = 0;
    char your_choice;
    string input_t;
    
    cout << "Enter String: ";
    getline(cin, input_t);
    
    do 
    {   
        cout << "\n\n\n The menu operations are";
        cout << "\n A. Calculate length of string."; 
        cout << "\n B. Count the number of words in a string.";
        cout << "\n C. Check if a string is palindrome or not."; 
        cout << "\n D. Find a word within the array. If found, display its starting position.";
        cout << "\n E. Convert a string in lowercase.";
        cout << "\n F. Convert a string in uppercase.";
        cout << "\nEnter Your Choice:  ";
        cin >> your_choice;

    switch(your_choice)
    {
        case 'a':
        case 'A':
            len_string = input_t.length();
            cout<< "\nLength of Input String is " << len_string;
            break;
        case 'b':
        case 'B':
            countwords(input_t, len_string); // Call Countwords function    
            break;
        case 'c':
        case 'C':
            ispalindrome(); // Call ispalindrome function
            break;
        case 'd':
        case 'D':
            findword(input_t, len_string); // Call findword function
            break;
        case 'e':
        case 'E':
            lowercasefun(); // Call lowercase conversion function
            break;
        case 'f':
        case 'F':
            uppercasefun(); // Call uppercase conversion function
            break;
        default:
            cout << "\n Run the program again and enter correct choice between a and f ";
    }
    }
    while ((your_choice >= 'a' & your_choice <= 'f') || (your_choice >= 'A' & your_choice <= 'F'));   
    
}