#include <stdio.h>
#include <stdlib.h>
int main() {
  int a = 0, b = 0, i = 0;
  char ans[80000], ch = ' ';
  while (ch != 'E') {
    ch = getchar();
    if (ch != '\n') {
      ans[i] = ch;
      i++;
    }
  }

  for (i = 0; ans[i] != '\0'; i++) {
    if (ans[i] == 'W')
      a++;
    else if (ans[i] == 'L')
      b++;
    else if (ans[i] == 'E') {
      printf("%i:%i\n", a, b);
      a = b = 0;
      break;
    }
    if ((a >= 11 || b >= 11) && abs(a - b) >= 2) {
      printf("%i:%i\n", a, b);
      a = b = 0;
    }
  }
  printf("\n");
  for (i = 0; ans[i] != 0; i++) {
    if (ans[i] == 'W')
      a++;
    else if (ans[i] == 'L')
      b++;
    else if (ans[i] == 'E') {
      printf("%i:%i\n", a, b);
      a = b = 0;
      break;
    }
    if ((a >= 21 || b >= 21) && abs(a - b) >= 2) {
      printf("%i:%i\n", a, b);
      a = b = 0;
    }
  }
}