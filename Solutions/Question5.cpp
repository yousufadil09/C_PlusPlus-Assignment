#include <iostream>
using namespace std;

int main()
{
    int rows = 6;
    char mark = '!';
    char asteric = '\\';
    char dash = '/';
    int i =0, j=0, k=0;

    for (rows = 1; rows<=6; rows++) // iterate through 6 rows loop 1
    {   
        for (int i = 1; i < rows; i++) // skip 1st row for asteric and print asteric in multiple of 2
        {
            cout << asteric << asteric;
        }
        for (int j = 1; j<=(22-4*(rows-1)); j++) // print 22 marks in first row
        {                                        // for row 2 to 6 decrement of 4 is required
            cout << mark;                        
        }
        for (int k = 1; k < rows; k++) // skip 1st row for dash and print dash in multiple of 2
        {
            cout << dash << dash;
        }
        cout << endl;
    }     
    return 0;

}
