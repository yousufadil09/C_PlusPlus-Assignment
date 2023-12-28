#include <iostream>
#include <string>

using namespace std;

int number_one;
int number_two; // declaring these variables as grid might take up some padding bytes and increase memory
int indexone;
int indextwo;

struct grid{
        int num;
        string color;
    };

void replicategrid(grid square[36])
{
    square[0].num = 1;
    square[0].color = "green";

    square[1].num = 2;
    square[1].color = "red";

    square[2].num = 3;
    square[2].color = "blue";

    square[3].num = 4;
    square[3].color = "orange";

    square[4].num = 5;
    square[4].color = "grey";

    square[5].num = 6;
    square[5].color = "green";


    square[6].num = 7;
    square[6].color = "green";

    square[7].num = 8;
    square[7].color = "grey";

    square[8].num = 9;
    square[8].color = "orange";

    square[9].num = 10;
    square[9].color = "blue";

    square[10].num = 11;
    square[10].color = "red";

    square[11].num = 12;
    square[11].color = "green";

}

void inputTwoNumbers()
{
    cout << "\nEnter 2 numbers betwee 1 & 36\n";
    cin >> number_one;
    cin >> number_two;
}

void colorcheck(grid square[36])
{
    if((number_one >=1 && number_one <=36) && (number_two >=1 && number_two <= 36))
    {
        cout << "\nCorrect numbers";
        for (int i=0; i<36; i++)
        {
            if (number_one == square[i].num)
                {
                    // cout << "\n1 matches at ";
                    indexone = i;
                }
            if (number_two == square[i].num)
                {
                    // cout << "\n2 matches at ";
                    indextwo = i;
                }
        }    
            if(square[indexone].color == square[indextwo].color)
            {
                cout << "\nare equal";
            }
            else 
            {
                cout << "\nare not equal";
            }
    }
    else 
    {
        cout << "\nEnter correct numbers between 1 and 36\n";
        // inputTwoNumbers();
    }
}


int main()
{
    grid square[36];

    replicategrid(square);
    inputTwoNumbers();
    colorcheck(square);

    return 0;
}


