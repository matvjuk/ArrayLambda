#include <string>
#include <experimental/any>
#include <unordered_map>

class LambdaList
{
public:
    template<typename T>
    void add(std::string name, T lambda);
    void remove(std::string name);
    void* find(std::string name);
private:
   std::unordered_map<std::string,std::experimental::any> list;
};

