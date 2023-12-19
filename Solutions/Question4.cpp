#include <iostream>
#include <string>
#include <stdio.h>
#include <iomanip>
using namespace std;

int main()
{
    int bun_type, taste_type;
    char cheese_type [3];
    char fresh_type [3];
    char sauce_type [3];
    char no_choice = 'n';
    double total_bill = 0;
    
    int number_of_cheese = 0;
    int number_of_fresh = 0;
    int number_of_sauce= 0;
    int number_of_buns= 0;
    int number_of_taste= 0;
    // Display the menu
    
    cout << "\t Your Creation\n\t Create Your Taste\n\t\t In\n\t 5 Easy Steps\n";

    cout << "\n1. Choose Your Bun\t" << "2. Make it Cheesy\t" << "3. Turn Up The Taste\t" << "4. Freshn'n It Up\t" << "5. Get Saucy\n"; 

    // Input numbers from user
    
    cout << "Must choose your Bun from the options given below \n\n 1. Toasted Bun \t 2. Baker's Bun \t 3. Lettuce Wrap \n Your Choice: ";
    cin >> bun_type;
    // Check if Bun Type is correctly selected or not

    if (bun_type >= 1 && bun_type <= 3)
    {
        number_of_buns = 1;
    }
    else
    // if bun type is not correctly selected give a maximum of 3 attempts to correctly choose the bun type
    {
        int i =1;
        cout << "\nEnter Valid Selection between 1 and 3\n";
        for (i = 1; i<=2; i++)
        {
            cout << "Must choose your Bun from the options given below \n\n 1. Toasted Bun \t 2. Baker's Bun \t 3. Lettuce Wrap \n Your Choice: ";
            cin >> bun_type;
            if (i == 2)
            {
                number_of_buns = 1;
                cout << "\nBun Type selected is Toasted Bun\n";
            }
        }
        cout<< "\nMaximum " << i << " attempts reached\n";
    }
// Enter Cheese selection

for (int i =1; i<=2; i++)
    {
        cout << "\nChoose your " << i << " cheese from the options given below \n\n 1. Cheddar Cheese \t 2. Swiss Cheese \t 3. Colby Jack Cheese \n 4. McDonalds Classic Cheese \t 5. Shaved Parmesan "<< "\nChoose your "<< i << " cheese or press n : ";
        cin >> cheese_type[i];
        if (cheese_type[i] >= '0' && cheese_type[i] <= '5' || cheese_type[i] == no_choice)
        {
            if (cheese_type[i] == '0')
            {
                cout << " Cheese will not be added ";
                number_of_cheese = 0;
                break;
            }
            else if (cheese_type[i] == no_choice)
            {
                number_of_cheese = --i;
                break;
            }
            else
            {   
            number_of_cheese = i;
            }  
        }
        else
        {
            cout<< "\nEnter Valid Selection between 0 and 5\n";
            --i;
            // if (i==2)
            // {
            //     number_of_cheese = 1;
            //     cout << "\nCheese selected is 1. Cheddar Cheese\n";
            // }
        }
    }       

    cout << "\nMust choose your Turn Up the Taste from the options given below \n 1. Rasher Bacon \t 2. Crispy Bacon \t 3. Egg \n 4. ANGUS Beef Patty \t 5. Guacamole \t 6. Tortilla Strips \n 7. Grilled Mushrooms \t 8. Grilled Pineapple \n Your Choice: ";
    cin >> taste_type;

        if (taste_type >= 1 && taste_type <= 8)
    {
        number_of_taste = 1;
    }
    else
    // if Turn Up the Taste is not correctly selected give a maximum of 3 attempts to correctly choose the bun type
    {
        int i =1;
        cout << "\nEnter Valid Selection between 1 and 8\n";
        for (i = 1; i<=2; i++)
        {
            cout << "\nMust choose your Turn Up the Taste from the options given below \n\n 1. Rasher Bacon \t 2. Crispy Bacon \t 3. Egg \n 4. ANGUS Beef Patty \t 5. Guacamole \t 6. Tortilla Strips \n 7. Grilled Mushrooms \t 8. Grilled Pineapple \n Your Choice: ";
            cin >> taste_type;
            if (i == 2)
            {
                number_of_taste = 1;
                cout << "\nTurn Up the Taste selected is Rasher Bacon\n";
            }
        }
        cout<< "\nMaximum " << i << " attempts reached\n";
    }

    for (int i =1; i<=3; i++)
    {
        cout << "\nChoose your " << i << " Freshn'n It Up from the options given below \n\n 1. Whole Leaf Lettuce \t 2. Tomatoes \t 3. Caramelised Grilled Onion \n 4. Sliced Beetroot \t 5. Red Onion \t 6. Long Sliced Pickle \n 7. Jalapenos\n"<< "\nChoose your "<< i << " Freshn'n It Up or press n : ";
        cin >> fresh_type[i];
        if (fresh_type[i] >= '0' && fresh_type[i] <= '7' || fresh_type[i] == no_choice)
        {
            if (fresh_type[i] == '0')
            {
                cout << "Freshn'n It Up will not be added ";
                number_of_fresh = 0;
                break;
            }
            else if (fresh_type[i] == no_choice)
            {
                number_of_fresh = --i;
                break;
            }
            else
            {   
            number_of_fresh = i;
            }  
        }
        else
        {
            cout<< "\nEnter Valid Selection between 0 and 7\n";
            --i;
        }
    }   

    for (int i =1; i<=3; i++)
    {
        cout << "\nChoose your " << i << " Sauce from the options given below \n\n 1. Ketchup \t 2. Tomato Chilli Jam \t 3. BBQ \n 4. Mayonnaise \t 5. Big Mac Special Sauce \t 6. Aioli \n 7. Herb Aioli \t 8. Chipotle Mayo \n"<< "\nChoose your "<< i << " Sauce  or press n : ";
        cin >> sauce_type[i];
        if (sauce_type[i] >= '0' && sauce_type[i] <= '7' || sauce_type[i] == no_choice)
        {
            if (sauce_type[i] == '0')
            {
                cout << "Freshn'n It Up will not be added ";
                number_of_sauce = 0;
                break;
            }
            else if (sauce_type[i] == no_choice)
            {
                number_of_sauce = --i;
                break;
            }
            else
            {   
            number_of_sauce = i;
            }  
        }
        else
        {
            cout<< "\nEnter Valid Selection between 0 and 7\n";
            --i;
        }
    }   

    
    

    cout << "\nNumber of Cheese added are: " << number_of_cheese;
    cout << "\nNumber of Freshn'n It Up added are: " << number_of_fresh;
    cout << "\nNumber of Sauce are: " << number_of_sauce;
    
    total_bill = 0.72 + 0.5 * number_of_cheese + 1.2 + number_of_fresh * 0.2 + number_of_sauce * 0.3;
    cout << "\nTotal Bill for you burger is: " << total_bill;
   
   return 0;

}