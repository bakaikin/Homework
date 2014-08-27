//.. сколько полож  и четных чисел     из 10
//  если нет чет - сообщ
// нет полож - сообщ

void even_pos_10num()
{
		int input, sum ;

		unsigned int count_pos = 0;
		unsigned int pos_even_count=0;
		unsigned int even_count=0;


		for (unsigned int i = 1; i <= 10; i++)
		{
			cout << "input x" << i <<": ";
			cin >> input;
			sum+=input;

			if(input % 2 == 0 )
			{
				if(input >=0)
					pos_even_count++;

				even_count++;
			}
			count_pos++;

		}

		if(pos_even_count)
			cout<<pos_even_count;
		 else if(even_count)
		 {
			cout << "!!!!";
		 }
		 else
			cout << "!!!";




}
