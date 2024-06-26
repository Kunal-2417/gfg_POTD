#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int solve(int st, vector<int> &nums, vector<int> &dp)
    {
        if (dp[st] != -1)
        {
            return dp[st];
        }
        int ans = 1;
        for (int i = st + 1; i < nums.size(); i++)
        {
            if (nums[i] >= nums[st] + i - st)
            {
                ans = max(ans, 1 + solve(i, nums, dp));
            }
        }
        return dp[st] = ans;
    }
    int min_operations(vector<int> &nums)
    {
        int lps = 1;
        vector<int> dp(nums.size(), -1);
        for (int i = 0; i < nums.size(); i++)
        {
            lps = max(lps, solve(i, nums, dp));
        }
        return nums.size() - lps;
    }
};
int main()
{
     vector<int> inpu={1,2,3,6,5,4};
     Solution s;
     cout<<s.min_operations(inpu);
return 0;
}