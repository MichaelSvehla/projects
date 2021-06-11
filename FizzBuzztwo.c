/* FizzBuzz 2 program */
/* Print the numbers 1 to n
   and identify multiples of
   3, 5, 7, 3 and 5, 3 and 7,
   5 and 7, and 3, 5, and 7 */

#include <stdio.h>

int main(void)
{

   int number, counter;
   counter = 0;
   printf("This program will print numbers and find multiples from 1 to : ");
   scanf("%d", &number);

   while (counter < number)
   {
       counter++;
       if (counter % 3 == 0 && counter % 15 != 0 && counter % 21 != 0 && counter % 35 != 0){
           printf("%d is divisible by three but not five or seven\n", counter);
           }
          else if (counter % 5 == 0 && counter % 15 != 0 && counter % 21 != 0 && counter % 35 != 0){
           printf("%d is divisible by five but not three or seven\n", counter);
           }
             else if (counter % 7 == 0 && counter % 15 != 0 && counter % 21 != 0 && counter % 35 != 0){
             printf("%d is divisible by seven but not three or five\n", counter);
             }
                   else if (counter % 15 == 0 && counter % 105 != 0){
                   printf("%d is divisible by three and five but not seven\n", counter);
                   }
                      else if (counter % 21 == 0 && counter % 105 != 0){
                      printf("%d is divisible by three and seven but not five\n", counter);
                      }
                         else if (counter % 35 == 0 && counter % 105 != 0){
                         printf("%d is divisible by five and seven but not three\n", counter);
                         }
                            else if (counter % 105 == 0){
                            printf("%d is divisible by three, five, and seven\n", counter);
                            }
                               else {
                                  printf("%d\n", counter);
                                  }
    }
return(0);

}
