#include<stdio.h>  
int main()              {  
  
int n=1, sum=0;  
do{ 
sum+=n;  
n++;  
}   
while(n<=100);    //Loop is exited when n exceeds 100
  
printf("Sum of first 100 +ve integers is %d.\n",sum);  
  

return 0;  
}  
