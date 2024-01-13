#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main () {
            float number ,guess , nguesses ;
            srand(time(0));
            number = rand()%100+1;
                        // printf("The number is : %f\n",number);
                        do {
                        printf("Guess the number between 1 to 100\n");
                        scanf("%f",&guess);
                        if (guess>number){
                                    printf("LOWER NUMBER PLEASE !\n");
                                    
                        }
                        else if (guess<number){
                                    printf("HIGHER NUMBER PLEASE !\n");
                        }
                        else {
                                    printf("Guessed it Right in %.2f attempts",nguesses );
                        }
                        nguesses++;        
                        }while (guess!=number);
                        
            return 0;
}