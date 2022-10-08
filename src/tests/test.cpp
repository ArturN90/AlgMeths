#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MODULE QR
#include <iostream>
#include <boost/test/tools/floating_point_comparison.hpp>
#include <boost/test/included/unit_test.hpp>
#include "./../../include/householder.hpp"

using namespace Eigen;

BOOST_AUTO_TEST_CASE(testQR)
{
  dimension = 3;
  MatrixXf A(dimension, dimension);
  MatrixXf R(dimension, dimension);
  MatrixXf Q(dimension, dimension);
  MatrixXf Z(dimension, dimension);
  float epsilon = 1e-5;

  Z(0, 0) = epsilon;
  Z(0, 1) = epsilon;
  Z(0, 2) = epsilon;
  Z(1, 0) = epsilon;
  Z(1, 1) = epsilon;
  Z(1, 2) = epsilon;
  Z(2, 0) = epsilon;
  Z(2, 1) = epsilon;
  Z(2, 2) = epsilon;
  
  A(0, 0) = 4;
  A(0, 1) = 1;
  A(0, 2) = -2;
  A(1, 0) = 1;
  A(1, 1) = 2;
  A(1, 2) = 0;
  A(2, 0) = 1;
  A(2, 1) = 0;
  A(2, 2) = 3;
  
  R(0, 0) = 4.24264;
  R(0, 1) = 1.41421;
  R(0, 2) = -1.17851;
  R(1, 0) = 0;
  R(1, 1) = 1.73205;
  R(1, 2) = -0.192449;
  R(2, 0) = 0;
  R(2, 1) = 0;
  R(2, 2) = 3.40207;

  Q(0, 0) =  0.942809;
  Q(0, 1) = -0.19245;
  Q(0, 2) = -0.272165;
  Q(1, 0) = 0.235702;
  Q(1, 1) =  0.962251;
  Q(1, 2) = 0.136083;
  Q(2, 0) =  0.235702;
  Q(2, 1) =  -0.19245;
  Q(2, 2) = 0.952579;
  
  auto [r, q] = qr(A);

  for (int i=0;i<dimension;i++){
  	for (int j=0;j<dimension;j++){
  		BOOST_CHECK_SMALL( fabs((R(i,j)-r(i,j))), Z(i,j));
  		BOOST_CHECK_SMALL( fabs((Q(i,j)-q(i,j))), Z(i,j));
	}
  }
}

