//PayRoll
//4/9/2018
//Author Daniel McGlasson

#include <iostream>

int main()
{
	double total;
	double fWt = 0.8;
	double fICA = 0.4;
	double stateTax = 0.7;
	int weeklyGrossPay;

	std::cout << "What is the employee's weekly gross pay >>>" << std::endl;
	std::cin >> weeklyGrossPay;
	
	total = weeklyGrossPay*fWt*fICA*stateTax;

	std::cout << "Your weekly gross pay is now " << total << std::endl;

	system("pause");
	return 0;
}