#include <stdio.h> 
#include <stdlib.h> 
  
int x=0;
struct Node 
{ 
  int data; 
  struct Node *next; 
}; 
void printMiddle(struct Node **head,int arr[],int a)  
{  
    struct Node *slow_ptr = *head;  
    struct Node *fast_ptr = *head;  
    if (*head!=NULL)  
    {  
        while (fast_ptr != NULL && fast_ptr->next != NULL)  
        {  
            fast_ptr = fast_ptr->next->next;  
            slow_ptr = slow_ptr->next;  
        }  
     //  printf("The middle element is [%d]\n\n", slow_ptr->data); 
     if(a%2==0)
      arr[x++]=slow_ptr->next->data;
      else
      arr[x++]=slow_ptr->data;
    }  
}  
void push(struct Node** head_ref, int new_data) 
{ 
    struct Node* new_node = (struct Node*) malloc(sizeof(struct Node)); 
  
    new_node->data  = new_data; 
  
   // new_node->next = (*head_ref); 
    new_node->next = (*head_ref);
    
   (*head_ref) = new_node;
   // (*head_ref)    = new_node; 
} 

int main() 
{ 
  int a,data,i,j,*arr,tc;
 // struct Node* head = NULL; 
   printf("enter the how many testcase:");
  scanf("%d",&tc);
  arr = (int*)malloc(tc*sizeof(int));
  for(j=0;j<tc;j++)
  {
  printf("enter the how many elements");
  scanf("%d",&a);
  struct Node* head = NULL; 
  for(i=0;i<a;i++)
  {
    scanf("%d",&data);
    push(&head,data);
  }
  printMiddle(&head,arr,a);
  a=0;
  }
  for(j=0;j<tc;j++)
  {
      printf("%d\n",arr[j]);
  }
  return 0; 
} 
