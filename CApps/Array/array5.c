// program to find num is in array eliment
#include<stdio.h>
int main()
{
    int num[10],key,flag=0,pos;
    printf("Enter 10 num :-\n");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&num[i]);
    }
    printf("Enter num to search in array eliment\n");
    scanf("%d",&key);
    for(int i=0;i<10;i++)
    {
        if(num[i]==key)
        {
           flag++;
           pos=i+1;
            break;
        }
    }
    if(flag==1)
    printf("number found at %d position in array",pos);
    else
    printf("number not found in array");
}