//PayChecks
//4/9/2018
//Author Daniel McGlasson

#include <iostream>

int main()
{
	double checkDepositAmount;
	double totalChecksSaved;
	double totalDeposit;
	int paycheckAmount;
	int percentOfCheck;
	int bonusAmount;

	std::cout << "How much is your check amount >>>" << std::endl;
	std::cin >> paycheckAmount;
	std::cout << "What percent of your check do you want deposit >>>" << std::endl;
	std::cin >> percentOfCheck;
	std::cout << "How much of your bonus do you want to deposit >>>" << std::endl;
	std::cin >> bonusAmount;

	totalChecksSaved = (paycheckAmount*percentOfCheck) * 24;
	totalDeposit = totalChecksSaved + 100;

	std::cout << "Your total deposit is " << totalDeposit << "." << std::endl;

	system("pause");
	return 0; 

}
