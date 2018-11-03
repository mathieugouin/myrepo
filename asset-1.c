#include <stdio.h>
#include "asset-1.h"

static int a1 = 1; // test
static int a1a = 1; // test

void asset1(void)
{
  int a = a1 + a1a;
  printf("Hello from asset1() %d\n", a);
}
