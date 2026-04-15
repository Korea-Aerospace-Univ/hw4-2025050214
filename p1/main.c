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
      printf("%d 보다 낮습니다\n", num);
    }
    else if (num < answer) {
      printf("%d<?\n", num);
      printf("%d 보다 높습니다\n", num);
    }
    else {
      printf("%d==?\n", num);
      printf("%d 정답입니다\n", num);
    }
  } while (num != answer);
  printf("%d ↦ 시도횟수는 %d회\n", answer, count);
  return 0;
}
