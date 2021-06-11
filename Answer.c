/* Program to demonstrate use of the while and yes/no function */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()

{

char answer;
answer = 'Y';


while (answer == 'Y' || answer == 'y')
      { printf("Continue? Y/N: ");
        scanf(" %c", &answer);
        }
printf("Bye\n");

return(0);

}
