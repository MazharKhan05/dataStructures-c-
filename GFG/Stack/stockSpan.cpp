#include <bits/stdc++.h>
#include <stack>
using namespace std;

class Solution
{
public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector<int> calculateSpan(int price[], int n)
    {
        stack<pair<int, int>> st;
        stack<pair<int, int>> st1;
        vector<int> span(n);

        for (int i = 0; i < n; i++)
        {
            span[i] = 1;
            if (st.empty())
            {
                st1.push({i, price[i]});
                st.push({i, price[i]});

                continue;
            }
            else if ((!st.empty()) && (price[i] >= st.top().second))
            {
                int ind = i;
                while ((st.top().second <= price[i]) && (!st.empty()))
                {

                    span[i] += (ind - st.top().first);
                    ind--;
                    st.pop();
                    if (st.size() < 1)
                    {
                        break;
                    }
                }
                st = st1;
                st1.push({i, price[i]});
                st.push({i, price[i]});
            }
            else
            {
                st1.push({i, price[i]});
                st.push({i, price[i]});
            }
        }
        return span;
    }
};

int main()
{
    int n = 134;
    int price[n] = {74, 665, 742, 512, 254, 469, 748, 445, 663, 758, 38, 60, 724, 142, 330, 779, 317, 636, 591, 243, 289, 507, 241, 143, 65, 249, 247, 606, 691, 330, 371, 151, 607, 702, 394, 349, 430, 624, 85, 755, 357, 641, 167, 177, 332, 709, 145, 440, 627, 124, 738, 739, 119, 483, 530, 542, 34, 716, 640, 59, 305, 331, 378, 707,
                    474, 787, 222, 746, 525, 673, 671, 230, 378, 374, 298, 513, 787, 491, 362, 237, 756, 768, 456, 375, 32, 53, 151, 351, 142, 125, 367, 231, 708, 592, 408, 138, 258, 288, 554, 784, 546, 110, 210, 159, 222, 189, 23, 147, 307, 231, 414, 369, 101, 592, 363, 56, 611, 760, 425, 538, 749, 84, 396, 42, 403, 351, 692, 437, 575, 621, 597, 22, 149, 800};

    Solution obj;
    vector<int> res = obj.calculateSpan(price, n);
    for (int i : res)
    {
        cout << i << " ";
    }
    return 0;
}