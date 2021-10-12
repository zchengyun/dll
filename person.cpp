#include "pch.h"
#include "person.h"

void print() {
	std::cout << "´òÓ¡³É¹¦£¡" << std::endl;
}

namespace mydll {
	person::person(std::string& nameA, int& ageA) {
		name = nameA;
		age = ageA;
	}

	std::string person::getName() {
		return name;
	}

	int person::getAge() {
		return age;
	}

	void person::setName(std::string& nameA) {
		name = nameA;
	}

	void person::setAge(int& ageA) {
		age = ageA;
	}
}