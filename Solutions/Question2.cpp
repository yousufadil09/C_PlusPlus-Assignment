#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    int num_of_gallons;
    float total_bill;
    float bill_600;
    cout << "Input Number of Gallons : ";
    cin >> num_of_gallons;

    if (num_of_gallons <= 100)
    {
        total_bill = num_of_gallons * 0.45;
    }
    else if (num_of_gallons <= 350)
    {
        total_bill = 45 + ((num_of_gallons-100) * 0.85);
    }
    else if (num_of_gallons <= 600)
    {
        total_bill = 45 + 212.5 + ((num_of_gallons-350) * 1.45);
    }
    else if (num_of_gallons > 600)
    {
        bill_600 = 45 + 212.5 + 362.5 + ((num_of_gallons-600) * 2.60);
        total_bill = bill_600 + (bill_600*0.14);
    }
    else
    {
        cout << "Invalid Number of Gallons";    
    }

    cout << " For " << num_of_gallons << " gallons. Total Bill is: " << fixed << setprecision (2) << total_bill ;
    
    return 0;
}