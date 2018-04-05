//PayCheck
//4/5/2018
//Author Daniel McGlasson


#include <iostream>


int main()
{
	double hoursWorked;
	double hourlyPaid;
	double netPaid;


	std::cout << "Please enter your hourly pay >>> " << std::endl;
	std::cin >> hourlyPaid;
	std::cout << "Now please enter your totel hours worked >>> ";
	std::cin >> hoursWorked;
	netPaid = hourlyPaid * hoursWorked;
	std::cout << "Your total pay is "<<netPaid << std::endl;


	system("pause");
	return 0;

}