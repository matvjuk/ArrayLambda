#include "LambdaList.h"
#include <utilities>

template<typename T> 
void LambdaList::add(std::string name, T lambda)
{
    list.insert(std::pair<std::string, std::experimental::any>(name, lambda);
}

void LambdaList::remove(std::string name)
{
    list.erase(name);
}

void* LambdaList::find(std::string name)
{
    auto lambda = list.find(name);
    return static_cast<void*>(&lambda);
}

template<typename T, typename ...Args>
T call(Args args, void* lambda)
{
    typedef T(*LAMBDA)(Args...);
    auto func = static_cast<LAMBDA>(lambda);
    return func(args...);
}
