#include <iostream>
using namespace std;

//More optimised code with time Complexity of O(n)
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long int no;
        std::cin >> no;
        long int arr[no];
        long int reqArr[no];
        long int sum = 0;

        for (int i = 0; i < no; i++)
        {
            std::cin >> arr[i];

            sum += arr[i];
        }

        for (int i = 0; i < no; i++)
        {
            reqArr[i] = sum - arr[i];
            std::cout << reqArr[i] << " ";
        }

        std::cout << "" << std::endl;
    }
    return 0;
}