//{ Driver Code Starts
//

#include <bits/stdc++.h> 
using namespace std; 

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
};


void printList(Node* node) 
{ 
	while (node != NULL) { 
		cout << node->data <<" "; 
		node = node->next; 
	}  
	cout<<"\n";
}

// } Driver Code Ends
/*
structure of the node of the list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        struct Node *temp = head;
        struct Node *key = new Node(data);
        int k=0;
        if(temp==NULL)
        {
            return head;
        }
        while(temp!=NULL)
        {
            if(temp->data<data)
            {
                k++;
                temp=temp->next;
            }
            else{
                break;
            }
        }
        if(k==0)
        {
            key->next=head;
            
            return key;
        }
        else{
            temp=head;
            struct Node *t1 = head;
            while (k-1>0)
            {
                k--;
                temp=temp->next;
            }
            struct Node *run = temp->next;
            temp->next=key;
            key->next=run;
            return t1;
        }
    }
};


//{ Driver Code Starts.
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
        
		int data;
		cin>>data;
		
		struct Node *head = new Node(data);
		struct Node *tail = head;
		for (int i = 0; i < n-1; ++i)
		{
			cin>>data;
			tail->next = new Node(data);
			tail = tail->next;
		}
		
		int k;
		cin>>k;
		Solution obj;
		head = obj.sortedInsert(head,k);
		printList(head); 
	}
	return 0; 
} 

// } Driver Code Ends