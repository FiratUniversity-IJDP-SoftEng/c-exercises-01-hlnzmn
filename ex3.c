#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main (void){
  string pet = get_string("Do you have cat or dog? ");
  if(strcmp( pet, "cat") == 0)
  {
    printf("Meow!\n");
  }
  else if(strcmp(pet, "dog")== 0){
    printf("Woof!\n");
      }
else{
  printf("I do not know that pet!\n");
}
return 0;
}

//helin
