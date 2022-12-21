#include <cstdio>
int main() {
  int num;
  scanf("%i", &num);
  float x{}, y{};
  for(int i = 0; i < num; ++i)
    {
      scanf("%f %f", &x, &y);
      if(x >= y)
        printf("YES\n");
      else
        printf("NO\n");
    }
  
}
