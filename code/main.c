#include <stdio.h>

int main(void) {

  int a = 10;
  int b, c;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n", &c, c);

  b = 20;
  c = a + b;

  printf("&a = %p, a = %d\n", &a, a);
  printf("&b = %p, b = %d\n", &b, b);
  printf("&c = %p, c = %d\n", &c, c);
  
  // int a = 10;
  // int *p1 = NULL;
  // int *p2;

  // p1 = &a;
  // p2 = p1;
  // *p2 = 4;

  return 0;

}


