#include <stdio.h>
#include "main.h"
#include "integration.h"
#include "common.h"

int main(void)
{
  commonData_t d;
  d.a = 1;
  d.x = 1.2f;
  d.y = 3.4;

  (void)d;

  printf("Hello from GIT!\n");
  printf("Hello from CMC!\n");
  printf("Hello from main()\n");

  integration();

  return 0;
}
