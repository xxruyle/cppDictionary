#ifndef HASH_HPP
#define HASH_HPP 

#include <iostream> 
#include <stdio.h>
#include <string>
#include <cstring>
#include <vector>

template<class T, class U> 
class Dictionary {
    //A key string, value int pair data structure
    public: 
        std::string dictionaryName; 
        std::vector<T> keys = {};
        std::vector<U> values = {}; 

        Dictionary(std::string name) 
        {
            dictionaryName = name; 
        }


        void addPair(T key, U value) 
        {
            keys.push_back(key);
            values.push_back(value);
        }

        std::string concat(std::vector<char> source, std::vector<std::string> destination) 
        {
            std::string placehold; 
            for (int i = 0; i < source.size(); i++) {
                placehold += source[i]; 
            }

            return placehold;
        }

        //1) if char is not an apostrophe, colon, or comma, add to a vector 
        //2) If the char is an apostrophe, colon or comma, join the list into a string, add it to another vector, and  
        //3) clear the og vector if the vector's size != 0 
        void pythonAdd(std::string pythonDic)
        {
            std::vector<char> initialVec = {}; 
            std::vector<std::string> finalVec = {}; 
            std::vector<std::string> finalVecValue = {}; 

            for (int i = 0; i < pythonDic.size() + 1; i++) {
                if (pythonDic[i] != '\'' && pythonDic[i] != ':' && pythonDic[i] != ',' && pythonDic[i] != ' ') {
                    initialVec.push_back(pythonDic[i]); 
                } else if (pythonDic[i] == '\'' && pythonDic[i+1] == ':') { //if the key's chars have ended 
                    std::string newString = concat(initialVec, finalVec); 
                    finalVec.push_back(newString);  
                    initialVec.clear(); 
                } else if (pythonDic[i] == ',') {
                    std::string newStringValue = concat(initialVec, finalVecValue); 
                    finalVecValue.push_back(newStringValue); 
                    initialVec.clear(); 
                }
            }


            if (finalVec.size() == finalVecValue.size()) {
                for (int i = 0; i < finalVec.size(); i++) {
                    keys.push_back(finalVec[i]); 
                    values.push_back(finalVecValue[i]); 
                }
            } else {
                throw std::invalid_argument("Not a pair"); 
            }

        }


        // prints out all the keys and values 
        void printDictionary() 
        {
            std::cout << dictionaryName << std::endl; 
            std::cout << "{";
            for (int i = 0; i < ((keys.size() + values.size())/2); i++) {
                if (typeid(T) == typeid(std::string)) {
                    std::cout << "'" << keys[i] << "'" << ": " << values[i];
                } else { 
                    std::cout << keys[i] << ": " << values[i];
                }
                
                if (i == values.size() - 1) {
                    std::cout << "}"; 
                } else {
                    std::cout << ", "; 
                }
            }
        
            // If the dictionary is empty 
            if (keys.size() == 0 && values.size() == 0) {
                std::cout << " }";
            }
            std::cout << "\n\n";        
        }


        void printKeys()  // prints only the keys 
        {
            for (int i = 0; i < keys.size(); i++) {
                std::cout << keys[i] << std::endl;
            }
        }


        void printValues() // prints only the values 
        { 
            for (int i = 0; i < values.size(); i++) {
                std::cout << values[i] << std::endl;
            }
        }


        void findKey(T key) // returns the index of a key 
        {
            bool found = false; 
            for (int i = 0; i < key.size(); i++) {
                if (keys[i] == key){
                    std::cout <<  i << std::endl;
                    found = true; 
                }
            }
            if (!found) {
                std::cout << "Key could not be found";
            }
        }


        void findValue(U value) // returns the index of a value 
        {
            bool found = false; 
            for (int i = 0; i < values.size(); i++) {
                if (values[i] == value){
                    std::cout << i << std::endl;
                    found = true; 
                }
            }
        
            if (!found) {
                std::cout << "Key could not be found";
            }
        }


        void removePair(uint32_t i) // removes pair according to a certain index 
        {
            keys.erase(keys.begin()+i);
            values.erase(values.begin()+i);
        }


        void clear() // deletes every pair 
        {
            for (int i = 0; i <= ((keys.size() + values.size())/2); i++) {
                keys.pop_back();
                values.pop_back();
            }
        }


        void copyFrom(Dictionary& input) // copies from another dictionary 
        {
            for (int i = 0; i < input.keys.size(); i++) {
                keys.push_back(input.keys[i]);
                values.push_back(input.values[i]);
            }
        }


        void pop() // removes the last added pair  
        {
            keys.pop_back();
            values.pop_back(); 
        }
};

#endif