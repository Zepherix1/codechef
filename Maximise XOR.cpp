#include <iostream>
#include <string>
#include <bits/stdc++.h>
int main()
{
  std::string a, b;
  int num{};
  std::cin >> num;
  for (int i = 0; i < num; i++) 
  {
      std::cin >> a >> b;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        reverse(b.begin(), b.end());
      std::stringstream s{};
      for(int j = 0; j < a.length(); j++)     
        {
          s << (a.at(j) ^ b.at(j));
        }
      std::string str = s.str();
      sort(str.begin(), str.end());
      reverse(str.begin(), str.end());
      std::cout << str << "\n"; 
    }
  return 0;
}
