//Eggs
//4/6/2018
//Author Daniel McGlasson 

#include <iostream>

int main()
{
	double eggsUserWants;
	double eggsRemaining;
	double singleEgg;
	double pricePerDozen = 2.00;
	double pricePerEgg = 0.85;
	int dozenEggs;
	

	std::cout << "How many eggs do you want >>>" << std::endl;
	std::cin >> eggsUserWants;
	
	dozenEggs = eggsUserWants  / 12;
	eggsRemaining = dozenEggs  % 12;
	dozenEggs * pricePerDozen;
	singleEgg * pricePerEgg;

	std::cout << "Okay you will have " << dozenEggs << " eggs and " << eggsRemaining << " remaining." << std::endl;
	std::cout << "Your price is " << dozenEggs * pricePerDozen << std::endl;
	system("pause");
	return 0;
}