#pragma once
#include <iostream>

extern "C" _declspec(dllexport) void print();//declspec(dllexport)��һ����������Ϊ��������,��ΪDLL��һ�����⺯���ӿ�

//�����ռ��µ����Ա������ε�������
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


