#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  int int1 = atoi(argv[1]);
  int int2 = atoi(argv[2]);

  int res = int1 - int2;
  if(res >= 0) {
    printf("The positive difference is %d [1]", res);
  }
  else {
    printf("The positive difference is %d [2]", int2 -int1);
  }
  return 0;
}
