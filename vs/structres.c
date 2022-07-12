#include <stdio.h>
struct student 
{
    char name[100];
    int rno;
    long long int ph;
    int year;
};
int main()
{
    int n=1,i;
    struct student std[10];
    printf("Enter Student Details : \n");
    for (i = 0 ; i < n; i++)
    {
        printf("Name of student - %d : ",i+1);
        scanf("%s",std[i].name);
        printf("Roll Number of student - %d : ",i+1);
        scanf("%d",&std[i].rno);
        printf("Phone Number of student - %d : ",i+1);
        scanf("%lld",&std[i].ph);
        printf("Year of study of student - %d : ",i+1);
        scanf("%d",&std[i].year);
    }
    printf("\n\n Student Details Are : \n");    
    for ( i = 0 ; i < n ;i++)
    {
       printf("\nName of student - %d : %s",i+1,std[i].name);
       printf("\nRoll number of student - %d : %d",i+1,std[i].rno);
       printf("\nPhone Number of student - %d : %lld",i+1,std[i].ph); 
       printf("\nYear of study of student - %d : %d",i+1,std[i].year);
    }
}
