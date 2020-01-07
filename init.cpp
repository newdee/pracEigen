#include <iostream>
#include <Eigen/Dense>

int main()
{

Eigen::Matrix3f m1;
//comma init
m1<< 1,2,3,5,4,3,6,7,8;
std::cout <<"m1:\n"<< m1<<std::endl;

//resize matrix
//defalut column-major storage
Eigen::MatrixXd m2(2,6);
m2<< 1,1,2,2,3,3,4,4,5,5,6,6;
std::cout <<"m2:\n"<< m2<<std::endl;
std::cout <<"m2 size: "<< m2.rows() <<"x" << m2.cols() <<std::endl;
m2.resize(4,3);
std::cout <<"m2:\n"<< m2<<std::endl;
std::cout <<"m2 size: "<< m2.rows() <<"x" << m2.cols() <<std::endl;
m2.resize(3,4);
std::cout <<"m2:\n"<< m2<<std::endl;
std::cout <<"m2 size: "<< m2.rows() <<"x" << m2.cols() <<std::endl;

//Optional template parameters
//Matrix<typename Scalar,
//       int RowsAtCompileTime,
//       int ColsAtCompileTime,
//       int Options = 0,
//       int MaxRowsAtCompileTime = RowsAtCompileTime,
//       int MaxColsAtCompileTime = ColsAtCompileTime>
//

Eigen::Matrix<float, Eigen::Dynamic, Eigen::Dynamic,Eigen::RowMajor>m3(2,6);
m3<< 1,1,2,2,3,3,4,4,5,5,6,6;
std::cout <<"m3:\n"<< m3<<std::endl;
std::cout <<"m3 size: "<< m3.rows() <<"x" << m3.cols() <<std::endl;
m3.resize(4,3);
std::cout <<"m3:\n"<< m3<<std::endl;
std::cout <<"m3 size: "<< m3.rows() <<"x" << m3.cols() <<std::endl;
m3.resize(3,4);
std::cout <<"m3:\n"<< m3<<std::endl;
std::cout <<"m3 size: "<< m3.rows() <<"x" << m3.cols() <<std::endl;


return 0;
}
