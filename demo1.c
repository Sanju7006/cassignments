// Write a program to calculate a Factorial of a number. 
#include<stdio.h>
int main(void)
{
    int no, counter, fact;
    printf("\n Enter No =");
    scanf("%d", &no);
    fact=1;  
    counter=0; 
    while(counter<no)    
    {
        counter++; // counter= counter+1;
        printf("%5d *", counter);
        fact*=counter; // fact=fact * counter;
    }
    printf("\b= %d", fact);

    return 0;
}