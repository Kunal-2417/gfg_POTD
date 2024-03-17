#include<bits/stdc++.h>
using namespace std;
#define ll long long
struct Node
{
    int data;
    struct Node *next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // your task is to complete this function
    int countPairs(struct Node *head1, struct Node *head2, int x)
    {
        int cnt=0;
        unordered_map<int,int> m;
        struct Node *temp1=head1;
    while(temp1!=NULL){
        
        m[temp1->data]++;
        temp1=temp1->next;
    }
    struct Node *temp2 = head2;
    while (temp2 != NULL)
    {
        if (m[x-temp2->data]) 
        {
            cnt++;
        }
         temp2 = temp2->next;

    }
    return cnt;
    }
};
int main()
{
     
return 0;
}