#include<stdio.h>
#include<conio.h>

main()
{
  clrscr();

  int a=10;
  int b=15;
  int c;
  printf("A =%d\n",a);
  printf("B =%d\n",b);
  printf("After Swap value is\n");
  c=a;
  a=b;
  b=c;
  printf("A =%d\n",a);
  printf("B =%d\n",b);
  getch();
  return 0;
}
