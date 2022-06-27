#include "hash.hpp"


int main()
{
    Dictionary<std::string, std::string> d1("myDic"); 

    d1.pythonAdd("{'Xavier': 19, 'Dad': 56}"); 

    d1.printDictionary(); 

    return 0; 
}