 #include<stdio.h>
typedef struct Time
{
    int hr,min,sec;
}time;
int main()
{
    time t1,t2,r;
    printf("Enter time1:\n");
    printf("Enter hour=");
    scanf("%d",&t1.hr);
    printf("Enter minutes=");
    scanf("%d",&t1.min);
    printf("Enter seconds=");
    scanf("%d",&t1.sec);
    printf("Enter time2:\n");
    printf("Enter hour=");
    scanf("%d",&t2.hr);
    printf("Enter minutes=");
    scanf("%d",&t2.min);
    printf("Enter seconds=");
    scanf("%d",&t2.sec);
    if(t1.sec>60)
    {
        t1.min=t1.min+t1.sec/60;
        t1.sec=t1.sec%60;
    }
    if(t1.min>60)
    {
        t1.hr=t1.hr+t1.min/60;
        t1.min=t1.min%60;
    }
    if(t2.sec>60)
    {
        t2.min=t2.min+t2.sec/60;
        t2.sec=t2.sec%60;
    }
    if(t2.min>60)
    {
        t2.hr=t2.hr+t2.min/60;
        t2.min=t2.min%60;
    }
    printf("Time1=");
    display(t1);
    printf("Time2=");
    display(t2);
    printf("Result=");
    cal_difference(t1,t2);
    printf("--------------------------------------------------------------------------------------");
    return 0;
}
void cal_difference(time *t1,time *t2)
{
    time result;
    if(t1->hr>t2->hr)
    {
        if(t1->sec<t2->sec)
        {
            t1->sec+=60;
            result.sec=t1->sec-t2->sec;
            t1->min--;
        }
        else
            result.sec=t1->sec-t2->sec;
        if(t1->min<t2->min)
        {
            t1->min+=60;
            result.min=t1->min-t2->min;
            t1->hr--;

        }
        else
            result.min=t1->min-t2->min;
        result.hr=t1->hr-t2->hr;

    }
    else
    {
        result.hr=t2->hr-t1->hr;
    }
    printf("%d:%d%:%d\n",result.hr,result.min,result.sec);
}
void display(time *s)
{
    printf("%d:%d%:%d\n",s->hr,s->min,s->sec);

}
