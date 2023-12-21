#include <iostream>
#include <string>
#include <cstring>
#include <stdio.h>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    
    int len_my_array, i=0, j=0, diff = INT_MAX, temp =0, A=0, B= 0, diff_max;
    int my_array[1000];
    
    cout << "Enter array length ";
    cin >> len_my_array;
    

    while(i<len_my_array)
    {
        cout << "\nEnter Array element " << i+1 << " ";
        cin >> my_array[i];
        i++;
    }
    
    for (i=0; i<len_my_array; i++)
    {
        for (j=i+1; j<len_my_array; j++)
        {
            if (abs(my_array[i]-my_array[j]) < diff)
            {
                diff =abs(my_array[i]-my_array[j]);
                A = i;
                B = j;
            }
        }
    }
    cout<< "\nMinimum Difference is " << diff<< "\nFor pair "<< my_array[A] << " "<< my_array[B] << endl;
    
    for (i=0; i<=len_my_array; i++)
    {
            for (j=i+1; j<len_my_array; j++)
            {
                if (my_array[j] < my_array[i]) //Using Bubble Sort Technique
                    {
                        temp = my_array[i];
                        my_array[i] = my_array[j];
                        my_array[j] = temp;
                    }
            }
    }        
    for (i =0; i<len_my_array; i++)
    {
        diff_max = my_array[len_my_array-1] - my_array[0];
    }
    cout<< "\nMaximum Difference is " << diff_max<< "\nFor pair "<< my_array[len_my_array-1] << " "<< my_array[0] << endl;
   
   return 0;
}