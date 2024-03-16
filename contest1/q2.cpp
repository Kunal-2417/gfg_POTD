//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution
{
public:
    int wordToIntValue(const string &word1, const string &word2)
    {
        int n=word1.length();
        int value=0;
        for (int i = 0; i < n; i++)
        {
            value=value+(abs(word1[i]-word2[i]));
        }
       return value; 
    }

    int minimum_difference(int n, vector<string> &words)
    {

        int minDiff = INT_MAX;
        
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                int diff = abs(wordToIntValue(words[i],words[j]));
                minDiff = min(minDiff, diff);
            }
        }

        return minDiff;
    }
};

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<string> words(n);
        for (int i = 0; i < n; i++)
        {
            cin >> words[i];
        }
        Solution obj;
        
        cout << obj.minimum_difference(n, words) << endl;
    }
}

// } Driver Code Ends