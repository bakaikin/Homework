bool odd_or_even()
{
	int x =-1;
	while ( x != 0 )
	{
		 cout << "input an integer" << endl;
		 cin  >> x;
		 if(x % 2 == 0 )
			cout << x << " is even" << endl;
		 else
			cout << x << " is odd"  << endl;
	 }


	return true;
}
