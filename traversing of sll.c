#include<stdio.h>
#include<stdlib.h>
void createList();
void traverseList(); 
struct node//Structure of a node 
{ 
   int data;//Data 
   struct node *next;//Address 
}*head; 

int main() 
{ 
   int n; 
   printf("Enter the total number of nodes: "); 
   scanf("%d", &n); 
   createList(n); 
   printf("\nData in the list \n"); 
   traverseList(); 
   return 0; 
} 
 
void createList(int n)//Create a list of n nodes 
{ 
   struct node *newNode, *temp; int data, i; 
   head = (struct node *)malloc(sizeof(struct node));
   if(head == "NULL")
   { 
      printf("Unable to allocate memory."); 
      exit(0); 
   }
   printf("enter the data");
   scanf("%d",&data);
   head->data=data;
   head->next= NULL;
   temp=head;
   for(i=2;i<n;i++)
   {
   	newNode=(struct node*)malloc(sizeof(struct node));
   }

	printf("enter the data of node");
	scanf("%d",&data);
	newNode->data=data;
	newNode->next=NULL;
	temp->next=newNode;
	temp=temp->next;   
 }

void traverseList() 
{ 
   struct node *temp; 
   if(head == NULL) // Return if list is empty 
{ 
   printf("List is empty."); 
   return; 
} 
   temp = head; 
while(temp != NULL) 
{ 
    printf("Data = %d\n", temp->data); 
// Print data of current node 
    temp = temp->next; 
// Move to next node 
} 
}

      

