#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string findLargest(int N, int S)
    {
        if (S == 0 && N == 1)
        {
            return "0";
        }
        if (S < 1 || S > 9 * N)
        {
            return "-1"; 
        }

        string result;

        while (N--)
        {
            for (int digit = 9; digit >= 0; --digit)
            {
                if (S - digit >= 0)
                {
                    result += to_string(digit);
                    S -= digit;
                    break;
                }
            }
        }

        return result;
    }
};
int main()
{
    int N=2,S=9;
    Solution s;
    cout<<s.findLargest(N,S); 
return 0;
}