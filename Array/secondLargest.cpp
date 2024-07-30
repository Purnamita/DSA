#include <iostream>
#include <vector>
#include <limits.h>

int secondlargest(int arr[] , int size)
{
    int first = INT_MIN , second = INT_MIN;

    for (int i = 0 ; i < size ; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return second ;
}