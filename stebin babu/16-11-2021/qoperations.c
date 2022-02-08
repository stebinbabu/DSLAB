#include<stdio.h>
int queue[10],rear=-1,front=-1;
void push()
    {
    int x;
    printf("enter the elements to the queue : ");
        scanf("%d",&x);
        rear=rear+1;
        queue[rear]=x;
    if(front==-1)
        front++;
    }
void pop()
    {

    int item;
    item=queue[front];
    if(front==rear)
        front=rear=-1;
    else
        front=front+1;
    printf("deleted item=%d",item);
    }
void display()
    {
        printf("elements in the queue are : ");
        for(int i=front;i<=rear;i++)
         printf("%d \t",queue[i]);
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
                    case 1 : if(rear>=9)
                            {
                            printf("queue is full");
                            }
                            else
                            {
                                push();
                                }

                            break;

                    case 2 :  if(front<0)
                                {
                                    printf("underflow");
                                }
                                else
                                {
                                    pop();
                                }
                                    break;
                    case 3 : if (front==-1)
                                {
                                    printf("the queue is empty");
                                }
                            else
                                {
                                    display();
                                }
                                break;
                    case 4 : exit(0);
                            break;

                        default:
                        {
                            printf("enter the valid option");
                        }
                }
            }
            while(a!=4);
            return 0;
 }
