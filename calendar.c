#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*���������, ��� �������� ��� ������ �� �������� ����*/

int main()
{ setlocale(LC_ALL, "Rus");
  int d; // ���� ������
  int m; // �����
  int y; // ��� � ��������
  int c; // ��������
  int x; // ���������
  float k;
  printf("������� ���� ������\n");
  scanf("%i", &d);
  printf("������� ����� ������, ������, ��� ���� ��� 1, ������ ��� 2, � �.�.\n");
  scanf("%i", &m);
  printf("������� ��� � ��������(��� ����������� � ��������)\n");
  scanf("%i", &y);
  printf("������� ��������\n");
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
      printf("�����������");
      break;
      case 1:
      printf("�����������");
      break;
      case 2:
      printf("�������");
      break;
      case 3:
      printf("�����");
      break;
      case 4:
      printf("�������");
      break;
      case 5:
      printf("�������");
      break;
      case 6:
      printf("�������");
      break;
      }
    return 0;
}
