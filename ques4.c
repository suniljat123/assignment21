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
    int i,n,max=0;
    printf("how many employees are there?=");
    scanf("%d",&n);
    printf("Enter %d details of Employee(id,name and salary)=",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&e1[i].id);
        fflush(stdin);
        fgets(e1[i].name,50,stdin);
        e1[i].name[strlen(e1[i].name)-1]='\0';
        scanf("%f",&e1[i].salary);
        if(e1[i].salary>max)
        {
            max=e1[i].salary;
        }
    }

    for(i=0;i<n;i++)
        printf("Id=%d     Name=%s     salary=%.2f\n",e1[i].id,e1[i].name,e1[i].salary);
    printf("\n\n\nDetails of Employee with maximum salary:\n");
    for(i=0;i<n;i++)
    {
        if(max==e1[i].salary)
        {
            printf("Id=%d     Name=%s     salary=%.2f\n",e1[i].id,e1[i].name,e1[i].salary);
        }
    }
    return 0;
}
