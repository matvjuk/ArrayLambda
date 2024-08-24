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
    return static_cast<void*>(list.find(name));
}
