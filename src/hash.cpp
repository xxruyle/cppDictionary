


//Dictionary<class T, class U>::Dictionary(std::string name)
//{       
//    dictionaryName = name; 
//}


//void Dictionary<class T, class U>::addPair(T key, U value)
//{
//    keys.push_back(key);
//    values.push_back(value);
//}


//void Dictionary<class T, class U>::printDictionary()  // python like printing out of all the keys and values 
//{
//    std::cout << dictionaryName << std::endl; 
//    std::cout << "{";
//    for (int i = 0; i < ((keys.size() + values.size())/2); i++) {
//        std::cout << "'" << keys[i] << "'" << ": " << values[i];
//
//        if (i == values.size() - 1) {
//            std::cout << "}"; 
//        } else {
//            std::cout << ", "; 
//        }
//    }
//
//    // If the dictionary is empty 
//    if (keys.size() == 0 && values.size() == 0) {
//        std::cout << " }";
//    }
//    std::cout << "\n\n"; 
//}
//
//
//void Dictionary<class T, class U>::printKeys() // prints only the keys 
//{
//    for (int i = 0; i < keys.size(); i++) {
//        std::cout << keys[i] << std::endl;
//    }
//}
//
//void Dictionary<class T, class U>::printValues() // prints only the values 
//{
//    for (int i = 0; i < values.size(); i++) {
//        std::cout << values[i] << std::endl;
//    }
//}
//
//
//void Dictionary<class T, class U>::findKey(T key) // returns the index of a key 
//{
//    bool found = false; 
//
//    for (int i = 0; i < key.size(); i++) {
//        if (keys[i] == key){
//            std::cout <<  i << std::endl;
//            found = true; 
//        }
//    }
//
//    if (!found) {
//        std::cout << "Key could not be found";
//    }
//}
//
//
//void Dictionary<class T, class U>::findValue(U value) // returns the index of a value 
//{
//    bool found = false; 
//    for (int i = 0; i < values.size(); i++) {
//        if (values[i] == value){
//            std::cout << i << std::endl;
//            found = true; 
//        }
//    }
//
//    if (!found) {
//        std::cout << "Key could not be found";
//    }
//}
//
//
//void Dictionary<class T, class U>::removePair(int i)
//{
//    keys.erase(keys.begin()+i);
//    values.erase(values.begin()+i);
//}
//
//
//void Dictionary<class T, class U>::clear()
//{
//    for (int i = 0; i <= ((keys.size() + values.size())/2); i++) {
//        keys.pop_back();
//        values.pop_back();
//    }
//}
//
//void Dictionary<class T, class U>::pop()
//{
//    keys.pop_back();
//    values.pop_back(); 
//}
//
//void Dictionary<class T, class U>::copyFrom(Dictionary& input)
//{
//    for (int i = 0; i < input.keys.size(); i++) {
//        keys.push_back(input.keys[i]);
//        values.push_back(input.values[i]);
//    }
//}

