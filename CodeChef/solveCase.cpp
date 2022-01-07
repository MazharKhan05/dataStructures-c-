#include <iostream>
using namespace std;
#include <set>

int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int no;
        std::cin >> no;
        int arr[no];
        set<int> s;

        for (int i = 0; i < no; i++)
        {
            std::cin >> arr[i];
            s.insert(arr[i]);
        }
        for (int i : s)
        {
            std::cout << i << " ";
        }
        std::cout << "" << std::endl;
        // std::cout << "New Iteration " << t << std::endl;
    }
    return 0;
}