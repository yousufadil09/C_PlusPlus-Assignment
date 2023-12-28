#include <iostream>
#include <string>

using namespace std;

int number_one;
int number_two; // declaring these variables as grid might take up some padding bytes and increase memory
int indexone;
int indextwo;
int warning_count = 0;
int wins_count = 0;
int rounds_count = 0;
static int currentindex = 0;
int array_in[1000];

#define max = 1000;
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


    square[12].num = 13;
    square[12].color = "red";

    square[13].num = 14;
    square[13].color = "blue";

    square[14].num = 15;
    square[14].color = "orange";

    square[15].num = 16;
    square[15].color = "grey";

    square[16].num = 17;
    square[16].color = "green";

    square[17].num = 18;
    square[17].color = "red";


    square[18].num = 19;
    square[18].color = "red";

    square[19].num = 20;
    square[19].color = "green";

    square[20].num = 21;
    square[20].color = "grey";

    square[21].num = 22;
    square[21].color = "orange";

    square[22].num = 23;
    square[22].color = "blue";

    square[23].num = 24;
    square[23].color = "red";



    square[24].num = 25;
    square[24].color = "blue";

    square[25].num = 26;
    square[25].color = "orange";

    square[26].num = 27;
    square[26].color = "grey";

    square[27].num = 28;
    square[27].color = "green";

    square[28].num = 29;
    square[28].color = "red";

    square[29].num = 30;
    square[29].color = "blue";



    square[30].num = 31;
    square[30].color = "blue";

    square[31].num = 32;
    square[31].color = "red";

    square[32].num = 33;
    square[32].color = "green";

    square[33].num = 34;
    square[33].color = "grey";

    square[34].num = 35;
    square[34].color = "orange";

    square[35].num = 36;
    square[35].color = "blue";


}

void inputTwoNumbers(int input_array[])
{
    bool warning = false;
    static int currentindex = 0;
    cout << "\nEnter 2 numbers betwee 1 & 36\n";
    if (currentindex+1 <= 1000)
    {   
        cin >> input_array[currentindex];
        cin >> input_array[currentindex+1];
    }
    else
    {
        cout << "Max inputs reached";
    }
        currentindex+=2;

        number_one = input_array[currentindex-2];
        number_two = input_array[currentindex-1];

    for (int i=0; i<currentindex-2; i++)
    {
        if(number_one == input_array[i] || number_two == input_array[i])
            {
                warning = true;
            }
    }
    if(warning == true)
    {
        warning_count++;
        cout << "\nWARNING " << warning_count << " Round " << rounds_count+1 << " is not considered\n";
        if(warning_count == 4)
        {
            cout << "\n WARNING 4 ***END OF PROGRAM*** ";
        }
    }
}

void colorcheck(grid square[36])
{
    bool wins = false;
    if((number_one >=1 && number_one <=36) && (number_two >=1 && number_two <= 36))
    {
        for (int i=0; i<36; i++)
        {
            if (number_one == square[i].num)
                {
                    indexone = i;
                }
            if (number_two == square[i].num)
                {
                    indextwo = i;
                }
        }    
            if(square[indexone].color == square[indextwo].color)
            {
                wins_count++;
                rounds_count++;
                cout << endl << number_one << " " << number_two << " are equal. ";
                cout << "Round " << rounds_count;
            }
            else 
            {
                rounds_count++;
                cout << endl << number_one << " " << number_two << " are not equal. "; 
                cout << "Round " << rounds_count;
            }
            
            if(wins_count == 3)
            {
                cout << "\nIt's a WIN !!\n";
            }

    }
    else 
    {
        cout << "\nINCORRECT INPUT\n";
        inputTwoNumbers(array_in);
    }
}


int main()
{
    grid square[36];
    
    
    do
    {
    replicategrid(square);
    inputTwoNumbers(array_in);
    colorcheck(square);

    if(wins_count == 3 || rounds_count == 5)
            {
                cout << "End of Program";
                break;
            }
    } 
    while(warning_count != 4);
    
    cout << "\n Total Warnings " << warning_count;
    cout << "\n Total Rounds " << rounds_count;
    cout << "\n Total Wins " << wins_count;
    
    return 0;
}


