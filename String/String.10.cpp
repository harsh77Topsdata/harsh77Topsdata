#include<stdio.h>
#include<string.h>

 
int main()
{
   char string[100],sub[100];
   int position,length,c=0;
 
   printf("Enter the string :");
   gets(string);
 
   printf("Enter the position and length of substring\n");
   scanf("%d%d", &position, &length);
 
   while(c<length) 
   {
      sub[c]=string[position+c-1];
      c++;
   }
   sub[c] ='\0';
 
   printf("Required substring is %s\n", sub);
}
