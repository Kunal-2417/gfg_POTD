#include<bits/stdc++.h>
using namespace std;
#define ll long long
class Solution
{
public:
    string flipCoins(int N, std::string s)
    {
        std::string s1 = "101";
        std::string s2 = "010";
        if(N==2)
        {
            if(s=="10" || s=="01")
            {
                return "Yes";
            }
            else
            {
                return "No";
            }
        }
        if(N==1){
            if(s=="1" || s=="0")
            {
                return "Yes";
            }
            else
            {
                return "No";
            }
        }
        int ans[N]={1};
        for (int i = 0; i < N-1; i++)
        {
            if(s[i]=='1' && s[i+1]=='0')
            {
                s[i]='0';
                s[i+1]='1';
            }
            else if(s[i]=='0' && s[i+1]=='1')
            {
                s[i]='1';
                s[i+1]='0';
            }
        }
       
    }
};
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        string s;
        cin>>s;
        Solution ob;
        cout<<ob.flipCoins(N, s)<<endl;
    }    
return 0;
}