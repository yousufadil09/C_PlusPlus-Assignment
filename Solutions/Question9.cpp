#include <iostream>
#include <string>
using namespace std;

int main()
{
    string input_text, output_text;
    int i =0, j = 0, len_input = 0; 
    char temp = 0;

    cout<< "Enter your string containing 'a', 'b', 'c' only: \n";
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
    {   
        for (i=0; i<=len_input; i++)
            for (j=i+1; j<len_input; j++)
            {
                if (input_text[j] < input_text[i]) //Using Bubble Sort Technique
                    {
                        temp = input_text[i];
                        input_text[i] = input_text[j];
                        input_text[j] = temp;
                    }
            } 

        cout<< "Sorted Array is : \n";

        for (i = 0; i<len_input; i++)
        {
            cout<< " " << input_text[i]; //Print the sorted array
        }
    }
return 0;
}