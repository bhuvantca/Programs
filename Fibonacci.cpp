
#include <iostream>

int main() {
   int number;
   int n1 =0, n2 =1, n3 =0;
   std::cout<<"Enter number: "<<std::endl;
   std::cin>>number;
   std::cout<< n1 <<" "<<n2<<" ";
   for(int i=1; i<=number; i++)
   {
       n3 = n1 + n2;
       n1 = n2;
       n2 = n3;
       std::cout<< n3 << " ";
   }

    return 0;
}
