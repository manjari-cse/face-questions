/*
 * C program to create a linked list and display the elements in the list
 */
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
int  insert_count;
struct node
{
	int num;
	struct node *link;
};
typedef struct node NODE;

void display(NODE *head)
{
	NODE *temp = head;
	while (temp != 0)
    {
        printf("%d=>", temp->num);
        temp = temp -> link;
    }
    printf("NULL\n");
    
}

struct node *insertAtEnd(struct node *head, int data)
{
	NODE *node = head;
	if(node == NULL)
	{
		node = (NODE *) malloc(sizeof(NODE));
		node->num = data;
		node->link = NULL;
		
		// Return the new head
		return node;
	}
	
	while(node->link != NULL)
	{
		node = node->link;
	}
	
	NODE *last_node;
	last_node = (NODE *) malloc(sizeof(NODE));
	last_node->num = data;
	last_node->link = NULL;
	
	node->link = last_node;
	return head;
}

// Returns new head after deletion
NODE* deleteAtEnd(NODE *head)
{int n=1;
	NODE *temp = head;
	
	NODE *delete = head;
	if(temp==NULL)
	{
	    return NULL;
	}
	if(temp->link==NULL)
	{
	    head=NULL;
	}
    while(temp->link!=NULL)
    {
          delete=temp;
        temp=temp->link;
    }
    temp=delete;
    temp->link=NULL;
    return head;
}

void main()
{
  int i, delete_count, tmp;
  
  
  NODE *head = NULL;
  
  scanf("%d",&insert_count);
  for(i = 0; i < insert_count; i++)
  {
	  scanf("%d", &tmp);
	  head = insertAtEnd(head, tmp);
  }
  
  scanf("%d",&delete_count);
  for(i = 0; i < delete_count; i++)
  {
	  head = deleteAtEnd(head);
  }
  
  display(head);
  
}
