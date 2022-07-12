#include<stdio.h>
int main()
{
    FILE *fp;
    char buff[255];
    fp=fopen("fskill.txt","r");
    while (fscanf(fp,"%s",buff)!=EOF)
    {
        printf("%s",buff);    
    }
    //fscanf(fp,"%s",buff);   // getting freom file
    //  printf("%s\n",buff);    
    fclose(fp);
}