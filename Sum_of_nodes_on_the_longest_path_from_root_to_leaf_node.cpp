#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
class Solution
{
public:
    pair<int, int> find(Node *root)
    {
        if(root==NULL)
        {
            return {0,0};
        }
        pair<int, int> left = find(root->left);
        pair<int, int> right = find(root->right);
        if(left.first==right.first)
        {
            return {left.first+1,max(left.second,right.second)+root->data};
        }
        if(left.first>right.first)
        {
            return {left.first+1,left.second+root->data};
        }
        else{
            return {right.first + 1, right.second + root->data};
        }
    }
    int sumOfLongRootToLeafPath(Node *root)
    {
        pair<int,int> p=find(root);
        return p.second;
    }
};
int main()
{
     
return 0;
}