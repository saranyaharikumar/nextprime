#include<stdio.h>
int main()
{
int i,j,count,num;
printf("nEnter the number");
scanf("%d",&num);
for(i=num+1;;i++)
{
 for(j=2,count=0;j<=i;j++)
 {
               if(i%j == 0)
               {
                count++;
               }      
 } 
 if(count==1)
 {
  printf("%d",i);
  break;            
 }
}
return 0;
}
