bool sum_of_6_floats()
{
	float input, sum ;

	for (unsigned int i = 1; i <= 6; i++)
	{
		cout << "input x" << i <<": ";
		cin >> input;
		sum+=input;

	}

	 /*
	cout <<"input x1"<< endl;
	cin >> input;
	sum+=input;
	cout <<"input x2"<< endl;
	cin >> input;
	sum+=input;
	cout <<"input x3"<< endl;
	cin >> input;
	sum+=input;
	cout <<"input x4"<< endl;
	cin >> input;
	sum+=input;
	cout <<"input x5"<< endl;
	cin >> input;
	sum+=input;
	cout <<"input x6"<< endl;
	cin >> input;
	sum+=input;*/

	cout <<"summ : " << sum << endl;

	return true;
};
