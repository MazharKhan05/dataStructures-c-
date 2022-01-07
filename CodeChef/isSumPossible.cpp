#include <iostream>
using namespace std;

int main()
{
    int no;
    std::cin >> no;
    int arr[no];
    int t;
    long long int sum = 0;

    for (int i = 0; i < no; i++)
    {
        std::cin >> arr[i];
    }
    std::cin >> t;
    while (t--)
    {
        long long int target;
        int count = 0;
        std::cin >> target;
        for (int i = 0; i < no; i++)
        {
            sum = 0;
            for (int j = i; j < no; j++)
            {
                sum += arr[j];
                if (sum == target)
                {
                    count++;
                }
            }
        }

        std::cout << count << std::endl;
    }

    return 0;
}