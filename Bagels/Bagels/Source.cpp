//Bagels
//4/9/2018
//Author Daniel McGlasson

#include <iostream>

int main()
{
	double costPerBagel = 0.99;
	double costPerDonut = 0.75;
	double costPerCoffeeCup = 1.20;
	int numberOfBagels;
	int numberOfDonuts;
	int numberOfCoffeeCups;
	double tax = 1.07;
	double total;

	std::cout << "How many bagels do you want >>>" << std::endl;
	std::cin >> numberOfBagels;
	std::cout << "Do you want any donuts >>>" << std::endl;
	std::cin >> numberOfDonuts;
	std::cout << "How about some coffee >>>" << std::endl;
	std::cin >> numberOfCoffeeCups;

	total = (numberOfBagels*costPerBagel + numberOfDonuts*costPerDonut + numberOfCoffeeCups*costPerCoffeeCup) * tax;
	std::cout << "Your total is " << total << std::endl;

	system("pause");
	return 0;

}