#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head=NULL,*current,*new;
void main()
{
    int n,i;
    scanf("%d",&n);
for(i=0;i<n;i++)
{
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    if(head==NULL)
    {head->link==NULL;
        head=new;
        current=new;
    }
    else
    {
        new->link=head;
        head=new;
    }
}
current=head;
while(current!=NULL)
{
	printf("%d->",current->data);
	current=current->link;
}
//deletio at first;
head=head->link;
printf("\ndeletion at first\n");
current=head;
while(current!=NULL)
{
	printf("%d->",current->data);
	current=current->link;
}
}
