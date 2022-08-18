 #include<stdio.h>
typedef struct Marks
{
    int roll_no;
    float phy_marks,chem_marks,maths_marks;
    char name[50];
}marks;
int main()
{
    marks s[50];
    int i,n;
    printf("how many Students are there?=");
    scanf("%d",&n);
    printf("Enter details of %d Students\n",n);
    for(i=0;i<n;i++)
    {
        printf("Roll.no=");
        scanf("%d",&s[i].roll_no);
        printf("Name=");
        fflush(stdin);
        fgets(s[i].name,50,stdin);
        s[i].name[strlen(s[i].name)-1]='\0';
        printf("Physics_marks=");
        scanf("%f",&s[i].phy_marks);
        printf("Chemistry marks=");
        scanf("%f",&s[i].chem_marks);
        printf("maths marks=");
        scanf("%f",&s[i].maths_marks);
    }
    display(s,n);
    printf("--------------------------------------------------------------------------------------");
    result(s,n);
     return 0;
}
void display(marks *s,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("Roll.no.=%d     Name=%s     Physics marks=%.2f     Chemistry marks=%.2f      Maths marks=%.2f\n",s[i].roll_no,s[i].name,s[i].phy_marks,s[i].chem_marks,s[i].maths_marks);

}
void result(marks *s,int n)
{
    int i;
    float avg;
    for(i=0;i<n;i++)
    {
        avg=(s[i].phy_marks+s[i].chem_marks+s[i].maths_marks)/3;
        printf("\nPercentage of %d Roll no.=%.2f",s[i].roll_no,avg);
    }
}
