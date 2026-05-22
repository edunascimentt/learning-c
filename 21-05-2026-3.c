#include <stdio.h>

int main()
{
  char texto[50];

  fgets(texto, 50, stdin);
  for(int i = 0; texto[i] != '\0'; i++)
  {
    if(texto[i] == 'a')
    {
      texto[i] = 'x';
    }
  }

  printf("%s", texto);

  return 0;
}