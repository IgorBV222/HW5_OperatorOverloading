#include "Car.h"

Car::Car(const std::string& model) : _model(model) {}

const std::string& Car::getModel() const
{
	return _model;
}

void Car::setModel(const std::string& model)
{
	_model = model;
}

const std::string Car::operator+(Car& other) const
{
	return _model + "_" + other.getModel();	
}

const std::string Car::operator-(Car& other) const
{
	return other.getModel() + "_" + _model;	
}

int Car::operator*(int num)
{
	return _model.size() * num;
}

double Car::operator/(int num)
{
	if (num == 0) {
		std::cout << "На ноль делть нельзя" << '\n';
	}
	return double(_model.size()) / num;
}

bool Car::operator==(Car& other) {
	return _model == other.getModel();
}

bool Car::operator!() {
	if (_model == " ")
		return true;
	else
		return false;
}

const std::string Car::operator+=(Car& other) const
{
	return _model + other.getModel();
}

const std::string& Car::operator<<(Car& other) {
	_model = other.getModel();
	return _model;
}