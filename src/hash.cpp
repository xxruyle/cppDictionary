#include "hash.hpp"

Dictionary::Dictionary(std::string name)
{       
    dictionaryName = name; 
}

void Dictionary::addPair(std::string key, int value)
{
    keys.push_back(key);
    values.push_back(value);
}


void Dictionary::printDictionary()  // prints out all the keys and values 
{

    std::cout << dictionaryName << std::endl; 
    for (int i = 0; i < ((keys.size() + values.size())/2); i++) {
        std::cout << keys[i] << ": " << values[i] << std::endl;

    }
}

void Dictionary::printKeys() // prints only the keys 
{
    for (int i = 0; i < keys.size(); i++) {
        std::cout << keys[i] << std::endl;
    }
}

void Dictionary::printValues() // prints only the values 
{
    for (int i = 0; i < values.size(); i++) {
        std::cout << values[i] << std::endl;
    }
}

void Dictionary::findKey(std::string key) // returns the index of a key 
{
    bool found = false; 
    for (int i = 0; i < key.size(); i++) {
        if (keys[i] == key){
            std::cout << "Key Index for "<< key << " is: "<<  i << std::endl;
            found = true; 
        }
    }

    if (!found) {
        std::cout << "Key could not be found";
    }
}

void Dictionary::findValue(int value) // returns the index of a value 
{
    bool found = false; 
    for (int i = 0; i < values.size(); i++) {
        if (values[i] == value){
            std::cout << "Value Index for "<< value << " is: "<<  i << std::endl;
            found = true; 
        }
    }

    if (!found) {
        std::cout << "Key could not be found";
    }
}

