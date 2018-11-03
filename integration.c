#include <stdio.h>
#include "asset-1.h"

static int i1 = 1;
static int i2 = 2;

void integration(void)
{
  int i = i1 + i2;
  printf("Hello from integration() %d\n", i);

  asset1();
}
