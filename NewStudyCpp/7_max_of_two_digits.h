#include<string>
bool max_of_two_digits()
{
	char two[2];
	while( strcmp(two,"q")!=0 )
	{
	   cout << "input two digits"<<endl;
	   cin  >> two;

	   if(two[0]>two[1])
		 cout << two[0]<<endl;
	   else
		 cout << two[1]<<endl;
	}

	return true;
}
