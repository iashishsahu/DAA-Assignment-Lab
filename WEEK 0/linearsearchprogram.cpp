#include <iostream>
using namespace std;
void Linear_Search(int arr[], int value, int i, int n)
        {   int flag = 0;
            for (i = 0; i < n ; i++)
            {
                if (value == arr[i] )
                {
                    flag = 1;
                    break;
                }
            }
            if (flag == 1)
                cout<<"Element is present in the array at position "<<i+1;
            else
                cout<<"Element is not present in the array.";
        }
int  main()
{
    int i, search, num;
    cout<<"Enter the number of elements: ";
    cin>>num;
    int array[num];
    cout<<"Enter the elements one by one \n";
    for (i = 0; i < num; i++)
        cin>> array[i];
    cout<<"Enter the element to be searched   ";
    cin>>search;
    Linear_Search(array,search,i,num);
    return 0;
}