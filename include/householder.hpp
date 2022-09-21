#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <tuple>
#include <eigen3/Eigen/Dense>

using namespace Eigen;

int dimension;

VectorXf vector(MatrixXf A, int column);
MatrixXf householder(MatrixXf A, int column);
std::tuple <MatrixXf, MatrixXf> qr(MatrixXf A);

VectorXf vector(MatrixXf A, int column) {
  MatrixXf I = MatrixXf::Identity(dimension, dimension);
  VectorXf v(dimension);
  int i=0;
  v=A.col(column);

  if (column > 0){
          do{
                  v(i)=0.0;
                  i++;
          }while(i<column);
  }
  double N = v.norm();


  v = v - N*I.col(column) ;
  return v;
}

MatrixXf householder(MatrixXf A, int column) {
 
  VectorXf VV(dimension);
  MatrixXf H(dimension, dimension);
  MatrixXf I = MatrixXf::Identity(dimension, dimension);
  VV=vector(A, column);

  H = I - 2* VV * VV.transpose() /(VV.transpose() *VV);
  return H;
}


std::tuple<MatrixXf, MatrixXf>qr(MatrixXf A){
//atrixXf qr(MatrixXf A){

MatrixXf H;
MatrixXf H1;
MatrixXf Q;
MatrixXf R;

H = householder(A, 0);
R = H * A;

for (int i = 1; i < dimension - 1; i++){
        H1 = householder(R, i);
        R = H1 * R;
        Q = H * H1;

  }

return {R, Q};
}
