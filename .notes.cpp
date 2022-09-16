
VectorXf vector(MatrixXf M, int n, int column);

// 22.01.2020
//double **run(double **M, int column, double **A);

//--------------VECTORS---------------------------
VectorXf vector(MatrixXf M, int n, int column) {
  MatrixXd e = MatrixXd::Identity(3,3);
  VectorXf v(n);
  double N;
  
  v=M.col(column);
  N = v.norm();
  //Vec[i][j] = N * e[i][j] + Vec[i][j];
  v = N * e + v;
  return v;
}
/*
//-----------------NORM-----------------------
//-----------------NORM-----------------------
double norm(double **Vec, int n, int column) {
  int i, j;
  double Norm = 0;

  for (j = 0; j < n; j++) {
    Norm += Vec[j][column] * Vec[j][column];
  }
  Norm = sqrt(Norm);
  return Norm;
}
*/
