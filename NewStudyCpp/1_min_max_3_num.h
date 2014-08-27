#pragma hdrstop
#include <iostream>
#include "warning.h"

using namespace std;


bool min_max_3_num()
{
	float num1,num2,num3,x=0;

	while(x==0)
	{
		cout << " input 1 ";
		cin  >> num1;
		if (std::cin.fail())
		{
				x = 0;

				std::cout << "ERROR! YOU MUST ENTER ONLY NUMBERS!!! \n";
				std::cin.clear(); std::cin.sync();

		}
		else
			break;
	}

		while(x==0)
	{
		cout << " input 2 ";
		cin  >> num2;
		if (std::cin.fail())
		{
				std::cout << "ERROR! YOU MUST ENTER ONLY NUMBERS!!! \n";
				x = 0;
				std::cin.clear(); std::cin.sync();

		}
		else
			break;
	}

	while(x==0)
	{
		cout << " input 3 ";
		cin  >> num3;
		if (std::cin.fail())
		{
				std::cout << "ERROR! YOU MUST ENTER ONLY NUMBERS!!! \n";
				x = 0;
				std::cin.clear(); std::cin.sync();

		}
		else
			break;
	}



	float min = num1;
	float max = num1;

	if(num1>max)
		max = num1;
	if(num2>max)
		max = num2;
	if(num3>max)
		max = num3;

	if(num1<min)
		min = num1;
	if(num2<min)
		min = num2;
	if(num3<min)
		min = num3;

	cout << " min = " << min<<"\n";
	cout << " max = " << max<<"\n";


	return true;
}


