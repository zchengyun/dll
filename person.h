#pragma once
#include <iostream>

extern "C" _declspec(dllexport) void print();//declspec(dllexport)将一个函数声明为导出函数,作为DLL的一个对外函数接口

//命名空间下的类成员函数如何导出？？
namespace mydll {
	class person
	{
	public:
		person(std::string& nameA, int& ageA);

		std::string getName();
		int getAge();
		void setName(std::string& nameA);
		void setAge(int& ageA);

	private:
		std::string name = "zhangsan";
		int age = 10;
	};


}


