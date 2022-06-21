# cppDictionary 
A simple python like key-string, value-int pair data structre  

# Usage 

### Setup 
```C++
Dictionary<std::string, int> d1("stringIntDic"); 
Dictionary<int, char> d2("intCharDic")
```

### Adding pairs 
```C++
d1.addPair("Year", 2022); 
```

### Printing out the Dictionary 
```C++
d1.printDictionary(); 


>>> NewDic 
{'Year', 2022}
```