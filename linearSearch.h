#include <iostream>
#include <string>
using namespace std;


template <typename T>
int linearSearch(T arr[], int size, T key) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == key)
            return i;
    }
    return -1; 
}
