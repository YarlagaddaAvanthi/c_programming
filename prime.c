//Write a c program 1 to n prime(which is divisible by 1 and it self)
#include <stdio.h>
int is_prime(int num){
    if(num <=1)
        return 0;//0,1 are not prime number
    for (int i=2;i*i <= num;i++)
    {
        if(num%i == 0)
            return 0;//not prime
    }
    return 1;//prime number
}
int main()
{
    int n ;
    printf("Enter a number (n): ");
    scanf("%d",&n);
    printf("Prime number from 1 to %d are:\n",n);
    for (int i=1;i<=n;i++)
    {
        if(is_prime(i)){
            printf("%d ",i);
        }      
    }
    return 0;
}