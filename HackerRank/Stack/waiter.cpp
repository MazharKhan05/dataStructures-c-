#include <bits/stdc++.h>
using namespace std;
#include <vector>
#include <algorithm>

vector<int> getPrime(int q)
{
    vector<int> primeNo;
    vector<int> res;

    for (int i = 2; i < 10000; i++)
    {
        int no = i;
        bool flag = true;
        int j = 2;
        while ((j < no))
        {
            if ((no % j == 0))
            {
                flag = false;
                break;
            }

            j++;
        }

        // cout << "prime no " << no << " ";
        if (flag)
        {
            primeNo.push_back(no);
        }

        j++;
    }
    primeNo.erase(primeNo.begin() + q, primeNo.end());
    // cout << *primeNo.begin() + (q - 2) << " " << *primeNo.end() << endl;
    for (int i : primeNo)
    {
        cout << i << endl;
    }
    return primeNo;
}
vector<int> waiter(vector<int> number, int q)
{
    int plateNo = number.size() - 1;
    int qryNo = 0;
    vector<int> B;
    vector<int> A;
    vector<int> ans;
    vector<int> prime = getPrime(q);

    int i = 0;
    while ((qryNo < q) && (plateNo >= 0))
    {
        if ((number[plateNo] % prime[qryNo] == 0))
        {
            // cout << "plateNo and primeNo " << number[plateNo] << " " << prime[qryNo] << endl;
            B.push_back(number[plateNo]);
        }
        else
        {
            A.push_back(number[plateNo]);
        }
        plateNo--;
        if (plateNo == -1)
        {
            qryNo++;
            reverse(B.begin(), B.end());
            number.clear();
            copy(A.begin(), A.end(), back_inserter(number));
            copy(B.begin(), B.end(), back_inserter(ans));
            if (qryNo == q)
            {
                break;
            }
            A.clear();
            B.clear();

            plateNo = number.size() - 1;
        }
    }
    reverse(A.begin(), A.end());
    copy(A.begin(), A.end(), back_inserter(ans));
    for (int i : ans)
    {
        cout << i << " ";
    }
    return ans;
}

int main()
{
    int n = 5;
    int q = 1200;

    vector<int> arr = {3, 3, 4, 4, 9};
    vector<int> prime = getPrime(q);
    // waiter(arr, q);
    return 0;
}