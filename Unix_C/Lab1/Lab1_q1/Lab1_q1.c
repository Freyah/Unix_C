//
//  main.c
//  Lab1_q1
//
//  Created by Freya Heeks on 10/08/2015.
//  Copyright (c) 2015 Freya Heeks. All rights reserved.

#include <stdio.h>

int main(void)
{
    int number_1, number_2;
    
    printf("Please enter two numbers\n");
    
    scanf("%d %d", &number_1, &number_2);
    
    if(number_1%number_2 != 0)
    {
        printf("Not divisible\n");
    }
    
    else
    {
        printf("Divisible\n");
    }
    
    
    return 0;
    
}