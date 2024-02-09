
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

//recursion
#include <iostream>
int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return n*fact(n-1);
}

int main() {
    int number;
    std::cout<<"Enter Number:";
    std::cin>>number;
    std::cout<<fact(number);
    return 0;
}
