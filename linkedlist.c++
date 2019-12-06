#include <bits/stdc++.h> 
using namespace std; 
  
// A linked list node  
class Node  
{  
    public: 
    int data;  
    Node *next;  
};  
void push(Node** head_ref, int new_data)  
{  
    /* 1. allocate node */
    Node* new_node = new Node(); 
  
    /* 2. put in the data */
    new_node->data = new_data;  
  
    /* 3. Make next of new node as head */
    new_node->next = (*head_ref);  
  
    /* 4. move the head to point to the new node */
    (*head_ref) = new_node;  
}  
void printList(Node *node)  
{  
    while (node != NULL)  
    {  
        cout<<" "<<node->data;  
        node = node->next;  
    }  
}  
  
/* Driver code*/
int main()  
{  int *arr,n,tc;
    /* Start with the empty list */
    cin>>tc;
    for(int j=0;j<tc;j++)
    {
        Node* head = NULL; 
     cin>>n;
     arr=new int(n);
     for(int i=0;i<n;i++)
     {
         cin>>arr[i];
     push(&head,arr[i]);  
     }
    printList(head);  
    n=0;
    }
    return 0;  
}  
