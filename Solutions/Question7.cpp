#include <iostream>

using namespace std;


void highlowgame()
{
    int number_one = 0;
    int number_two = 0;

    char user_input;

    number_one = rand() % 20 + 1;
    number_one = rand() % 20 + 1;

    cout << "\nFirst number is " << number_one;   
    cout << "\nEnter H or L ";
    cout << "\nH = Higher";
    cout << "\nL = Lower\n";
    cin >> user_input;
    
    if (user_input == 'h' || user_input == 'l' || user_input == 'H' || user_input == 'L')
    {
        if(user_input == 'h' || user_input == 'H')
        {
            if(number_two > number_one)
            {
                cout << "\nUser wins\n";
            }
            else
            {
                cout << "\nUser Lost\n";
            }
        }
        if(user_input == 'l' || user_input == 'L')
        {
            if(number_two < number_one)
            {
                cout << "\nUser wins";
            }
            else
            {
                cout << "\nUser Lost";
            }
        }
    }
    else 
    {
        cout << "\nChoose correct value H or L\n";
    }
}

void rockpaperscissorgame()
{
    int number_one = 0;

    char user_input;

    number_one = rand() % 3 + 1;
    cout << "\nEnter P or S or R ";
    cin >> user_input;
    
    if (user_input == 'p' || user_input == 's' || user_input == 'r' || user_input == 'P' || user_input == 'S' || user_input == 'R')
    {
        if(user_input == 'p' || user_input == 'P')
        {
            if(number_one == 1)
            {
                cout << "\nYou won: Paper beats rock\n";
            }
            else
            {
                cout << "\nYou Lose";
            }
        }
        if(user_input == 's' || user_input == 'S')
        {
            if(number_one == 2)
            {
                cout << "\nYou won: Scissors beats paper\n";
            }
            else
            {
                cout << "\nYou Lose";
            }
        }
        if(user_input == 'r' || user_input == 'R')
        {
            if(number_one == 3)
            {
                cout << "\nYou won: Rock beats scissors";
            }
            else
            {
                cout << "\nYou Lose";
            }
        }
    
    }
    else
    {
        cout << "\nChoose correct value P or S or R\n";
    }
}

void guessthenumbers()
{
    int match_count = 0;

    int arr_gen_num[3];
    int arr_user_num[3];

    // Generate an array of sie 3 with random integers between 0 & 9

    for (int i=0; i <=2; i++)
    {
        arr_gen_num[i] = rand() % 9 + 0;
    }

    // Generate an array of size 3 with input from the user to guess the number

    for (int i=0; i <=2; i++)
    {
        cout << "\nEnter " << i+1 <<" number ";
        cin >> arr_user_num[i];
    }    
    
    // Compare the 2 arrays for matching count

    for (int i =0; i<=2; i++)
        for (int j=0; j<=2; j++)
        {
        if (arr_gen_num[i] == arr_user_num[j])
        {
            match_count++;
        }
        }

    // segregate the output result based on the value of count as described

    if (match_count == 0)
    {
        cout << "\nNo matches at all";
    }

    if (match_count == 1)
        {
            cout << "\n1 guess matching";
        }
    
    if (match_count == 2)
        {
            cout << "\n2 guess matching";
        }
    
    if (match_count == 3)
    {   
            if (arr_gen_num[0] == arr_user_num[0] && 
                arr_gen_num[1] == arr_user_num[1] && 
                arr_gen_num[2] == arr_user_num[2])
                {
                    cout << "\nAll 3 matching in exact order";
                }
            else
                {
                    cout << "\nAll 3 matching, not in order";    
                }
    }
}

int main()

{
    int find_num, i=0, j=0,len_my_array=0;
    int your_choice;
    int my_array[100];
    

    do 
    {
        cout << "\n\n\n Welcome to Guessing Games";   
        cout << "\n The menu operations are";
        cout << "\n 1. Play Higher or Lower "; 
        cout << "\n 2. Play paper - scissors - rock";
        cout << "\n 3. Guess the numbers"; 
        cout << "\n 4. Quit";
        cout << "\n Enter your choice (1 - 4) \n";
        cin >> your_choice;
        if(your_choice >=1 && your_choice<=4)
        {
        switch(your_choice)
        {
        case 1:
            highlowgame();
            break;
        case 2:
            rockpaperscissorgame();
            break;
        case 3:
            guessthenumbers();
            break;
        case 4:
            break;    
        default:
            cout << "\n Enter correct choice between 1 and 4 \n";   
    
        }
        }
        else
        {
            cout << "\nEnter Correct choice between 1 and 4\n";
        }
    }
    while (your_choice != 4);   
    
    return 0;
}