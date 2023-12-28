#include <iostream>
using namespace std;

    char grid[3][3] = {{'1','2','3'}, {'4','5','6'}, {'7','8','9'}};

    int location;
    int row;
    int column;
    bool draw = false;


void printgrid()
{
    // Display the grid of 3X3

    
    cout << "     " << "|" << "     " << "|" << "     " << endl;
    cout << " " << grid[0][0] << "   |  " << grid[0][1] << "  |  " << grid[0][2] << endl;
    cout << "_____" << "|" << "_____" << "|" << "_____" << endl;
    cout << "     " << "|" << "     " << "|" << "     " << endl;
    cout << " " << grid[1][0] << "   |  " << grid[1][1] << "  |  " << grid[1][2] << endl;
    cout << "_____" << "|" << "_____" << "|" << "_____" << endl;
    cout << "     " << "|" << "     " << "|" << "     " << endl;
    cout << " " << grid[2][0] << "   |  " << grid[2][1] << "  |  " << grid[2][2] << endl;
    cout << "     " << "|" << "     " << "|" << "     " << endl;
}

char tossforfirst()
{
    int number_one = 0;
    int number_two = 0;
    char first_turn;
    char user_input;

    number_one = rand() % 10 + 1;
    number_two = rand() % 10 + 1;

    cout << "\n Toss for the 1st Turn";
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
                cout << "\nUser wins the toss\n";
                first_turn = 'u';
            }
            else
            {
                cout << "\nUser Lost the toss\n";
                first_turn = 'c';
            }
        }
        if(user_input == 'l' || user_input == 'L')
        {
            if(number_two < number_one)
            {
                cout << "\nUser wins the toss\n";
                first_turn = 'u';
            }
            else
            {
                cout << "\nUser Lost the toss\n";
                first_turn = 'c';
            }
        }
    }
    else 
    {
        cout << "\nChoose correct value H or L\n";
    }
return first_turn;
}

void userturn()
{
    cout << "\n Enter Location ";
    cin >> location;
    if (location == 1)
    {
        row = 0;
        column = 0;
    }
    if (location == 2)
    {
        row = 0;
        column = 1;
    }
    if (location == 3)
    {
        row = 0;
        column = 2;
    }

    if (location == 4)
    {
        row = 1;
        column = 0;
    }
    if (location == 5)
    {
        row = 1;
        column = 1;
    }
    if (location == 6)
    {
        row = 1;
        column = 2;
    }

    if (location == 7)
    {
        row = 2;
        column = 0;
    }
    if (location == 8)
    {
        row = 2;
        column = 1;
    }
    if (location == 9)
    {
        row = 2;
        column = 2;
    }
        if (grid[row][column] != 'o' && grid[row][column] != 'x')
        {
            grid[row][column] = 'x';
        }
        else
        {
            cout << "No Empty Space";
            userturn();
        }
}

void computerturn()
{
            // Check 1
        
        if (grid[0][0] != 'x' && grid[0][0] != 'o')
        {
            grid[0][0] = 'o';
        }
            
            // Check 3

        else if (grid[0][2] != 'x' && grid[0][2] != 'o')
        {
            grid[0][2] = 'o';
        }

            // Check 4

        else if (grid[1][0] != 'x' && grid[1][0] != 'o')
        {
            grid[1][0] = 'o';
        }

            // Check 6

        else if (grid[1][2] != 'x' && grid[1][2] != 'o')
        {
            grid[1][2] = 'o';
        }

            // Check 7 

        else if (grid[2][0] != 'x' && grid[2][0] != '0')
        {
            grid[2][0] = 'o';
        }

               // Check 9

        else if (grid[2][2] != 'x' && grid[2][2] != 'o')
        {
            grid[2][2] = 'o';
        }
        
        
            // Check row 1

        if (grid[0][0] == 'x' && grid[0][1] == 'x')
        {
            grid[0][2] = 'o';
        }
        else if (grid[0][1] == 'x' && grid[0][2] == 'x')
        {
            grid[0][0] = 'o';
        }
            
            // Check row 2

        if (grid[1][0] == 'x' && grid[1][1] == 'x')
        {
            grid[1][2] = 'o';
        }
        else if (grid[1][1] == 'x' && grid[1][2] == 'x')
        {
            grid[1][0] = 'o';
        }

            // Check row 3

        if (grid[2][0] == 'x' && grid[2][1] == 'x')
        {
            grid[2][2] = 'o';
        }
        else if (grid[2][2] == 'x' && grid[1][2] == 'x')
        {
            grid[2][0] = 'o';
        }

            // Check Column 1

        if (grid[0][0] == 'x' && grid[1][0] == 'x')
        {
            grid[2][0] = 'o';
        }
        else if (grid[2][0] == 'x' && grid[1][0] == 'x')
        {
            grid[0][0] = 'o';
        }

               // Check Column 2

        if (grid[0][1] == 'x' && grid[1][1] == 'x')
        {
            grid[2][1] = 'o';
        }
        else if (grid[2][1] == 'x' && grid[1][1] == 'x')
        {
            grid[0][1] = 'o';
        }

           // Check Column 3

        if (grid[0][2] == 'x' && grid[1][2] == 'x')
        {
            grid[2][2] = 'o';
        }
        else if (grid[2][2] == 'x' && grid[1][2] == 'x')
        {
            grid[0][2] = 'o';
        }

               // Check Diagonal 1

        if (grid[0][0] == 'x' && grid[1][1] == 'x')
        {
            grid[2][2] = 'o';
        }
        else if (grid[2][2] == 'x' && grid[1][1] == 'x')
        {
            grid[0][0] = 'o';
        }
        else if (grid[0][0] == 'x' && grid[2][2] == 'x')
        {
            grid[1][1] = 'o';
        }

                  // Check Diagonal 2

        if (grid[0][2] == 'x' && grid[1][1] == 'x')
        {
            grid[2][0] = 'o';
        }
        else if (grid[2][0] == 'x' && grid[1][1] == 'x')
        {
            grid[0][2] = 'o';
        }
        else if (grid[0][2] == 'x' && grid[2][0] == 'x')
        {
            grid[1][1] = 'o';
        }

}

