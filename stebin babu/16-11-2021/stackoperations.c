#include<stdio.h>
int stack[5],top=-1;
void push()
{
    int x;

            printf("enter the value to push : ");
            scanf("%d",&x);
            top++;
            stack[top]=x;
        }
void pop()
{
    int item;
    printf("deleting values  from the top");

    item=stack[top];
    top--;
    }
void display()
{
    printf("the values in the array is");
    for(int i=top;i>=0;--i)
    {
        printf("\n%d",stack[i]);
    }
}
main()
{

int a;
do{
printf(" \n menu");
printf("\n 1.push \n 2. pop \n3.display\n4.exit");
printf("\nenter your option : ");
scanf("%d",&a);
switch(a)
{
case 1 : if(top==10)
            {
                printf("stack is full");
            }
          else
          {
           push();
          }
         break;

case 2 : if(top==-1)
            {
                printf(" sorry stack is empty");
            }
         else
            {
              pop();
            }
          break;
case 3 :  display();
           break;

case 4 : break;

default:
    {
        printf("enter the valid option");
    }
}
}
while(a!=4);
return 0;
}
