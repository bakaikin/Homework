// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	bool min_max_3_num();
	unsigned int task_num;

	cout << " task number ";
	cin >> task_num;

	switch (task_num)
	{
	case 1: //min_max_3_num
	{
				bool min_max_3_num();
	}
		break;

	case 2:   //negative_summ_5num
	{
				  bool negative_summ_5num();
				  double x1, x2, x3, x4, x5, n_sum;

				  cout << " x1 ";
				  cin >> x1;
				  cout << " x2 ";
				  cin >> x2;
				  cout << " x3 ";
				  cin >> x3;
				  cout << " x4 ";
				  cin >> x4;
				  cout << " x5 ";
				  cin >> x5;

				  n_sum = 0;

				  if (x1<0)
					  n_sum += x1;
				  if (x2<0)
					  n_sum += x2;
				  if (x3<0)
					  n_sum += x3;
				  if (x4<0)
					  n_sum += x4;
				  if (x5<0)
					  n_sum += x5;
				  cout << n_sum;
	}
		break;
	case 3:   // sum of 6 floats
	{

	}
		break;

	case 4:  // calculate
	{

	}
		break;
	case 5:  // odd or even
	{

	}
		break;
	case 6:   // stats of sequence while sum<100
	{

	}
		break;
	case 7:	// max of 2 digits
	{

	}
		break;


	default:
	{
			   cout << " incorrect input ";
	}
		;
	}


	//getch();

	
	
	
	
	
	
	return 0;
}

