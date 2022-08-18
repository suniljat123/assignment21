#include<stdio.h>
typedef struct Employee
{
    int id;
    float salary;
    char name[50];
}emp;
int main()
{
    emp e1[5];
    int i;
    printf("Enter 5 details of Employee(id,name and salary)=");
    for(i=0;i<5;i++)
    {
        scanf("%d",&e1[i].id);
        fflush(stdin);
        fgets(e1[i].name,50,stdin);
        e1[i].name[strlen(e1[i].name)-1]='\0';
        scanf("%f",&e1[i].salary);
    }
    for(i=0;i<5;i++)
        printf("Id=%d     Name=%s     salary=%.2f\n",e1[i].id,e1[i].name,e1[i].salary);
    return 0;
}
