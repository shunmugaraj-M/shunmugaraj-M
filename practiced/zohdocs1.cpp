#include<stdio.h>
#include<string.h>
int main(){
char p[20];
char *s="string";
int i,len=strlen(s);
for(i=0;i<len;i++)
p[i]=s[i];
printf("%s",p);
return 0;
}
