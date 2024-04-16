#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    int minimizeDifference(int n, int k, vector<int> &arr)
    {
        int maxi[n], mini[n];
        maxi[n - 1] = arr[n - 1];
        mini[n - 1] = arr[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            maxi[i] = max(arr[i], maxi[i + 1]);
            mini[i] = min(arr[i], mini[i + 1]);
        }
        int ans=INT_MAX;
        int mx=INT_MIN;
        int mn=INT_MAX;
        ans=min(ans,maxi[k]-mini[k]);
        int i;
        for (i = 1; i < n-k; i++)
        {
            int rmx=maxi[i+k];
            int rmn=mini[i+k];
            int lmx = max(mx, arr[i -1]);
            int lmn = min(mn, arr[i -1]);
            ans=min(ans,max(rmx,lmx)-min(rmn,lmn));
        }

        int lmx = max(mx, arr[i - 1]);
        int lmn = min(mn, arr[i - 1]);
        ans=min(ans,(lmx-lmn));

        return ans;
    }
};
int main()
{
     Solution s;
     vector<int> v{2,3,1,4,6,7};
     s.minimizeDifference(6,2,v);
return 0;
}