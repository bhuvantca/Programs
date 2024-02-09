
//for loop
#include <iostream>
int main() {
    int number;
    int fact = 1;
    std::cout<<"Enter Number:";
    std::cin>>number;
    for(int i=1; i <= number; i++)
    {
        fact *= i; 
    }
    
    std::cout<<fact;
    return 0;
}
