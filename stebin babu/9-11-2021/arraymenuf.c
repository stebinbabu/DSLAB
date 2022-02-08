#include<stdio.h>
main()
{
int a[50],s,pos,num,x,i,c;
do
{
printf("\t menu");
printf("\n enter the size of the array : ");
scanf("%d",&s);
printf("enter the values to the array : ");
for(int i=0;i<=s;i++)
{
    scanf("%d",&a[i]);
}
printf("1. ARRAY TRAVERSAL");
printf("2. ARRAY INSERTION");
printf("3. ARRAY DELETION");
printf("4. ARRAY SEARCHING");
printf("which is wanted to perfome : ");
scanf("%d",&x);
switch(x)
{
case 1 : printf("  element of the array :");
          for(int j=0;j<=s;j++)
            {
                printf("%d",a[j]);
            }
                break;
case 2 :
            for(int i=s-1;i>=pos-1;i--)
                {
                a[i+1]=a[i];

                }
                a[pos-1]=num;
                //s++;
                printf(" new element of the array :");
                for(int i=0;i<=s;i++)
                    printf("%d",a[i]);
                    break;

case 3 :    printf("enter the postion of the element to delete : ");
            scanf("%d",&pos);
            for(int i=pos-1;i<s-1;i++)
                {
                a[i]=a[i+1];
                }
                //s--;
            printf(" new element of the array :");
            for(int j=0;j<s-1;j++)
                printf("%d",a[j]);
                break;


case 4 :     printf("enter the element to find : ");
            scanf("%d",&num);
            for(i=0;i<s;i++)
            {
            if (a[i]==num)
            printf("entered no is at %d postion",i+1);
            }
            break;

}

printf("enter 1 for more and 0 to exit");
scanf("%d",&c);
}
while(c==0);
}
