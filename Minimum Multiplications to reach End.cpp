#include <bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minimumMultiplication(vector<int> &arr, int start, int end)
    {
        long long int mul = start;
        int cnt = 0;
        for (auto i : arr)
        {
            if (mul == end)
            {
                return cnt;
            }
            if()
            mul = mul * i;
            mul = mul % 100000;
            cnt++;
        }
        if (mul == end)
        {
            return cnt;
        }
        else
        {
            return -1;
        }
    }
};
int main()
{
    vector<int> v = {3, 4, 65};
    int start = 7;
    int end = 66175;
    Solution s;
    cout << s.minimumMultiplication(v, start, end);
    return 0;
}