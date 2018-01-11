#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*Календарь, для подсчета лня недели по введеной дате*/

int main()
{ setlocale(LC_ALL, "Rus");
  int d; // День месяца
  int m; // Месяц
  int y; // Год в столетии
  int c; // Столетие
  int x; // Результат
  float k;
  printf("Введите день месяца\n");
  scanf("%i", &d);
  printf("Введите месяц числом, считая, что март это 1, апрель это 2, и т.д.\n");
  scanf("%i", &m);
  printf("Введите год в столетии(Без тысячелетия и столетия)\n");
  scanf("%i", &y);
  printf("Введите столетие\n");
  scanf("%i", &c);
  if (m==11 || m==12){
    if (y==0){
        c=c-1;
        y=99;
    }else y=y-1;
         }
          //printf("y= %i", y);
          //printf("c= %i", c);
  m=(int) ((13*m-1)/5);
  //printf("m= %i", m);
  y=(int) (5*y/4);
  //printf("y= %i", y);
  k=c;
  k=(-7*k/4);
  //printf("k = %f",k);
  c=(int) (-7*c/4);
  if ((k-c) !=0)
    c=c-1;
  //printf("c= %i", c);
  x=(d+m+y+c)%7;
  //printf("%i", x);
  switch(x) {
      case 0:
      printf("Воскресенье");
      break;
      case 1:
      printf("Понедельник");
      break;
      case 2:
      printf("Вторник");
      break;
      case 3:
      printf("Среда");
      break;
      case 4:
      printf("Четверг");
      break;
      case 5:
      printf("Пятница");
      break;
      case 6:
      printf("Суббота");
      break;
      }
    return 0;
}
