#include <cstdio>
int main()
{
  int a{}, b{}, c{}, d{};
  scanf("%i", &a);
  for(int i =0; i < a; ++i)
    {
      scanf("%i %i %i", &b,&c,&d);
      if((b>c && c>d )|| (d>c && c>b))
        printf("%i\n", c);
      else if((c>b && b>d) || (d>b && b>c))
        printf("%i\n", b);
      else if((c>d && d>b) || (b>d && d>c))
        printf("%i\n", d);
    }
  return 0;
}
