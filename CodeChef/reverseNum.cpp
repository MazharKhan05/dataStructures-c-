#include <iostream>
using namespace std;

int main()
{
    int no_inp;
    cin >> no_inp;
    int arr[no_inp];

    for (int i = 0; i < no_inp; i++)
    {
        int no;
        cin >> no;
        arr[i] = no;
    }

    for (int i = 0; i < no_inp; i++)
    {
        int curr_no = arr[i];
        int reverse = 0;
        int rem;
        while (curr_no != 0)
        {
            rem = curr_no % 10;
            reverse = reverse * 10 + rem;
            curr_no = curr_no / 10;
        }

        std::cout << reverse << std::endl;
    }
    return 0;
}