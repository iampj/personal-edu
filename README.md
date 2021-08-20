# Learning C++ 
## Installing a compiler 

```bash
$ brew install gcc
```

## How to compile .cpp and exec



- g++ - is the compiler call
- -o - stating that you want to name the output file rather than seeing a.out
- main - is the name of the output file used in the following command
- main.cpp - is the file located in the current dir that you wish to compile.
```bash
$ g++ -o main main.cpp
```
This next command alone runs the file created in the previous step
```bash
$ ./main
```

## Variable types
| **type** | **usage** | **examples** |
|----------|-----------|--------------|
| **int** | integer numbers | *0*, *200* |
| **double** | floating-point numbers | *3.14*, *-400.0* |
| **char** | characters | '*a*', '*1*', '*!*' |
| **string** | sequence of characters | "*Strings...*", "* an array of characters!*" |
| **bool** | true/false | *true*, *false* |