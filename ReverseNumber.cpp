#include <iostream>

int main() {
    int number;
  std::cout<<"Enter Number: "<<std::endl;
  std::cin>>number;
  int sum = 0;
  int rem =0;
  while(number > 0)
  {
      rem = number % 10;
      sum = (sum * 10) + rem;
      number = number / 10;
  }
  std::cout<<sum;

    return 0;
}
