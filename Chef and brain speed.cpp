#include <cstdio>

int main() {
  int bpm{}, y{};
   scanf("%i %i", &bpm, &y);
  if(y > bpm)
    printf("YES");
  else
    printf("NO");
  return 0;
}
