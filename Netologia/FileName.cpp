#include <iostream>
#include "Math.h"

void check(double& number);
void ChoosingAnAction(int action, double number1, double number2);
void resetTheInput();

int main()
{
	setlocale(LC_ALL, "rus");
	double number1{}, number2{};
	int action{};

	std::cout << "Введите первое число: ";
	check(number1);
	std::cout << "Введите второе число: ";
	check(number2);
	
	std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
	//проверка на корректный ввод
	while ((!(std::cin >> action)) || action <= 0 || action >= 6)
	{
		//сброс не корректного вода
		resetTheInput();

		std::cout << "Такой операции нет \\(._.)/\nПопробуйте ещё раз: ";
	}

	ChoosingAnAction(action, number1, number2);


	return EXIT_SUCCESS;
}

void check(double& number)
{
	while (!(std::cin >> number))
	{
		//сброс не корректного ввода
		resetTheInput();

		std::cout << "Вы ввели не корректный ответ!\nПопробуйте ещё раз: ";
	}
}

void ChoosingAnAction(int action, double number1, double number2)
{
	switch (action)
	{
	case 1:
		std::cout << "Ответ: " << MyMath::sum(number1, number2);
		break;
	case 2:
		std::cout << "Ответ: " << MyMath::subtraction(number1, number2);
		break;
	case 3:
		std::cout << "Ответ: " << MyMath::multiplication(number1, number2);
		break;
	case 4:
		std::cout << "Ответ: " << MyMath::division(number1, number2);
		break;
	case 5:
		std::cout << "Ответ: " << MyMath::degree(number1, number2);
		break;
	}
}

void resetTheInput()
{
	std::cin.clear();
	std::cin.ignore();
}