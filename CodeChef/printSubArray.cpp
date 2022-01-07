#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int no_ele = 0;
    int leftLim = 0;
    int rightLim = 0;

    std::cin >> no_ele;
    int arr[no_ele];

    for (int i = 0; i < no_ele; i++)
    {
        int no;
        std::cin >> no;
        arr[i] = no;
    }

    //take limits to print subArray
    std::cin >> leftLim;
    std::cin >> rightLim;

    int subArray[rightLim - leftLim];
    //std::cout << (rightLim - leftLim) << std::endl;
    //extract subArray from given array
    for (int j = leftLim - 1; j < rightLim; j++)
    {
        subArray[j] = arr[j];
        std::cout << subArray[j] << " ";
    }
    return 0;
}