#include "hash.hpp"

int main()
{
    Dictionary<std::string, int> d1("MyDic");

    d1.pythonAdd("{'Xavier': 19, 'Bob': 55}");
    return 0; 
}