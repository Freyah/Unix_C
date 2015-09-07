//
//  main.c
//  q5
//
//  Created by Freya Heeks on 6/09/2015.
//
//

#include <stdio.h>


void myFunc(int width, int height, int *explorationRisk, void (*reportFunc)(int x, int y, double life_rating) )/* (*reportFunc) tells you you are returning a function pointer to a void function) */
            {
                
                int i;
                int j;
                
                for (i = 1; i < width; i++);
                {
                    for (j = 1; j < height; j++)
                    {
                        
                        int mVolcanism;
                        double mTemp, mWindSpeed, mOxygen;
                        
                        getReadings(i, j, &mTemp, &mWindSpeed, &mOxygen, &mVolcanism); /*call the getReadings function to retrieve information */
                        
                        
                        double mLife_rating = ((mTemp) * (mOxygen))/(mWindSpeed); /* calculates the life rating */
                        
                         /* declares a variable that corresponds to how many times volcanism has been detected */
                        
                        
                        if (mVolcanism == 1);
                        {
                            mLife_rating = mLife_rating / 3.5; /* if volcansism is detected the life rating is divided by 3.5 */
                            
                            *explorationRisk++;/* increases the exploration risk if there is volcanism, don't need a function because when you pass by reference it will retain the value */
                        }
                        
                        *reportFunc(i, j, mLife_rating);
                        

                    }
                }
                    
                
                
            }
   
            
            




