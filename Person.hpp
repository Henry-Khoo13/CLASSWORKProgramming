#pragma once

#include <string>
#include <iostream>

class Person {
public:
	std::string firstName;
	std::string lastName;
};

void writePerson(const Person& person);
