#include <cstdio>

int main() {
 int num;
  scanf("%i", &num );
 int son{}, min{};
  for(int i = 0; i < num; ++i)
    {
      scanf("%i %i", &son, &min);
      if(son >= min)
        printf("YES\n");
      else
        printf("NO\n");
    }
  return 0;
}
