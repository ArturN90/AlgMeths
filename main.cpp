#include "bib.hpp"
#include <iostream>


int main() {
  dimension = 2;
  int iter = 0;
  MatrixXf A(dimension, dimension);
  MatrixXf H(dimension, dimension);
  MatrixXf H1(dimension, dimension);
  MatrixXf H2(dimension, dimension);
  MatrixXf HA(dimension, dimension);
  MatrixXf R(dimension, dimension);

  A(0,0)=1;
  A(0,1)=-3;
  //A(0,2)=2;
  A(1,0)=1;
  A(1,1)=5;
  //A(1,2)=-68;
  //A(2,0)=-4;
  //A(2,1)=24;
  //A(2,2)=-41;
  
  /*
  A(0, 0) = 4.0;
  A(0, 1) = 1.0;
  A(0, 2) =-2.0;
  A(0, 3) = 2.0;

  A(1, 0) = 1.0;
  A(1, 1) = 2.0;
  A(1, 2) = 0.0;
  A(1, 3) = 1.0;

  A(2, 0) = -2.0;
  A(2, 1) = 0.0;
  A(2, 2) = 3.0;
  A(2, 3) = -2.0;
  
  A(3, 0) = 2.0;
  A(3, 1) = 1.0;
  A(3, 2) =-2.0;
  A(3, 3) = -1.0;*/

  float const threshold = 1e-5;
  std::cout << A << std::endl;
  
  for (int i =0; i<dimension;i++){
  	int parameter = 0;
  	H = householder(A, parameter);
  	HA = H * A;
  	parameter = 1;
  	H1 = householder(HA, iter);
  	HA = H1 * HA;
 	R = H1 * H;
  	A = HA * R.transpose();
  	std::cout << ""<< std::endl;
  	std::cout << A << std::endl;
  }
}
