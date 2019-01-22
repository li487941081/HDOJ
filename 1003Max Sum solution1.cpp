/*
Problem Description
Given a sequence a[1],a[2],a[3]......a[n], your job is to calculate the max sum of a sub-sequence. For example, given (6,-1,5,4,-7), the max sum in this sequence is 6 + (-1) + 5 + 4 = 14.
 

Input
The first line of the input contains an integer T(1<=T<=20) which means the number of test cases. Then T lines follow, each line starts with a number N(1<=N<=100000), then N integers followed(all the integers are between -1000 and 1000).
 

Output
For each test case, you should output two lines. The first line is "Case #:", # means the number of the test case. The second line contains three integers, the Max Sum in the sequence, the start position of the sub-sequence, the end position of the sub-sequence. If there are more than one result, output the first one. Output a blank line between two cases.
 

Sample Input
2
5 6 -1 5 4 -7
7 0 6 -1 1 -6 7 -5
 

Sample Output
Case 1:
14 1 4

Case 2:
7 1 6
*/
#include<iostream>
#include<conio.h>
#include<algorithm>
using namespace std;
int main()
{
	int num;//the number of test cases
	int a[100011];//store the integer in the sequence
	int b[100011];//max sum
	int count=0;//what number of case 
	int sum = 0;
	int max0 = -1001;//must less than all int
	int n;//integer in the sequence
	int begin;
	int end;

	cin >> num;

	while (num--)
	{
		cin >> n;
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
			b[i] = max(b[i-1] + a[i], a[i]);
			if (max0 < b[i])
			{
				max0 = b[i];//record the max
				end = i;//record the last
			}
		}
		for (int i = end; i >= 1; i--)
		{
			sum = sum + a[i];
			if (sum == max0)
			{
				begin = i;
			}
		}
		cout << "Case " << ++count <<":"<< endl;
		cout << max0 <<" "<< begin << " " << end << endl;
		if (num>0)
		{
			cout << endl;
		}
		max0 = -1001;
		sum = 0;
	}
	_getch();
	return 0;
}