#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
}*head=NULL,*current,*new;
void push()
{
    
    new=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&new->data);
    if(head==NULL)
    {
        new->link==NULL;
        head=new;
        current=new;
    }
    else
    {
        new->link=head;
        head=new;
        
    }
}
void pop()
{if(head==NULL)
{
    printf("\nstack is empty");
}
else
{printf("\n %d is poped",head->data);
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
        printf("\n1.push\n2.pop\n3.display\n4.exit");
        scanf("%d",&optn);
        switch(optn)
        {
            case 1:
            {
                push();
                break;
            }
            case 2:
            {
                if(head==NULL)
                {
                    printf("stack empty");
                }
                else
                 pop();
                 break;
            }
            case 3:
            {
                if(head==NULL)
                printf("stack empty");
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
