#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();

  int a=10;
  int b=15;
  printf("A =%d\n",a);
  printf("B =%d\n",b);
  printf("After Swap value is\n");
  a=a+b;
  b=a-b;
  a=a-b;
  printf("A =%d\n",a);
  printf("B =%d\n",b);
  getch();
  return 0;
}