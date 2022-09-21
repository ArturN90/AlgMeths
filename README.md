# AlgMeths
Algebra methods. Develop in progress. Project is based on Eigen C++ template library for linear algebra. 
## Build (algmeths.so)   
1. Create a directiory build
~~~
mkdir build && cd build/
~~~  
2.  
~~~
cmake ..
~~~ 
3.  
~~~
make
~~~
## Compilation of the example input file mainapp.cpp  
File is in following directory:
~~~
/src/examples/
~~~  
To compile, link and run use the following commands:  
~~~
g++ -std=c++17 -c mainapp.cpp -o  mainapp.o && g++ -std=c++17 mainapp.o -o test -L ./../../build/ -lalgmeths $$ ./test
~~~
## Supported Methods:  
1. QR Decomposition  

## Instalation
#### to update
## TODO:
#### 1. check functions  
#### 2. tests  
#### 3. clean code  
####  4. Add new methods 
