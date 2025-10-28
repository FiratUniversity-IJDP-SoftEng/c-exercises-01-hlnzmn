#include <cs50.h>
#include <stdio.h>
void sayHello(string name)
{
  printf ("Hello %s\n",name);
}
int main(void)
{
  string name=get_string("What is your name?");
 sayHello(name);
}
//helin
