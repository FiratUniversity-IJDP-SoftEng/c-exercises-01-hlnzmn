#include <cs.h>
#include <stdio.h>
 int main(void)
{
  int number = get_int("Please choose a number between 1-5.");
  if (number == 3){
printf("You got it right.\n");
}
else {
 printf("Sorry,try again.\n");
}
}
