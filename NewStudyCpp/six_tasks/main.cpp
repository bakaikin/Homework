//---------------------------------------------------------------------------

#pragma hdrstop

#include <tchar.h>
#include <iostream>
//---------------------------------------------------------------------------

#pragma argsused


using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{

 /* for (int i = 0; i < 5; i++)
  {
	  if( i%2 != 0 )
	  {
		  cout << " ";
		  for (int i = 0; i < 4; i++)
		  {
			 cout <<"* ";
		  }
	  }
	  else
	  {


	  for (int i = 0; i < 5; i++)
	  {
		 cout <<"* ";
	  }

	  }
	  cout << endl;


	}  */
	  int n = 5;

	  for (int i = 0; i < n; i++)
	  {

		for (int k = 1*n; k > i; k--)
		{
			cout << " ";
		}

		for (int j = 0; j < i; j++)
		{
			cout << "* ";
		}
		cout<<endl;

	  }







	system("pause");
	return 0;
}
//---------------------------------------------------------------------------
