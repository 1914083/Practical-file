#include<stdio.h>  
int gcd(int a,int b)  
{  
int c;  
c=a%b;  
if(c==0)  
return b;  
else  
gcd(b,c);    //Function gcd calls itself if b is not the GCD, to continue dividing further 
}  
int main()  
{  
int m,n,c;  
scanf("%d %d",&m,&n);  
c=gcd(m,n);  
printf("\nGCD is %d.\n",c);  
  
return 0;  
}
