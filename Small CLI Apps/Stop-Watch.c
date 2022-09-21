#include <stdio.h>
#include <stdlib.h>
#define Cycle 60
#include <windows.h>
int main()
{
  int hour, minute, second;
  printf("Enter Hour Minute Second:  ");
  scanf("%d %d %d", &hour, &minute, &second);
  system("cls");
  int h = 0, m = 0, s = 0;
  while (1)
  {
    printf("\n\n######## Stop Watch ########\n\n\n");
    printf("\t%.2d:%.2d:%.2d\n", h, m, s);
    printf("\n\n############################\n\n\n");

    sleep(1);
    if (h == hour && m == minute && s == second)
    {
      break;
    }
    else
    {
      system("cls");
    }
    s++;

    if (s == Cycle)
    {
      m++;
      s = 0;
    }
    if (m == Cycle)
    {
      h++;
      m = 0;
    }
  }
  return 0;
}
