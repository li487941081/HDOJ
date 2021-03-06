/*Problem Description
Contest time again!How excited it is to see balloons floating around.But to tell you a secret, the judges' favorite time is guessing the most popular problem. When the contest is over, they will count the balloons of each color and find the result.

This year, they decide to leave this lovely job to you.


Input
Input contains multiple test cases.Each test case starts with a number N(0 < N <= 1000) --the total number of balloons distributed.The next N lines contain one color each.The color of a balloon is a string of up to 15 lower - case letters.

A test case with N = 0 terminates the input and this test case is not to be processed.


Output
For each case, print the color of balloon for the most popular problem on a single line.It is guaranteed that there is a unique solution for each test case.


Sample Input
5
green
red
blue
red
red
3
pink
orange
pink
0


Sample Output
red
pink
*/
#include<iostream>
#include<conio.h>
#include<string.h>
#include<memory.h>
using namespace std;
int main()
{
	int n;
	char color[1000][10];
	int count[1000];
	while (cin >> n)
	{

		if (n == 0)
		{
			break;
		}

		for (int i = 0; i < n; i++)
		{
			cin >> color[i];
		}

		memset(count, 0, sizeof(count));

		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j < n; j++)
			{
				if (strcmp(color[i], color[j]) == 0)
				{
					count[i]++;
				}
			}
		}

		int max = count[0];
		int record = 0;
		for (int i = 0; i < n; i++)
		{
			if (count[i] > max)
			{
				max = count[i];
				record = i;
			}
		}

		cout << color[record] << endl;

	}
	_getch();
	return 0;
}

