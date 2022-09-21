#include "./../../include/householder.hpp"
#include <iostream>
#include <tuple> 

int main() {
  dimension = 4;
  MatrixXf A(dimension, dimension);


  A(0, 0) = 4;
  A(0, 1) = 1;
  A(0, 2) = -2;
  A(0, 3) = 2;

  A(1, 0) = 1;
  A(1, 1) = 2;
  A(1, 2) = 0;
  A(1, 3) = 1;

  A(2, 0) = -2;
  A(2, 1) = 0;
  A(2, 2) = 3;
  A(2, 3) = -2;

  A(3, 0) = 2;
  A(3, 1) = 1;
  A(3, 2) = -2;
  A(3, 3) = -1;

auto [R, Q] = qr(A);
        std::cout <<"The upper triangular matrix R:"<< std::endl;
        std::cout << R << std::endl;
        std::cout <<"The orthogonal matrix Q:"<< std::endl;
        std::cout << Q << std::endl;
return 0;
}

