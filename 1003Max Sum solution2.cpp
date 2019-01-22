#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int num;//the number of test cases
	int sum = 0;
	int temp = 0;
	int max0 = -1001;
	int N;//the first number each line
	int i;//input number 
	int begin, end;
	int start = 0;//the position of begin
	int count = 1;

	cin >> num;

	while (num--)
	{
		cin >> N;

		while (N--)
		{
			cin >> i;
			sum = sum + i;

			if (sum > max0)
			{
				max0 = sum;
				begin = start;
				end = start + temp;
			}

			temp++;

			if (sum < 0)
			{
				sum = 0;
				start = start + temp;
				temp = 0;
			}
		}

		if (count != 1)
		{
			cout << endl;
		}

		cout << "Case " << count++ << ":" << endl;
		cout << max0 << " " << begin + 1 << " " << end + 1 << endl;

		sum = 0;
		temp = 0;
		max0 = -1001;
		start = 0;
	}
		_getch();
		return 0;
}









