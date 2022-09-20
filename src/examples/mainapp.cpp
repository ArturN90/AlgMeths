#include "./../../include/householder.hpp"
#include <iostream>

/*void check_dim(int rows, int col){

if (rows!=col){
throw "Wrong shape of Matrix";
}
}*/


int main() {
  dimension = 4;
  int iter = 0;
  MatrixXf A(dimension, dimension);
  MatrixXf Q(dimension, dimension);
  MatrixXf H(dimension, dimension);
  MatrixXf H1(dimension, dimension);
  MatrixXf H2(dimension, dimension);
  MatrixXf HA(dimension, dimension);
  MatrixXf R(dimension, dimension);

  //A(0,0)=1;
  //A(0,1)=-3;

  //A(1,0)=1;
  //A(1,1)=5;
  //std::cout << A << std::endl;

  //A(2,0)=-4;
  //A(2,1)=24;
  //A(2,2)=-41;

  /*
  A(0, 0) = 13;
  A(0, 1) = -3;
  A(0, 2) = -2;

  A(1, 0) = 3;
  A(1, 1) = 3;
  A(1, 2) = 2;

  A(2, 0) = 0;
  A(2, 1) = 0;
  A(2, 2) = 8;*/

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


H = householder(A, 0);
R = H * A;

for (int i =1; i<dimension-1; i++){
        H1 = householder(R, i);
        R = H1 * R;
        Q = H*H1;

        std::cout <<""<< std::endl;
        std::cout << R << std::endl;
        std::cout <<""<< std::endl;
        std::cout << Q << std::endl;

        std::cout <<""<< std::endl;
        std::cout << R*Q << std::endl;
  }

}

