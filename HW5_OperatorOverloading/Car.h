#pragma once
#include <string>
#include <iostream>


class Car
{
public:
	Car(const std::string& model);

	const std::string& getModel()const;
	void setModel(const std::string& model);

	const std::string operator+(Car& other)const;

	const std::string operator-(Car& other)const;

	int operator*(int num);

	double operator/(int num);

	bool operator==(Car& other);

	bool operator!();

	const std::string operator+=(Car& other)const;

	const std::string& operator<<(Car& other);
	friend std::ostream& operator<<(std::ostream& os, Car& other) {
		os << other.getModel();
		return os;
	}

private:
	std::string _model;
};

