#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("fskill.txt","w+");
    fprintf(fp,"Welcome to skill qode the programing lab\n");
    fputs("You are entering to learn c language now ---\n",fp);
    fclose(fp);
}  