#include <stdio.h>
int main () {
  int answer;
  int num;
  int count = 0;

  scanf("%d", &answer);

  do {
    scanf("%d", &num);
    count++;

    if (num > answer) {
      printf("%d>?\n", num);
    }
    else if (num < answer) {
      printf("%d<?\n", num);
    }
    else {
      printf("%d==?\n", num);
    }
  } while (num != answer);
  printf("%d\n", answer, count);
  return 0;
}
