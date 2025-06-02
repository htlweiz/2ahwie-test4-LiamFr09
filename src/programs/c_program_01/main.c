#include <stdio.h>



void init(int array[], int length, int value)
{
  for(int i = 0; i < 5; i++)
  {
    array[i] = value;
  }
}



int main() 
{
  // function "init(int array[], int length, int value)"
  // initialisiere ein Array "array" der Länge 5 mit dem Wert 7
  int array[5];
  init(array, 5, 7);
  
  
  
  
  
  
  
  
  return 0;
}
