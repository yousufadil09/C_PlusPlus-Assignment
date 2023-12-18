#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int mod_a;
    int mod_b;
    int mod_c;
    // Input numbers from user
    cout << "Input Number 1: ";
    cin >> a;
    cout << "Input Number 2: ";
    cin >> b;
    cout << "Input Number 3: ";
    cin >> c;

    // Extract Last digit
    mod_a = a%10;
    mod_b = b%10;
    mod_c = c%10;

    // Check for conditions

    if (a>=0 & b>=0 & c>=0)
    {
        if (mod_a == mod_b || mod_a == mod_c || mod_b == mod_c)
        {
            cout << "True";

        }
        else
        {
            cout << "False";
        }
    }
    else
    {
        cout << "Input is not Positive Integer";
    }    
    return 0;
}
