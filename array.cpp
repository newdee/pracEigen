#include <iostream>
#include <Eigen/Dense>

//  Array<float,Dynamic,1> ArrayXf 
//  Array<float,3,1>  Array3f 
//  Array<double,Dynamic,Dynamic> ArrayXXd 
//  Array<double,3,3>  Array33d 
int main()
{
Eigen::ArrayXXf m1(2,2);
m1 << 1,2,3,4;
std::cout<<m1 << std::endl;

Eigen::ArrayXXf m2(3,3);
Eigen::ArrayXXf m3(3,3);

m2<< 1,2,3,4,5,6,7,8,9;
m3 << 1,2,3,1,2,3,1,2,3;
std::cout<< m2+m3 << std::endl;

std::cout<< m1*2 <<std::endl;
std::cout<< m2*m3 <<std::endl;

Eigen::ArrayXXf m4=Eigen::ArrayXXf::Random(5,5);
std::cout << m4 << std::endl;
std::cout << m4.abs() <<std::endl;





std::cout << m4.abs().sqrt() <<std::endl;
std::cout << m4.max(m4.abs().sqrt()) <<std::endl;


Eigen::Matrix3f m5;
m5 << 2,2,2,2,2,2,2,2,2;
std::cout <<"matrix m2 * m5" << m2.matrix()*m5 <<std::endl;
std::cout <<"array m2 * m5" << m2*m5.array() <<std::endl;
std::cout <<"coefficient m2 * m5" << m2.matrix().cwiseProduct(m5) <<std::endl;
return 0;
}
