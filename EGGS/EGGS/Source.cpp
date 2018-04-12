//Eggs
//4/6/2018
//Author Daniel McGlasson 

#include <iostream>

int main()
{
	int eggsUserWants;
	double eggsRemaining;
	double singleEgg;
	double pricePerDozen = 2.00;
	double pricePerEgg = 0.85;
	int dozenEggs;
	double finalPrice;

	std::cout << "How many eggs do you want >>>" << std::endl;
	std::cin >> eggsUserWants;
	
	dozenEggs = eggsUserWants  / 12;
	eggsRemaining = eggsUserWants % 12;
	singleEgg = eggsRemaining*pricePerEgg;

	std::cout << "Okay you will have " << dozenEggs << " dozen eggs and " << eggsRemaining << " remaining." << std::endl;
	finalPrice = (pricePerDozen * dozenEggs) + (pricePerEgg * eggsRemaining);
	std::cout << "Okay your total price is going to be " << finalPrice << std::endl;

	system("pause");
	return 0;
}