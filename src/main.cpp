#include "hash.hpp"

int main()
{
    Dictionary d1("myDic"); 

    d1.addPair("Xavier", 19); 
    d1.addPair("Dad", 55);
    d1.printDictionary(); 

    d1.clearDictionary(); 

    d1.printDictionary();

    return 0; 
}