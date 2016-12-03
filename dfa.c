#include<stdio.h>
#include<stdlib.h>
int transition_func(char ch,int s);
int main()
{
 char str[100];
 int s=0,i=0;
 printf("\nEnter String:");
 gets(str);
printf("\nSteps taken by dfa");
 while(str[i]!='\0')
 {
   printf("\nFor state %d and input %c",s,str[i]);
   s=transition_func(str[i],s);
   if(s==-1)
    break;
   else
   {
   printf(",We move to %d",s);
   i=i+1;
    }
  }
  if((s!=-1)&&(s==3))
   printf("\nString %s successfully accepted",str);
  else
   printf("\nString not accepted");
 printf("\n");
 return 0;
}
int transition_func(char ch,int s)
{
  if((s==0)&&(ch=='b'))
   return 0;
  else if((s==0)&&(ch=='a'))
   return 1;
  else if((s==1)&&(ch=='b'))
   return 2;
  else if((s==1)&&(ch=='a'))
   return 1;
  else if((s==2)&&(ch=='a'))
   return 1;
  else if((s==2)&&(ch=='b'))
   return 3;
  else if((s==3)&&(ch=='b'))
   return 3;
  else if((s==3)&&(ch=='a'))
   return 3;
 return -1;
 }