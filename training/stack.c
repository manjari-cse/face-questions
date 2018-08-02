#include<stdio.h>
#include<stdlib.h>
void main()
{
	int stack[100],size=100;
	int top=-1,optn,new,item,i;
	do
	{
		printf("\n1.push\n2.pop\n3.view\n4.exit");
	scanf("%d",&optn);
	switch(optn)
	{
		case 1:
		{
			if(top==size-1)
			{
				printf("stack is full");
			}
			else
			{
				printf("\nenter the element");
				scanf("%d",&new);
						top=top+1;
				stack[top]=new;
			
		}
							break;
		}
		case 2:
			{
				if(top==-1)
				{
					printf("\nstack is empty");
				}
				else
				{
					item=stack[top];
					printf("poped item is %d",item);
					top--;
				
				}
					break;
			}
		case 3:
			{if(top==-1)
			{
			    printf("stac is empty");
			}
			else
			{
				for(i=top;i>=0;i--)
				{
						printf("%d ",stack[i]);
				
				}
			
			}
				break;
			}
		case 4:
			{
				exit(1);
			}
			
	}
}	while(optn!=4);
}
