//program to print information of patient
#include<stdio.h>
#include<string.h>
typedef struct  hospitaldetail
{
    char name[50];
    char diseases[50];  //using typedef we can make sort name for struct
    int age;
}hinfo;

void cheakdiseases(hinfo a[],int n,char disea[]);

int main()
{
    hinfo a[5];
    char disea[50];
    printf("Enter patient detail :-\n");
    for(int i=0;i<5;i++)
    {
        printf("%d name = ",i+1);
        fgets(a[i].name,50,stdin);
        printf("diseses = ");
        fgets(a[i].diseases,50,stdin);
        printf("age = ");
        scanf("%d",&a[i].age);

        getchar();
    }
        printf("Enter diseases name to print patient detail\n");
        fgets(disea,50,stdin);
        cheakdiseases(a,5,disea);

        return 0;
}

void cheakdiseases(hinfo a[],int n,char disea[])
{
    printf("patient with %s:-\n",disea);
    for(int i=0;i<n;i++)
    {
        if(strcmpi(a[i].diseases,disea))
        {
            printf("name of patint is %s",a[i].name);
            printf("age = %d\n",a[i].age);
        }
    }
}
