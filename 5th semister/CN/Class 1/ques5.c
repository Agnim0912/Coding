#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num;
    FILE *fp;
    char fName[20];
 
    printf("\nEnter file name to create :");
    scanf("%s",fName);
 
    fp=fopen(fName,"w");

    if(fp==NULL)
    {
        printf("File does not created!!!");
    }
 
    printf("File created successfully.");

    fprintf(fp,"%d",2436);
    fprintf(fp,"%s","A");
    putc('A',fp);
    putc('B',fp);
    putc('C',fp);
 
    printf("\nData written successfully.\n");
    fclose(fp);
 
    fp=fopen(fName,"r");
    if(fp==NULL)
    {
        printf("\nCan't open file!!!");
    }
 
    printf("Contents of file is :\n");
    char ch[150];
    printf("%s",fgets(ch,50,fp));
    fclose(fp);
    return 0;
}