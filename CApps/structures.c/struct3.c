//Enter 5 employ data like code,name,salary and find max salary person name and employ code
#include<stdio.h>
struct employ{
    int code;
    char name[50];
    float salary;
};

int main()
{
    int pos;
    struct employ a[5];
    for(int i=0;i<5;i++)
    {
        printf("Enter %d employ information :\n",i+1);
        printf("name = ");
        fgets(a[i].name,50,stdin);
        printf("employ code =");
        scanf("%d",&a[i].code);
        printf("salary = ");
        scanf("%f",&a[i].salary);

        getchar();

    }

    float max = a[0].salary;
    for(int i=0;i<5;i++)
    {
        if(a[i].salary>max)
            max = a[i].salary;
    }

    for(int i=0;i<5;i++)
      if(max==a[i].salary)
        pos = i;

    printf("maximam salary employ :-\n");
    printf("name : %s",a[pos].name);
    printf("code : %d\n",a[pos].code);
    printf("salary : %f\n",a[pos].salary);
    return 0;
}