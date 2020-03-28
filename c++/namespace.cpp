 ///
 /// @file    namespace.cpp
 /// @author  lemon(haohb13@gmail.com)
 /// @date    2020-03-28 19:24:50
 ///
#include <stdio.h>
#include <iostream>
using namespace std;

int a = 1;
namespace B {      //B的声明
	//void displayB();
	int a = 2;
}

namespace A {
	int a = 3;
	void displayA(int a) {
		//std::cout << "displayA" << std::endl;
		//B::displayB();
		cout << "形参a = " << a << endl;
		cout << "A::a = " << A::a << endl;
		cout << "B::a = " << B::a << endl;
		cout << "全局a = " << ::a << endl;    //全局变量在匿名空间
	}
}//endof namespce A

namespace B {
	/*void displayB (){
		A::displayA();
	}*/
}//end of namespace B

int main()
{
	printf("a = 0\n");       // c的所有库函数在C++中都存在匿名函数中
	A::displayA(4);
	return 0;
}
