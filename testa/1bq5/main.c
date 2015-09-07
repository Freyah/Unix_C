//
//  main.c
//  1bq5
//
//  Created by Freya Heeks on 7/09/2015.
//
//

#include <stdio.h>

void countMatches(int nPeople, int nPrints, int *nPossible, int *nDefinite, int (*)(int, double, double) ) /* the '*' is passing a memory address that means the value can be changed */
{
    
    int i;
    
    double nLeft, nRight;
    
    
    for (i=0; i < nPeople; i++) /* for the amount of people (ID numbers) */
    {
        
        
        getTemplates(i, &nLeft, &nRight) /*passing the memory addresses of nLeft and nRight because they're asking for points*/

        
        if (!(nLeft == -1 && nRight == -1)) /* if both of them don't equal -1 then the following will occur */
       {
           
           int j;
           for (j = 0; j < nPrints; j++) /* for the number of unidentified prints */
           {
               int check_result = (*check)(j, nLeft, nRight); /* create a variable that is assigned the return value of the function pointer */
               
               if (check_result == 1)
               {
                   *nPossible++;
               }
               
               else if (check_result == 2)
               {
                   *nDefinite++;
               }

           }
           

       }
        
        
    }
    
    
}

