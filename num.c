//alternate plus and minus based on count 
/*
enter the element
15
1 -2 -3 4 5 6 -7 -8 -9 -10 11 12 13 14 15 
*/
#include<stdio.h>
int main()
{
 int n,x,y,count=1,i=1,j;
 printf("enter the element\n");
 scanf("%d",&n);
 while(i)
 {
    if(i%2!=0)
    {
      for(x=1;x<=i;x++)
       { 
        printf("%d ",count);
        count++;
       }
    } 
  else
    {
      for(j=1;j<=i;j++)
      {
        y=(-1)*count;
         printf("%d ",y);
         count++;
                y--;
      }
    }
   if (count==n+1)
   { 
            break;
            }
   else
    { 
            i++;
            }
 }
printf("\n");
}
