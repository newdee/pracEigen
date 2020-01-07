#include <iostream>
#include <Eigen/Dense>
int main()
{
  Eigen::MatrixXd m(2,2);
  Eigen::MatrixXd m2=Eigen::MatrixXd::Random(2,2);
  m(0,0) = 3;
  m(1,0) = 2.5;
  m(0,1) = -1;
  m(1,1) = m(1,0) + m(0,1);
  std::cout << m << std::endl;
  std::cout << m2 << std::endl;
  std::cout << m+m2 << std::endl;
  std::cout << m+m2+Eigen::Matrix2d::Constant(0.6) << std::endl;
}
