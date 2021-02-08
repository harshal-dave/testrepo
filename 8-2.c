#include <stdio.h>
#include <string.h>
 
void main()
{
  	char str[100],rev[100];
  	int i,j,length;
   	printf("\n Please Enter any String :  ");
  	gets(str);
   	j=0;
  	length=strlen(str); 
  	for(i=length-1;i>=0;i--)
  	{
  		rev[j++]=str[i];
  	}
  	rev[i]='\0'; 
  	printf("\n String after Reversing=%s\n",rev);
  	printf("acc. to strrev:%s",strrev(str));
	getch();
}
