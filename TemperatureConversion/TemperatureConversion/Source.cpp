//TemeratureConversion
//3/5/2018
//Author Daniel McGlasson

#include <iostream>
int main()
{
	double fahrenhitAt8Am;
	double fahrenhitAt12Pm;
	double fahrenhitAt5Pm;
	double CelsiusAt8Am;
	double CelsiusAt12Pm;
	double CelsiusAt5Pm;
	
		
	std::cout << "What was the temperature (fahrenhit) at 8:00 am >>> " << std::endl;
	std::cin >> fahrenhitAt8Am;
	std::cout << "What was the temperature (fahrenhit) at 12:00 pm >>> " << std::endl;
	std::cin >> fahrenhitAt12Pm;
	std::cout << "What was the temperature (faharenhit) at 5:00 pm >>> " << std::endl;
	std::cin >> fahrenhitAt5Pm;
	CelsiusAt8Am = (fahrenhitAt8Am - 32) * 5 / 9;
	CelsiusAt12Pm = (fahrenhitAt12Pm - 32) * 5 / 9;
	CelsiusAt5Pm = (fahrenhitAt5Pm - 32) * 5 / 9;
	std::cout << "Your temperature in celsius at 8:00 am is " << CelsiusAt8Am << std::endl;
	std::cout << "Your temperature in celsius at 12:00 pm is " << CelsiusAt12Pm << std::endl;
	std::cout << "Your temperature in celsius at 5:00 pm is " << CelsiusAt5Pm << std::endl;

	system("pause");
	return 0;
}