#include<string.h>
#include<stdio.h>
typedef struct Employee
{
    int id;
    float salary;
    char name[50];
}emp;
int main()
{
    emp e1[200];
    int i,n;
    printf("how many employees are there?=");
    scanf("%d",&n);
    printf("Enter %d details of Employee(id,name and salary):\n",n);
    for(i=0;i<n;i++)
    {
        printf("Enter id:");
        scanf("%d",&e1[i].id);
        fflush(stdin);
        printf("Enter name:");
        fgets(e1[i].name,50,stdin);
        printf("Enter salary:");
        e1[i].name[strlen(e1[i].name)-1]='\0';
        scanf("%f",&e1[i].salary);
    }
    sort_by_name(e1,n);
    for(i=0;i<n;i++)
        printf("Id=%d     Name=%s     salary=%.2f\n",e1[i].id,e1[i].name,e1[i].salary);
    return 0;
}
void sort_by_name(struct Employee *p,int n)
{
    int i,j;
    emp temp;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(p[i].name,p[j].name)==1)
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }

        }
    }
}
