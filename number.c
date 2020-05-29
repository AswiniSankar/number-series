#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void perfect();
void amstrong();
void neon();
void automorhic();
void spy();
void happy();
void sunny();
void facinating();
int main()
{
  int c;
  while(1)
  {
    printf("\nyour choices are\n1.perfect number\n2amstrong number\n3.neon number\n4.authomorphic number\n5.spy number\n6.happy number\n7.sunny number\n8.facinating number\n9.exit\nenter your choice\n");
    scanf("%d",&c);
    switch(c)
    {
       case 1:perfect();break;
       case 2:amstrong();break;
       case 3:neon();break;
       case 4:automorhic();break;
       case 5:spy();break;
       case 6:happy();break;
       case 7:sunny();break;
       case 8:facinating();break;
        case 9:exit(1);break;
    }
  }
  printf("\n");
  return 0;
}
void perfect()
{
  int n,i=1,sum=0;
  printf("enter the number\n");
  scanf("%d",&n);
  while(i<n)
  {if(n%i==0)
    sum=sum+i;
    i++;
  }
  if(sum==n)
    printf("%d is a perfect number\n",n);
  else
   printf("%d is not perfect number\n",n);
}
void amstrong()
{
  int n,temp,rem,sum=0;
  printf("enter the number\n");
  scanf("%d",&n);
  temp=n;
  while(n!=0)
  {
    rem=n%10;
    sum=sum+(rem*rem*rem);
    n=n/10;
  }
  if (sum==temp)
    printf("it is a armstrong number\n");
  else
   printf("it is not a armstrong number\n");
}
void neon()
{
  int n,t,sum=0;
  printf("enter the number\n");
  scanf("%d",&n);
  t=n*n;
  while(t)
  { 
      sum=sum+t%10;
      t=t/10;
  }
  if (sum==n)
   printf("it is a neon number\n");
  else
   printf("it is not a neon number\n");
}
void automorhic()
{
  int n,num,sq,t,r,flag=0;
  printf("enter the number\n");
  scanf("%d",&n);
  num=n;
  t=10;
  sq=n*n;
  while(n)
  {
   r=sq%t;
   if(num==r)
     {flag=1;break;
     }
    n=n/10;
    t=t*10;
   }
  if (flag==1)
     printf("it is automophic\n");
  else
    printf("it is not a automophic\n");
}
void spy()
{
 int n,rem,temp,sum=0,pro=1;
 printf("enter the number\n");
 scanf("%d",&n);
 temp=n;
 while(n)
 {
   rem=n%10;
   sum+=rem;
   pro*=rem;
   n/=10;
 }
 if(sum==pro)
  printf("the number is spy number\n");
else
  printf("the given number is not a spy number\n");
}
void happy()
{
 int n,rem,sum=0;
 printf("enter the number\n");
 scanf("%d",&n);
 while(sum!=1 && sum!=4)
 { sum=0;
   while(n)
   {
     rem=n%10;
     sum+=(rem*rem);
     n/=10;
   }
  n=sum;
 }
 if(sum==1)
    printf("the given number is a happy number\n");
  else
   printf("the given number is not a happy number\n");
}
void sunny()
{
  int n,s,t;
  double x;
  printf("enter the number\n");
  scanf("%d",&n);
  s=(n+1)/2;
  t=0;
  while(s!=t)
  {
    t=s;
    s=((n+1)/t+t)/2; 
  }
 x=s;
  if((int)x==x)
    printf("it is a sunny number\n");
  else
    printf("it is not a sunny number\n");
 
}
void facinating()
{
  int n,n2,n3,freq[11]={0},i,c=0;
  printf("enter the number\n");
  scanf("%d",&n);
  n2=n*2;
  n3=n*3;
  while(n)
 {
  freq[n%10]++;
  n/=10;
 }
 while(n2)
 {
   freq[n2%10]++;
   n2/=10;
 }
 while(n3)
 {
  freq[n3%10]++;
  n3/=10;
 }
  
 for(i=1;i<=9;i++)
 {
   if(freq[i]!=1)
     c--;
   else
     c++;
 }
 if(c==9)
   printf("it is a facinating number\n");
 else
   printf("it is not a facinating number\n");
 
  
}
