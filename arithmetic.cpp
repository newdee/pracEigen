#include <iostream>
#include <Eigen/Dense>

int main()
{
Eigen::Matrix2d m1,m2;
m1<< 1,2,3,4;
m2<< 6,2,2,1;
std::cout<<"m1:\n"<<m1<<std::endl;
std::cout<<"m2:\n"<<m2<<std::endl;
//+ - * /
std::cout<<"m1+m2:\n"<<m1+m2<<std::endl;
std::cout<<"m1-m2:\n"<<m1-m2<<std::endl;
std::cout<<"m1*m2:\n"<<m1*m2<<std::endl;
std::cout<<"m1/m2:\n"<<m1/3<<std::endl;

//transpose && conjugation
Eigen::MatrixXcf m3=Eigen::MatrixXcf::Random(2,2);
std::cout<<"m3:\n"<<m3<<std::endl;
std::cout<<"m3 transpose:\n"<<m3.transpose()<<std::endl;
std::cout<<"m3 conjugation:\n"<<m3.conjugate()<<std::endl;
std::cout<<"m3^* \n"<<m3.adjoint()<<std::endl;

//matrix and vector arithmetic
Eigen::Vector2d u1(1,2),u2(2,0);

std::cout<<"m1*m1:\n"<<m1*m1<<std::endl;
std::cout<<"m1*u1:\n"<<m1*u1<<std::endl;
std::cout<<"m1^T*u1:\n"<<m1.transpose()*u1<<std::endl;
std::cout<<"u1^T*m1:\n"<<u1.transpose()*m1<<std::endl;
std::cout<<"u1^T*u2:\n"<<u1.transpose()*u2<<std::endl;


//dot product && cross product
Eigen::Vector3d v1(1,2,3),v2(9,8,7);


std::cout<<"v1:\n"<<v1<<std::endl;
std::cout<<"v2:\n"<<v2<<std::endl;
std::cout<<"dot product :\n"<<v1.dot(v2)<<std::endl;
double dp = v1.adjoint()*v2;
std::cout<<"dot product by adjoint:\n"<<dp<<std::endl;
std::cout<<"cross product :\n"<<v1.cross(v2)<<std::endl;


//reduction operations
std::cout<<"m1 sum:\n"<<m1.sum()<<std::endl;
std::cout<<"m1 product:\n"<<m1.prod()<<std::endl;
std::cout<<"m1 mean:\n"<<m1.mean()<<std::endl;
std::cout<<"m1 minCoeff:\n"<<m1.minCoeff()<<std::endl;
std::cout<<"m1 maxCoeff:\n"<<m1.maxCoeff()<<std::endl;
std::cout<<"m1 trace:\n"<<m1.trace()<<std::endl;
return 0;
}
