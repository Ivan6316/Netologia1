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

	std::cout << "������� ������ �����: ";
	check(number1);
	std::cout << "������� ������ �����: ";
	check(number2);
	
	std::cout << "�������� �������� (1 - ��������, 2 ���������, 3 - ���������, 4 - �������, 5 - ���������� � �������): ";
	//�������� �� ���������� ����
	while ((!(std::cin >> action)) || action <= 0 || action >= 6)
	{
		//����� �� ����������� ����
		resetTheInput();

		std::cout << "����� �������� ��� \\(._.)/\n���������� ��� ���: ";
	}

	ChoosingAnAction(action, number1, number2);


	return EXIT_SUCCESS;
}

void check(double& number)
{
	while (!(std::cin >> number))
	{
		//����� �� ����������� �����
		resetTheInput();

		std::cout << "�� ����� �� ���������� �����!\n���������� ��� ���: ";
	}
}

void ChoosingAnAction(int action, double number1, double number2)
{
	switch (action)
	{
	case 1:
		std::cout << "�����: " << MyMath::sum(number1, number2);
		break;
	case 2:
		std::cout << "�����: " << MyMath::subtraction(number1, number2);
		break;
	case 3:
		std::cout << "�����: " << MyMath::multiplication(number1, number2);
		break;
	case 4:
		std::cout << "�����: " << MyMath::division(number1, number2);
		break;
	case 5:
		std::cout << "�����: " << MyMath::degree(number1, number2);
		break;
	}
}

void resetTheInput()
{
	std::cin.clear();
	std::cin.ignore();
}