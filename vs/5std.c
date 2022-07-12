#include <stdio.h>
struct student 
{
    char name[100];
    int math;
    int phy;
    int eng;
};
int main()
{
    int n=5,i;
    struct student std[10];
    printf("Enter Student Details : \n");
    for (i = 0 ; i < n; i++)
    {
        printf("Name of student - %d : ",i+1);
        scanf("%s",std[i].name);
        printf("Marks of math - %d : ",i+1);
        scanf("%d",&std[i].math);
        printf("Marks of phy - %d : ",i+1);
        scanf("%d",&std[i].phy);
        printf("Marks of eng - %d : ",i+1);
        scanf("%d",&std[i].eng);
    }
    printf("\n\n Student Details Are : \n");    
    for ( i = 0 ; i < n ;i++)
    {
       printf("\nName of student - %d : %s",i+1,std[i].name);
       printf("\nMarks of math - %d : %d",i+1,std[i].math);
       printf("\nMarks of phy- %d : %d",i+1,std[i].phy); 
       printf("\nMarks of eng- %d : %d",i+1,std[i].eng);
    }
}