#include <cstdio>

int main()
{
  int t{}, x{}, y{};
  scanf("%i", &t);
  for(int i =0; i<t; ++i)
    {
      scanf("%i %i", &x, &y);
      int z = x *10 + y *90;
      printf("%i\n",z);
    }
  return 0;
}