bool resultcheck()
{
        if ((grid[0][0] == 'x' && grid[0][1] == 'x' && grid[0][2] == 'x') ||
            (grid[0][0] == 'o' && grid[0][1] == 'o' && grid[0][2] == 'o'))
            {
            return false;
            }
        else if ((grid[1][0] == 'x' && grid[1][1] == 'x' && grid[1][2] == 'x') ||
                 (grid[1][0] == 'o' && grid[1][1] == 'o' && grid[1][2] == 'o'))
            {
            return false;
            }
        else if ((grid[2][0] == 'x' && grid[2][1] == 'x' && grid[2][2] == 'x') ||
                 (grid[2][0] == 'o' && grid[2][1] == 'o' && grid[2][2] == 'o'))
            {
            return false;
            }
        
        if ((grid[0][0] == 'x' && grid[1][0] == 'x' && grid[2][0] == 'x') ||
            (grid[0][0] == 'o' && grid[1][0] == 'o' && grid[2][0] == 'o'))
            {
            return false;
            }
        else if ((grid[0][1] == 'x' && grid[1][1] == 'x' && grid[2][1] == 'x') ||
                 (grid[0][1] == 'o' && grid[1][1] == 'o' && grid[2][1] == 'o'))
            {
            return false;
            }
        else if ((grid[0][2] == 'x' && grid[1][2] == 'x' && grid[2][2] == 'x') ||
                 (grid[0][2] == 'o' && grid[1][2] == 'o' && grid[2][2] == 'o'))
            {
            return false;
            }
            // check 1st diagonal has all 3 filled with x
        else if ((grid[0][0] == 'x' && grid[1][1] == 'x' && grid[2][2] == 'x') ||
                  (grid[0][0] == 'o' && grid[1][1] == 'o' && grid[2][2] == 'o'))
            {
            return false;
            }

            // check 2nd diagonal has all 3 filled with x
        else if ((grid[0][2] == 'x' && grid[1][1] == 'x' && grid[2][0] == 'x') ||
                 (grid[0][2] == 'o' && grid[1][1] == 'o' && grid[2][0] == 'o'))
            {
            return false;
            }

            // check if there are still empty spaces on the grid

        for(int i=0; i<3; i++)
        
                for(int j=0; j<3; j++)
                
                    if(grid[i][j] != 'x' && grid[i][j] != 'o')
                    
                    return true;

        draw = true; //if the board is draw
        
        return false;
}

int main()

{
    char first_turn;
    char turn;

    bool final_result = false;

    cout << "\t\t\tWelcome to \n";
    cout << "\n\t\tTIC \t TAC \t TOE \t" << endl;
    
    printgrid();
    
    first_turn = tossforfirst();
    
    if (first_turn == 'c')
    {
        cout << endl << "Computer will do First Turn\n";
        grid[0][0] = 'o';
        printgrid();
        turn = 'u';
    }
    else if (first_turn == 'u')
    {
        cout << endl << "User will do First Turn\n";
        userturn();
        printgrid();
        turn = 'c';
    }
    
while(resultcheck())
{
    if(turn == 'c')
    {
        cout << "\n \t \t Computer Turn\n";
        computerturn();
        resultcheck();
        turn = 'u';
    }
    else if(turn == 'u')
    {
        cout << "\n \t \t User Turn\n";
        userturn();
        resultcheck();
        turn = 'c';
    }    

    cout << endl << "-/-/-/-/-/-/-/-/-/-/-" << endl;
    
    printgrid();

    resultcheck();

}
    if (turn == 'c' && draw == false)
        {
            cout << "\nUser Wins\n";
        }
    else if(turn == 'u' && draw == false)
        {
            cout << "\nComputer Wins\n";
        }
    else 
        {
            cout << "\nMatch Draw\n" ;
        }
return 0;
}