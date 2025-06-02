#include <stdio.h>

int int_even_odd(int zahl)
{
  if (zahl == 0)
  {
    return 0;                     // 0 ... die Zahl 0 wurde übergeben
  }
  else if (zahl % 2 == 0)
  {
    return 2;                     // 2 ... gerade Zahl wurde übergeben
  }
  else
  {
    return 1;                     // 1 ... ungerade Zahl wurde übergeben
  }
}

int main(int argc, char **argv)
{
  /*
  printf("This program was called with %d arguments.\n", argc);
  printf("Hello World!\n");
  printf("\n");

  int zahl = 0;
  printf("Geben Sie eine ganze Zahl ein: ");
  scanf("%d", &zahl);
  printf("Die Zahl %d ist: %d \n1 ... ungerade Zahl wurde übergeben \n2 ... gerade Zahl wurde übergeben \n0 ... die Zahl 0 wurde übergeben\n", zahl, int_even_odd(zahl));
  printf("\n");

  int array[10] = {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
  for (int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d\n", i + 1, array[i]);
  }
  printf("\n");

  int int_numbers[5];
  int summe_gerade = 0;
  int summe_ungerade = 0;
  int summe_alle = 0;
  for (int i = 0; i < 5; i++)
  {
    printf("%d. Zahl: ", i + 1);
    scanf("%d", &int_numbers[i]);

    if (int_numbers[i] % 2 == 0)
    {
      summe_gerade = summe_gerade + 1;
    }
    else
    {
      summe_ungerade = summe_ungerade + 1;
    }

    summe_alle = summe_alle + int_numbers[i];
  }
  printf("Anzahl der geraden Zahlen: %d\n", summe_gerade);
  printf("Anzahl der ungeraden Zahlen: %d\n", summe_ungerade);
  printf("Summe aller Zahlen: %d\n", summe_alle);
  */

  // EXERCISE 1:
  int number = 0, result = 0;
  printf("Testzahl: ");
  scanf("%d", &number);
  result = int_even_odd(number);
  if (result == 0) printf("Die Testzahl ist 0.\n");
  else if (result == 1) printf("Die Testzahl ist ungerade.\n");
  else printf("Die Testzahl ist gerade.\n");
  
  // EXERCISE 2:
  int numbers[10]= {3, 1, 7, 4, 9, 1, 5, 10, -2, 2};
  for (int i = 0; i < 10; i++)
  {
    printf("Zahl %d: %d\n", i+1, numbers[i]);

  }

  // EXERCISE 3:
  int num_arr[5];
  int count_even = 0, count_odd = 0, sum = 0;

  for(int i = 0; i < 5; i++)
  {
    printf("%d. Zahl: ", i+1);
    scanf("%d", num_arr[i]);
  }
  for(int i = 0; i < 5; i++)
  {
    sum = sum + num_arr[i];
    if(num_arr[i] % 2 == 0) count_even++;                              // --> dann gerade
  }
  count_odd = 5 - count_even;

  printf("Anzahl der geraden Zahlen: %d\n", count_even);
  printf("Anzahl der ungeraden Zahlen: %d\n", count_odd);
  printf("Summe der Zahlen: %d\n", sum);

  


}






