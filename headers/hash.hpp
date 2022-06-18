#ifndef HASH_HPP
#define HASH_HPP 

#include <iostream> 
#include <stdio.h>
#include <string>
#include <vector>


class Dictionary {
    //A key string, value int pair data structure
    public: 
        std::string dictionaryName; 
        std::vector<std::string> keys = {};
        std::vector<int> values = {}; 


        Dictionary(std::string name);

        void addPair(std::string key, int value);
 
        void printDictionary(); // prints out all the keys and values 
        void printKeys(); // prints only the keys 
        void printValues(); // prints only the values 
        void findKey(std::string key); // returns the index of a key 
        void findValue(int i); // returns the index of a value 
        void removePair(int i); // removes pair according to a certain index 
        void clear(); // deletes every pair 
        void copyFrom(Dictionary& input); // copies from another dictionary 
        void pop(); // removes the last added pair  
};

#endif