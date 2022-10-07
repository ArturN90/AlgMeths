# NuMeths
Numeric (maths) methods. Develop in progress. Project is based on Eigen C++ template library for linear algebra. 
## Build (numeths.so)   
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
## Check the code using boost test function  
File is in following directory:  
~~~
/src/tests/
~~~
To compile, link and run use the following commands:  
~~~
g++ -std=c++17 -o test3x3.o test.cpp -lboost_unit_test_framework && ./test3x3.o --log_level=test_suite
~~~

## Compilation of the example input file mainapp.cpp  
File is in following directory:
~~~
/src/examples/
~~~  
To compile, link and run use the following commands:  
~~~
g++ -std=c++17 -c mainapp.cpp -o  mainapp.o && g++ -std=c++17 mainapp.o -o test -L ./../../build/ -lnumeths && ./test
~~~
## Supported Methods:  
1. QR Decomposition  

## Coming soon:  
1. Newton Interpolation
2. Richardson extrapolation in case of  integration

## Instalation
#### to update
## TODO:
#### 1. check functions  
#### 2. tests  
#### 3. clean code  
####  4. Add new methods 
