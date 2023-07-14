#include<stdio.h>

int caltotal(int marks[])
{
    int i,sum=0;
    for(i=0; i<3; i++)
    {
        sum+=marks[i];
    }
    return sum;

}
float calper(int total)
{
    float p;

    p=total/3.0;

    return p;
}

void grade(float per)
{
    if(per>90 && per<=100)
    {
        printf("\nYour Grade:A");
    }
   else if(per>80 && per<=90)
    {
        printf("\nYour Grade:B");
    }
     else if(per>70 && per<=80)
    {
        printf("\nYour Grade:C");
    }
     else if(per>50 && per<=70)
    {
        printf("\nYour Grade:D");
    }
     else if(per>33 && per<=50)
    {
        printf("\nYour Grade:E");
    }
     else 
    {
        printf("\nSORRY YOU ARE FAILED");
    }
    
}

int main()
{
    int student[3],marks[3],i,j,total;
    float per;

    for(i=0; i<3; i++)
    {
        printf("Student[%d] :\n",i+1);

        for(j=0; j<3; j++)
        {
            printf("Enter marks :");
            scanf("%d",&marks[j]);
        }
        total=caltotal(marks);
        printf("Your Total is :%d",total);

        per=calper(total);
        printf("\nYour Percentageis :%.2f",per);

        grade(per);
        printf("\n\n");

        
    }
    return 0;
}