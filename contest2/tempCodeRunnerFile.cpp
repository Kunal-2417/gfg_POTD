class Solution
{
public:
    string flipCoins(int N, std::string s)
    {
        std::string s1 = "101";
        std::string s2 = "010";
        if (s.find(s1) != std::string::npos || s.find(s2) != std::string::npos)
        {
            return "No";
        }
        else
        {
            return "Yes";
        }
    }
};