#include<stdio.h>

int main(void)
{
    int n,sum=0,rem;
    printf("Enter the number:");
    scanf("%d",&n);
    
    
    while(n>0)
  {  rem=n%10;
      sum+=rem;
     n/=10;
    }
    printf("Sum of digits=%d\n",sum);
    return 0;
}







   



    

    



  

