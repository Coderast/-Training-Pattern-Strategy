#pragma once
#include <string>
class Person
{
protected:
	std::string name;
public:
	void setName(const std::string& name);
	std::string getName() const;
};