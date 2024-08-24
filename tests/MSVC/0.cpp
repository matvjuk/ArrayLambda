#include "LambdaList.h"
#include <iostream>

int main()
{
    LambdaList list;
    
    list.push_back("add", [&](int a, int b){ return a + b});
    list.push_back("mul", [&](double a, int b){ return a * b});

    std::cout << call<int, int, int>(3, 2, list.find("add")) << std::endl; // cout << 5 
    std::cout << call<double, double, int>(2.1, 3, list.find("mul")) << std::endl; // cout << 6.3

    return 0;
}
