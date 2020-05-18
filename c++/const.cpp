 ///
 /// @file    const.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2020-03-28 20:26:02
 ///
 
#include <iostream>
using std::cout;
using std::endl;
using namespace std;

//数组指针   int (*p)[]  
//指针数组   int * p[]
//函数指针   int (*p) ()
//指针函数   int * p()
int main()
{
	int a = 20;
	int b = 10;
    // 常量指针（point to const） ，const 修饰 *p
	const int *p1 = &a; 
	int const *p2 = &a;
	*p2 = &b; 
    // 指针常量(const point)，const 修饰p
	int * const p3 = &b;
    *p3 = 10;
}
