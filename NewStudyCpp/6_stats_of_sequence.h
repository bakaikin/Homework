#include <vector>
bool stats_of_sequence()
{
	float input,sum=0.0,min,avg,max;
	unsigned int count=0;
	//std::vector<float> line;
	while(sum < 100.0)
	{
		cout << "input a number" <<endl;
		cin  >> input;

		if(sum==0)
		{
			min = input;//line[0];
			max = input;//line[0];
		}
		else
		{
			if(input < min)
				min = input;

			if(input > max)
				max = input;
		}
		sum += input;
		count++;
	}

	avg = sum/count;

	cout << "summ = "<< sum <<endl;
	cout << "min = " << min <<endl;
	cout << "max = " << max <<endl;
	cout << "avg = " << avg <<endl;

	return true;
}
