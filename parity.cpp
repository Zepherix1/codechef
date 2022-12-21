#include <cstdio>

int main()
{
  int t, n;
  scanf("%i", &t);
  for (int i =0; i < t; ++i)
    {
      scanf("%i", &n);
      if(n%2 != 0)
        printf("no\n");
      else
        printf("yes\n");
    }
  return 0;
}
