#include<stdio.h>  
int a,b,c;  
int largestof3(int a,int b,int c)    //Function definition
{
int largest=0;  
if(a>b && a>c)  
largest=a;  
else if(b>a && b>c)  
largest=b;  
else  
largest=c;  
  
return largest;  
}
int main()  
{  
printf("Enter 3 numbers:  ");  
scanf("%d %d %d",&a,&b,&c);  
printf("The largest of the 3 numbers entered is %d.\n",largestof3(a,b,c));    //Function call  
  
return 0;  
}
