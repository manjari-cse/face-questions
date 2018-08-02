#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head=NULL,*current,*new;
void enqueue()
{
    
    new=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the element to be enqueued: ");
    scanf("%d",&new->data);
    if(head==NULL)
    {
        head=new;
        current=new;
    }
    else
    {
        current->link=new;
        current=new;
        current->link=NULL;
        
    }
}
void dequeue()
{if(head==NULL)
{
    printf("\nqueue is empty");
}
else
{printf("\n %d is dequeued",head->data);
head=head->link;
current=head;
}
}
void display()
{current=head;
    while(current!=NULL)
{
	printf("%d ",current->data);
	current=current->link;
}
}void main()
{
    int optn;
    do
    {
        printf("\n1.push\n2.pop\n3.display\n4.exit:    ");
        scanf("%d",&optn);
        switch(optn)
        {
            case 1:
            {
                enqueue();
                break;
            }
            case 2:
            {
                if(head==NULL)
                {
                    printf("queue is empty");
                }
                else
                 dequeue();
                 break;
            }
            case 3:
            {
                if(head==NULL)
                printf("queue empty");
                else
                display();
                break;
            }
            case 4:
            {
                exit(0);
            }
        }
    }while(optn!=4);
}
