//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
    int completeRows(int n)
    {
        int ct=0;
        int i=1;
        while(n>i)
        {
            n=n-i;
            i++;
            ct++;
        }
        return ct;
        // return int((-1 + std::sqrt(1 + 8 * n)) / 2);
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    scanf("%d ", &t);
    while (t--)
    {

        int n;
        scanf("%d", &n);

        Solution obj;
        int res = obj.completeRows(n);

        cout << res << endl;
    }
}

// } Driver Code Ends