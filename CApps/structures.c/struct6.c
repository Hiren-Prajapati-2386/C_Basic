//make program to store detaile of student and staff
#include<stdio.h>
typedef struct student
{
    char name[50];
    int roll;
    float cgpa;
}std;

typedef struct staff
{
    char name[50];
    char position[50];
    int code;
}tech;

void printstudent(std s[],int n);
void printstaff(tech t[],int m);

int main()
{
    int n,m;
    printf("how many student detail you enter :");
    scanf("%d",&n);
    std s[n];
    printf("Enter student detaile :\n");
    for(int i=0;i<n;i++)
    {
        printf("%d name = ",i+1);
        getchar();                //consume new line charecter for fgets
        fgets(s[i].name,50,stdin);
        printf("roll num = ");
        scanf("%d",&s[i].roll);
        printf("cgpa = ");
        scanf("%f",&s[i].cgpa);
        getchar();
    }
    
    printf("how many staff detail you enter :");
    scanf("%d",&m);
    tech t[m];
    printf("Enter staff detaile :\n");
    for(int i=0;i<m;i++)
    {
        printf("%d name = ",i+1);
        getchar();
        fgets(t[i].name,50,stdin);
        printf("position = ");
        fgets(t[i].position,50,stdin);
        printf("code = ");
        scanf("%d",&t[i].code);
        getchar();
    }
       printstudent(s,n);
       printf("\n");
       printstaff(t,m);

       return 0;
}

void printstudent(std s[],int n)
{
    int num;
    printf("Enter roll num of student :");
    scanf("%d",&num);
    for(int i=0;i<n;i++)
    {
        if(s[i].roll==num)
        {
            printf("name = %s",s[i].name);
            printf("cgpa = %f",s[i].cgpa);
        }
        else
        printf("invalid roll number :\n");
    }
}

void printstaff(tech t[],int m)
{
    int num;
    printf("Enter code of staff :");
    scanf("%d",&num);
    for(int i=0;i<m;i++)
    {
        if(t[i].code==num)
        {
            printf("name = %s",t[i].name);
            printf("position = %s",t[i].position);
        }
        else
        printf("invalide staff code :\n");
    }
}
