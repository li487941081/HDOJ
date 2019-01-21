/*Problem Description
I have a very simple problem for you. Given two integers A and B, your job is to calculate the Sum of A + B.


Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line consists of two positive integers, A and B. Notice that the integers are very large, that means you should not process them by using 32-bit integer. You may assume the length of each integer will not exceed 1000.


Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line is the an equation "A + B = Sum", Sum means the result of A + B. Note there are some spaces int the equation. Output a blank line between two test cases.


Sample Input
2
1 2
112233445566778899 998877665544332211


Sample Output
Case 1:
1 + 2 = 3

Case 2:
112233445566778899 + 998877665544332211 = 1111111111111111110*/
#include<conio.h>
#include<iostream>
#include<string>
using namespace std;

int main()
{ 
	string n1, n2;
	int num;//the number of test cases
	int sum[2000];
	int m, n;//string->int
	int count=0;
	int len1, len2;
	int temp=0;

	cin >> num;

	for (int l = 0; l <= num - 1; l++)
	{
		cin >> n1 >> n2;
		len1 = n1.length()-1;
		len2 = n2.length()-1;

		while (len1 >= 0 && len2 >= 0)//the two integers'length can be different
		{
			m = n1[len1] - 48;
			n = n2[len2] - 48;
			sum[count++] = (m + n + temp) % 10;
			temp = (m + n + temp) / 10;
			len1--;
			len2--;
		}

		if (len1 > len2)
		{

			while (len1 >= 0)
			{
				m = n1[len1] - 48;
				sum[count++] = (m + temp) % 10;
				temp = (temp + m) / 10;
				len1--;
			}

		}

		if (len1 < len2)
		{

			while (len2 >= 0)
			{
				m = n2[len2] - 48;
				sum[count++] = (m + temp) % 10;
				temp = (temp + m) / 10;
				len2--;
			}

		}

		sum[count] = temp;
		cout << "Case " << l + 1 << ":" << endl;
		cout << n1 << " + " << n2 << " = ";

		if (sum[count] != 0)
		{
			cout << sum[count];
		}

		for (--count; count >= 0; count--)
		{
			cout << sum[count];	
		}

		cout << endl;

		if (num - 1 > l)
		{
			cout << endl;
		}

		count = 0;//reset count=0 or put"int count=0" inside "for"
	}
	_getch();
	return 0;
	}


