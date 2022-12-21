#include <cstdio>
int main()
{
  int a{}, b{}, c{};
  scanf("%i", &a);
  for(int i = 0; i<a; ++i)
    {
      scanf("%i %i", &b, &c);
      printf("%i\n", b*c);
    }
  return 0;
}
