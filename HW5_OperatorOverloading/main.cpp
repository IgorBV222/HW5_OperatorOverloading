#include <iostream>
#include "Car.h"


int main() {
	setlocale(LC_ALL, "Russian");
	
	Car a1("AUDI");
	Car a2("BMW");

	

	std::cout << "Перегрузка оператора +:" << std::endl;
	std::cout << a1.getModel() << " + " << a2.getModel() << " = " << a1 + a2 << std::endl;
	std::cout << "=============" << std::endl;
	
	std::cout << "Перегрузка оператора -:" << std::endl;
	std::cout << a1.getModel() << " - " << a2.getModel() << " = " << a1 - a2 << std::endl;
	std::cout << "=============" << std::endl;

	std::cout << "Перегрузка оператора *:" << std::endl;
	int num1 = 2;
	std::cout << a1.getModel() << " * " << num1 << " = " << a1 * num1 << std::endl;
	std::cout << "=============" << std::endl;

	std::cout << "Перегрузка оператора /:" << std::endl;
	int num2 = 0;
	std::cout << a1.getModel() << " / " << num2 << " = " << a1 / num2 << std::endl;
	std::cout << "=============" << std::endl;

	std::cout << "Перегрузка оператора ==:" << std::endl;
	std::cout << a1.getModel() << " == " << a2.getModel() << " -> " << (a1 == a2) << std::endl;
	std::cout << "=============" << std::endl;

	std::cout << "Перегрузка оператора !:" << std::endl;
	std::cout << "! " << a2.getModel() << " -> " << !a2 << std::endl;
	std::cout << "=============" << std::endl;

	std::cout << "Перегрузка оператора +=:" << std::endl;	
	std::cout << a1.getModel() << " += " << a2.getModel() << " -> " << (a1 += a2) << std::endl;
	std::cout << "=============" << std::endl;

	std::cout << "Перегрузка оператора <<:" << std::endl;
	std::cout << a1.getModel() << " << " << a2.getModel() << " -> " << (a1 << a2) << std::endl;
	std::cout << "=============" << std::endl;

}
