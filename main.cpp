#include <iostream>
#include <vector>

int main(int argc, char **argv) 
{  
  std::vector<int> numbers;

  for (int i = 0; i < 50; i++) {
    numbers.push_back(i);
  }

  for (int i = 0; i < numbers.size(); i++) {
    int x = numbers[i];
    std::printf("%d ", x);   
  }

  std::printf("\n");


  return 0;
}

