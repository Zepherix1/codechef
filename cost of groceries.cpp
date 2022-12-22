#include <iostream>
#include <vector>
void enter_array(std::vector<int> &vector)
{
  int a;
  std::cin >> a;
  vector.push_back(a);
}
int main() {
  int num{}, minreq{}, a{}, total{};
  std::cin >> a;
  for(int i = 0; i <a;i++)
    {
      std::cin >> num >> minreq;
      std::vector<int> temp1;
      std::vector<int> temp2;
      for(int j = 0; j < num; j++)
          enter_array(temp1);
      for(int f = 0; f < num; f++)
          enter_array(temp2);
      int z{};
      for(const auto &a: temp1)
        {
          if(a >= minreq)
        {
          total += temp2[z];
          ++z;
        }
          else
          ++z; 
        }
      std::cout << total <<"\n";
      total = 0;
    }
}
