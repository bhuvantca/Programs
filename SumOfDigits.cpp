//We can find sum of digits in two ways
//1.
/*#include <iostream>

int main() {
    int number = 45;
  std::cout<<"Enter Number: "<<std::endl;
  std::cin>>number;
  
  if((number % 9) == 0)
    std::cout<<9;
  else 
    std::cout<<number % 9;

    return 0;
}*/

//2.

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
      sum = sum + rem;
      number = number / 10;
  }
  std::cout<<sum;

    return 0;
}
