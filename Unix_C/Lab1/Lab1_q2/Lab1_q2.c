//  Lab1_q2
//
//  Created by Freya Heeks on 10/08/2015.
//  Copyright (c) 2015 Freya Heeks. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int factorial(int n);

int main(void)
{
    int n;
    
    printf("Please enter a number\n");
    scanf("%d", &n);
    
    while(n>-1)
    {
        factorial(n);
        
        printf("Please enter a number\n");
        scanf("%d", &n);
    }
    
    
    if(n<0)
    {
        printf("This number is invalid");
    }
    
}


int factorial(int n)
{
    int num=n;
    int temp;
    
    for(temp=1; temp<num; temp++)
    {
        n = temp*n;
    }
    
    printf("The factorial of %d is %d: \n\n", num, n);
    
    return n;
}


