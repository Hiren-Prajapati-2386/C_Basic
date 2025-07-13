//program to find max & min num in array eliment
#include<stdio.h>
int main()
{
    int a[10];
    printf("Enter 10 num :-");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);    
    }

    int max = a[0];
    int min = a[0];

    for(int i=1;i<10;i++)
    {
        if(max<a[i])
        max = a[i];
        if(min>a[i])
        min = a[i];
    }
    
    printf("maximam num in array is %d\n",max);
    printf("minimam num in array is %d\n",min);

}

//max num in arr using function
// #include<stdio.h>
// int findmax(int a[],int);
// int main()
// {
//     int arr[10];
//     printf("Enter arr eliment :\n");
//     for(int i=0;i<10;i++)
//     {
//         scanf("%d",&arr[i]);
//     }

//     printf("max num in arr is %d",findmax(arr,10));


// }

// int findmax(int a[],int n)
// {
//     int max =a[0];
//     for(int i=0;i<n;i++)
//     {
//         if(max<a[i])
//         {
//             max = a[i];
//         }
//     }

//     return(max);
// }