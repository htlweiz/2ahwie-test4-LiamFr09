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

  int array[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
  for(int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d\n", i+1, array[i]);
  }

  int int_numbers[5];
  int gerade = 0;
  int ungerade = 0;
  int alle = 0;
  for(int i = 0; i < 5; i++)
  {
    printf("%d. Zahl: ", i + 1);
    scanf("%d", &int_numbers[i]);

    if (i % 2 == 0)
    {
      gerade = gerade + 1;
    }
    else
    {
      ungerade = ungerade + 1;
    }

    alle = alle + 1;
  }
}


