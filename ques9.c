 #include<stdio.h>
typedef struct Student
{
    int id,age,_class;
    char name[50];
}std;
int main()
{
    std s[500];
    int i,n;
    printf("how many Students are there?=");
    scanf("%d",&n);
    printf("Enter details of %d Students\n",n);
    for(i=0;i<n;i++)
    {
        printf("ID=");
        scanf("%d",&s[i].id);
        fflush(stdin);
        printf("Name=");
        fgets(s[i].name,50,stdin);
        s[i].name[strlen(s[i].name)-1]='\0';
        printf("Age=");
        scanf("%d",&s[i].age);
        printf("Class=");
        scanf("%d",&s[i]._class);
    }
    display(s,n);
     return 0;
}
void display(std *s,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("Id=%d     Name=%s     Age=%d     Class=%d\n",s[i].id,s[i].name,s[i].age,s[i]._class);

}
