/* This program prompts the user for input
   and outputs what was entered twice using
   functions to output the original string,
   and the strcpy function outputs two                   
   additional lines of the input            */

#include <stdio.h>
#include <string.h>
void displayString(char userinput[]);
void displayStringtwo(char second[]);

int main()
{

int counter, counter2;
char userinput[100];
char second[100];
printf("Enter anything and I will repeat it: ");

fgets(userinput, sizeof(userinput), stdin);
displayString(userinput);

strcpy(second, userinput);

displayStringtwo(second);

strcat(userinput, second);

displayString(userinput);


for (counter = 0; userinput[counter] != '\n'; ++counter);
printf("Length of the string is %d", counter);

return(0);

}
void displayString(char userinput[])
{
    puts(userinput);
}
void displayStringtwo(char second[])
{
    puts(second);
}
