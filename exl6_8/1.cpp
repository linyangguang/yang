#include<stdio.h>
void main()
{ 
char s1[80],s2[40]; 
int i=0,j=0; 
gets(s1); 
gets(s2); 
while(s1[i++]!='\0'); 
i--; 
while((s1[i++]=s2[j++])!='\0'); 
printf("%s",s1); 
}