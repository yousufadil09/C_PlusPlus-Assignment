#include <iostream>

using namespace std;

void Count(int my_array[], int len_my_array)
{
    int count_num_find =0; //countNumFind camelcase
    int find_num; //FindNum
    cout << "Number x to be count ";
    cin >> find_num;    

    // Count a number x in array

    for (int i=0; i<len_my_array; i++)
    {
        if (my_array[i] == find_num)
        {
            count_num_find++;
        }
    }
    cout << "\nNumber of occurrences are " << count_num_find; // create display function
}

void Partition(int my_array[], int len_my_array)
{
    int value_index;
    int temp_array;
    int count_num_find =0;
    
    // Using selection sort technique

    for (int i=0; i<len_my_array; i++)
    {
        for (int j=i+1; j<len_my_array; j++)
        {
            value_index = i;

            if (my_array[j] < my_array[value_index])
            {
                value_index = j;
            }
            if (value_index != i)
            {
                temp_array = my_array[i];
                my_array[i] = my_array[value_index];
                my_array[value_index] = temp_array;
            }
        }
    }
    cout << "\nThe sorted array is ";
    
    for (int i=0; i<len_my_array; i++)
    {
        cout << " " << my_array[i];
    }
}

void Duplicates(int my_array[], int len_my_array)
{
    int dup_value = 0;
    int dup_check[10];

    for (int i=0; i<len_my_array; i++)
    {
        if (dup_check[i] != 1) // check duplication is already checked or not
        {
            dup_value = 1; // make the initial count 1 to compensate for the 1st occurrence

            for (int j=i+1; j<len_my_array; j++)
            {
                if (my_array[i] == my_array[j])
                {
                    dup_value ++; // if the element is duplicate increment the count
                    dup_check[j] = 1; // if the element is duplicate mark it's index to 1
                }
            }
                cout << endl << my_array[i] << " is " << dup_value << " times \n";
        }
    
    }
}

void Circular(int my_array[], int len_my_array)
{
    int first_element = my_array[0];
    int second_element = my_array[1];

    // Update all elements except for last 2 elements

    for (int i=0; i<=len_my_array-2; i++)
    {
        my_array[i] = my_array[i+1] + my_array[i+2];   
    }

    // Update last 2 elements outside the loop as they use the original first and second elements of array
    
    my_array[len_my_array-2] = my_array[len_my_array-1] + first_element;
    my_array[len_my_array-1] = first_element + second_element;

    cout << "\nThe updated array is ";
    for (int i=0; i<len_my_array; i++)
    {
        cout << " " << my_array[i];
    }
}

void Search()
{
    int find_number = 0, len_my_array = 0, number_index = 0, i = 0;
    int my_array[100];
    cout << "\nEnter Array Length ";
    cin >> len_my_array;

    while(i < len_my_array)
    {
        cout << "\nEnter Array element " << i+1 << " ";
        cin >> my_array[i];
        i++;
    }
    cout << "\nThe actual array is ";
    for (i = 0; i < len_my_array; i++)
    {
        cout << " " << my_array[i];
    }    
    cout << "\nEnter a number ";
    cin >> find_number ;

    for (int i = 0; i < len_my_array; i++)
    {
        if(my_array[i] == find_number)
    {
        number_index = i ;
    }
    else
    {
        number_index = -1;
    }
    }
    cout << "\nLocation of number " << find_number << " is " << number_index;
}

int main()

{
    int find_num, i=0, j=0,len_my_array=0;
    char your_choice;
    int my_array[100];
    

    cout << "Enter Array Length ";
    cin >> len_my_array;
    
    while(i<len_my_array)
    {
        cout << "\nEnter Array element " << i+1 << " ";
        cin >> my_array[i];
        i++;
    }

    do 
    {   
        cout << "\n The menu operations are";
        cout << "\n A. Count"; 
        cout << "\n B. Partition";
        cout << "\n C. Duplicates"; 
        cout << "\n D. Circular";
        cout << "\n E. Search";
        cin >> your_choice;
    
    switch(your_choice)
        {
        case 'a':
        case 'A':
            Count(my_array, len_my_array);
            break;
        case 'b':
        case 'B':
            Partition(my_array, len_my_array);
            break;
        case 'c':
        case 'C':
            Duplicates(my_array, len_my_array);
            break;
        case 'd':
        case 'D':
            Circular(my_array, len_my_array);
            break;    
        case 'e':
        case 'E':
            Search();
            break;
        default:
            cout << "\n Run the program again and enter correct choice between a and f ";   
        }
    }
    while ((your_choice >= 'a' & your_choice <= 'f') || (your_choice >= 'A' & your_choice <= 'F'));   
    
    return 0;
}