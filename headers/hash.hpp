#ifndef HASH_HPP
#define HASH_HPP 

#include <iostream> 
#include <stdio.h>
#include <string>
#include <cstring>
#include <vector>



//A pythonic like dictionary data structure in C++ 
template<class T, class U> 
class Dictionary {
    public: 
        std::string dictionaryName; 
        std::vector<T> keys = {};
        std::vector<U> values = {}; 

        //Declaring the class with a name for the dictionary 
        Dictionary(std::string name) 
        {
            dictionaryName = name; 
        }

        //Adds a pair to two vectors 
        void addPair(T key, U value) 
        {
            keys.push_back(key);
            values.push_back(value);
        }


        std::string concat(std::vector<char> source) 
        {
            std::string placehold; 
            for (int i = 0; i < source.size(); i++) {
                placehold += source[i]; 
            }

            return placehold; 
        }

        bool isNum(std::string strInput)
        {
            for (int i = 0; i < strInput.size(); i++) {
                if (std::isdigit(strInput[i]) == 0) {
                    return false; 
                }
            }
            return true; 
        }


        //Make a dictionary like you would in python by passing in a string key value pair 
        /*
        {'Year': 1995, 'Age': 27}
        */

        void pythonAdd(std::string pythonDic)
        {
            std::vector<char> initialVec = {}; 
            std::vector<T> finalVecKey = {}; 
            std::vector<U> finalVecValue = {}; 

            for (int i = 0; i < pythonDic.size() + 1; i++) {
                if (pythonDic[i] != '\'' && pythonDic[i] != ':' && pythonDic[i] != ',' && pythonDic[i] != ' ' && pythonDic[i] != '{' && pythonDic[i] != '}') {
                    initialVec.push_back(pythonDic[i]); 
                } else if (pythonDic[i] == '\'' && pythonDic[i+1] == ':') { //if the key's chars have ended 
                    std::string newStringKey = concat(initialVec); 
                    finalVecKey.push_back(newStringKey);  
                    initialVec.clear(); 
                } else if (pythonDic[i] == ',' || (i == pythonDic.size() - 1 || pythonDic[i+1] == '}')) {
                    std::string newStringValue = concat(initialVec); 
                    finalVecValue.push_back(newStringValue); 
                    initialVec.clear(); 
                }
            }

            /*
            if U is an integer convert finalVecKey[i] to integer 
            vice versa 

            */
            if (finalVecKey.size() == finalVecValue.size()) {
                for (int i = 0; i < finalVecKey.size(); i++) {
                    keys.push_back(finalVecKey[i]); 
                    values.push_back(finalVecValue[i]); 
                }
            } else {
                throw std::invalid_argument("Not correct format"); 
            }
        }


        // prints out all the keys and values 
        void printDictionary() 
        {
            std::cout << dictionaryName << std::endl; 
            std::cout << "{";
            for (int i = 0; i < ((keys.size() + values.size())/2); i++) {
                if (typeid(T) == typeid(std::string) || typeid(T) == typeid(char)) {
                    std::cout << "'" << keys[i] << "'" << ": ";
                    if (typeid(U) == typeid(int)) {
                        std::cout << values[i]; 
                    } else if (typeid(U) == typeid(std::string) || typeid(U) == typeid(char)) {
                        std::cout << "'" << values[i] << "'"; 
                    }
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

        // prints only the keys 
        void printKeys()  
        {
            for (int i = 0; i < keys.size(); i++) {
                std::cout << keys[i] << std::endl;
            }
        }

        // prints only the values 
        void printValues() 
        { 
            for (int i = 0; i < values.size(); i++) {
                std::cout << values[i] << std::endl;
            }
        }

        // returns the index of a key 
        void findKey(T key) 
        {
            bool found = false; 
            for (int i = 0; i <= key.size() + 1; i++) {
                if (keys[i] == key){
                    std::cout <<  i << std::endl;
                    found = true; 
                }
            }
            if (!found) {
                throw std::invalid_argument("Key could not be found");
            }
        }

        // returns the index of a value 
        void findValue(U value) 
        {
            bool found = false; 
            for (int i = 0; i <= values.size() + 1; i++) {
                if (values[i] == value){
                    std::cout << i << std::endl;
                    found = true; 
                }
            }
        
            if (!found) {
                throw std::invalid_argument("Key could not be found");
            }
        }

        // removes pair according to a certain index 
        void removePair(uint32_t i) 
        {
            keys.erase(keys.begin()+i);
            values.erase(values.begin()+i);
        }

        // deletes every pair 
        void clear() 
        {
            for (int i = 0; i <= ((keys.size() + values.size())/2); i++) {
                keys.pop_back();
                values.pop_back();
            }
        }

        // copies from another dictionary 
        void copyFrom(Dictionary& input) 
        {
            for (int i = 0; i < input.keys.size(); i++) {
                keys.push_back(input.keys[i]);
                values.push_back(input.values[i]);
            }
        }

        // removes the last added pair  
        void pop() 
        {
            keys.pop_back();
            values.pop_back(); 
        }
};

#endif