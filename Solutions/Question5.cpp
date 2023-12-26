#include <iostream>
using namespace std;

int main()
{
    int rows = 6;
    int chac = 22;
    int i,space,j;

    for (int i = 6; i>0; i--)
    {
        for (int k = 0; k<i; k++)
        {    
            cout <<"";  
            // cout <<  "For k = " << k << "\\";  
            // cout << "loop 1";
        
        for (int  j = k; j<i; j++)  
        {    cout << "!" << j;   
        // cout << "For i = " << i << "For j = " << j << "!";   
            // cout << "loop 2";
        }
        }
        // for (int l = 6; l>i; l-=2)
        // {    cout << "//";   
        //     // cout << "loop 3";
        //     }
    cout << endl;
    }
  

    return 0;

}
