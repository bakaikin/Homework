//---------------------------------------------------------------------------

#pragma hdrstop

#include <tchar.h>
#include <iostream>
#include <conio.h>

#include "1_min_max_3_num.h"
#include "2_negative_summ_5num.h"
#include "3_sum_of_6_floats.h"
#include "4_calculate_expression.h"
#include "5_odd_or_even.h"
#include "6_stats_of_sequence.h"
#include "7_max_of_two_digits.h"
#include "even_pos_10num.h"

using namespace std;

//---------------------------------------------------------------------------

#pragma argsused

int _tmain(int argc, _TCHAR* argv[])
{
  unsigned int task_num;

  cout << " task number ";
  cin  >> task_num;

   switch (task_num)
   {
   case 1:
		min_max_3_num();
								break;
   case 2:
		negative_summ_5num();
								break;
   case 3:
		sum_of_6_floats();
								break;
   case 4:
		calculate_expression();
								break;
   case 5:
		odd_or_even();
								break;
   case 6:
		stats_of_sequence();
								break;
   case 7:
		max_of_two_digits();
								break;
   case 8:
		even_pos_10num();
								break;
   default:
		cout << " incorrect input ";
								break;

   }
   system("PAUSE"); //getch();

  return 0;
}
//---------------------------------------------------------------------------


   /*
	  #include <iostream>

int main()
{
   /* int x = -1;

	while (x != 0)
	{
		std::cout << "Enter number (0 - EXIT): ";
		std::cin >> x;

		if (std::cin.fail()) {
			std::cout << "ERROR! YOU MUST ENTER ONLY NUMBERS!!! \n";

			std::cin.clear(); std::cin.sync();
			continue;
		}
	}

	system("PAUSE"); */


   /*
	int number;
	do{
		cin >> number;
		if(!isdigit(number))
			cout << "Not a number " << endl;
	}while(isdigit(number));
	cout << "number is " << number << endl;
	system("pause");



	return 0;
}  */