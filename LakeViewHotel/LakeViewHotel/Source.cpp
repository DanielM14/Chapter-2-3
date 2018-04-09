//Lake View Hotel
//4/9/2018
//Author Daniel McGlasson

#include <iostream>

int main()
{ 
	double costPerNight = 100;
	double oneTimeRoomService = 35;
	double minutesOnTele = 0.25; 
	int nightsUserStayed;
	int minutesOnPhone;
	int userRoomService;

	std::cout << "How many nights did you stay >>>" << std::endl;
	std::cin >> nightsUserStayed;
	std::cout << "How many times did you use room service >>>" << std::endl;
	std::cin >> userRoomService;
	std::cout << "How many minutes did you use the phone >>>" << std::endl;
	std::cin >> minutesOnPhone;
	std::cout << "Your room cost is " << costPerNight*nightsUserStayed << ". " << "Your room service cost is " << oneTimeRoomService*userRoomService << " and your telephone cost is " << minutesOnTele*minutesOnPhone << ". " << "Thank you come again." << std::endl;


	system("pause");
	return 0;

}
