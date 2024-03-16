//{ Driver Code Starts
// C++ program to check if two strings are isomorphic

#include <bits/stdc++.h>

using namespace std;
#define MAX_CHARS 256

// } Driver Code Ends
class Solution
{
public:
    // Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        unordered_map<char,int> m1;
        unordered_map<char, int> m2;
        for (char c : str1)
        {
            m1[c]++;
        }

        for (char c : str2)
        {
            m2[c]++;
        }
        for(auto i:m1)
        {
            cout<<i.second<<endl;
        }
        for (auto i : m2)
        {
            cout << i.second << endl;
        }
        return m1 == m2;
    }
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t;
    cin >> t;
    string s1, s2;
    while (t--)
    {
        cin >> s1;
        cin >> s2;
        Solution obj;
        cout << obj.areIsomorphic(s1, s2) << endl;
    }

    return 0;
}
// } Driver Code Ends