# cppDictionary 
A simple python like key-value pair data structre  

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
{'Year': 2022}
```


### Removing a pair 
```C++
d1.removePair(0);

// will remove a specific pair from the dictionary  
```

### Clearing the dictionary 
```C++
d1.clear();

// will remove every pair from the dictionary  
```

### Popping the dictionary 
```C++
d1.pop()
```

### Copying a dictionary 
```C++
d2.copyFrom(d1);

//Copies the dictionary from d1 into d2 so they have the same pairs 
```