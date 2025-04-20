#include "linearSearch.h"
int main() 

{
    int intArr[] = {10, 20, 30, 40, 50};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    cout << "Index of 30 in int array: " << linearSearch(intArr, intSize, 30) << endl;

    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    cout << "Index of 4.4 in double array: " << linearSearch(doubleArr, doubleSize, 4.4) << endl;

    string strArr[] = {"apple", "banana", "cherry", "date"};
    int strSize = sizeof(strArr) / sizeof(strArr[0]);
    cout << "Index of 'cherry' in string array: " << linearSearch(strArr, strSize, string("cherry")) << endl;

    return 0;
}
