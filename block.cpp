#include <iostream>
#include <Eigen/Dense>

// Block of size (p,q), starting at (i,j)	
// matrix.block(i,j,p,q);
// matrix.block<p,q>(i,j);
int main()
{
Eigen::MatrixXf m1 = Eigen::MatrixXf::Random(4,4);
std::cout <<"m1:\n" << m1<<std::endl;
std::cout <<"m1 block :\n" << m1.block<2,2>(1,1)<<std::endl;
std::cout <<"m1 block :\n" << m1.block(1,1,2,2)<<std::endl;

std::cout<< "col 1:\n" << m1.col(1)<<std::endl;
std::cout<< "row 1:\n" << m1.row(1)<<std::endl;

std::cout <<"topleft:\n"<< m1.topLeftCorner(2,2)<<std::endl;
std::cout <<"topright:\n"<< m1.topRightCorner(2,2)<<std::endl;
std::cout <<"bottom left:\n"<< m1.bottomLeftCorner(2,2)<<std::endl;
std::cout <<"bottom right:\n"<< m1.bottomRightCorner(2,2)<<std::endl;

std::cout <<"top rows:\n"<< m1.topRows(2)<<std::endl;
std::cout <<"bottom rows:\n"<< m1.bottomRows(2)<<std::endl;
std::cout <<"left cols:\n"<< m1.leftCols(2)<<std::endl;
std::cout <<"right cols:\n"<< m1.rightCols(2)<<std::endl;

Eigen::ArrayXf v(6);
v<<1,2,3,4,5,6;

std::cout <<" head 3:\n"<< v.head(3) <<std::endl;
std::cout <<" tail 3:\n"<< v.tail(3) <<std::endl;
std::cout <<" segment 3:\n"<< v.segment(2,3) <<std::endl;

return 0;
}
