#include <stdio.h>

int int_even_odd(int zahl)
{
  if(zahl == 0)
  {
    return 0;
  }
  else if(zahl % 2 == 0)
  {
    return 2;
  }
  else
  {
    return 1;
  }
}



int main(int argc, char **argv) 
{
  printf("This program was called with %d arguments.\n", argc);
  printf("Hello World!\n");

  int zahl = 0;
  printf("Geben Sie eine ganze Zahl ein: ");
  scanf("%d", &zahl);
  printf("Die eingegebene Zahl ist: %d (1 ... ungerade wurde übergeben, 2 ... gerade wurde übergeben, 0 ... die Zahl 0 wurde übergeben)\n", int_even_odd(zahl));

  int array[10] = {}
}
