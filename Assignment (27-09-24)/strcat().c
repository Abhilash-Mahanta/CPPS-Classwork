/*String Concatenation*/

#include<stdio.h>
#include<string.h>
main()
{
char fname[25],cname[25];
printf("Enter the string:\n");
scanf("%s",fname);
printf("Enter the second string:\n");
scanf("%s",cname);
strcat(fname, cname);
printf("%s",fname);

}
