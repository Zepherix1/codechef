#include <cstdio>

int main()
{
  int t{}, x{};
  scanf("%i", &t);
  for(int i = 0; i < t; i++)
    {
      scanf("%i", &x);
      if(x < 3)
        printf("LIGHT\n");
      else if(x >= 3 && x <7)
        printf("MODERATE\n");
      else if(x >= 7)
        printf("HEAVY\n");
    }
}
