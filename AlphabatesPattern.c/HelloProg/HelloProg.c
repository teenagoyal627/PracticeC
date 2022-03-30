#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *fp;
    int i;
    char s[100];
  fp= fopen("AA.txt","a");
  
  fclose(fp);
if (fp==NULL)
{
printf("sorry");
  exit(1);
}


printf("Enter the string  ");
gets(s);

for(i=0;i<strlen(s);i++)
{
    fputc(s[i],fp);
}
    fclose(fp);
    return 0;


}