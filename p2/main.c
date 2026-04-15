#include <stdio.h>
int main () {
  int N;
  char ch;

  int a = 0, am = 0;
  int b = 0, bm = 0;

  scanf("%d", &N);

  for (int i=0; i<N; i++){
    scanf(" %c", &ch);

    if (ch >= 'a' && ch <= 'z'){
       a++;
      if (a > am) am = a;
    }
    else{
        a = 0;
    }
  
    
    if (ch >= '0' && ch <='9'){
      b++;
      if (b > bm) bm = b;
    }
    else {
      b = 0;
    }
  printf("%d\n", am);
  printf("%d\n", bm);

  return 0;
}
