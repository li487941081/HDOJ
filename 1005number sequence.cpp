/*
Problem Description
A number sequence is defined as follows:

f(1) = 1, f(2) = 1, f(n) = (A * f(n - 1) + B * f(n - 2)) mod 7.

Given A, B, and n, you are to calculate the value of f(n).


Input
The input consists of multiple test cases. Each test case contains 3 integers A, B and n on a single line (1 <= A, B <= 1000, 1 <= n <= 100,000,000). Three zeros signal the end of input and this test case is not to be processed.


Output
For each test case, print the value of f(n) on a single line.


Sample Input
1 1 3
1 2 10
0 0 0


Sample Output
2
5
Analysis:
In the calculation process, A and B have not changed, but f (n-1) and f (n-2) have changed.
F (n) depends on the first two elements f (n-1), f (n-2), and the final result is modular with 7.
The range of f(n-1) is [0,6], and the range of f(n-2) is also [0,6].
The combination of two numbers is (0,0), (0,1), (1,1)... (6,6).
A total of 7*7=49 different combinations
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a, b, n, array[49] = { 1,1 };
	int i;
	while (cin >> a >> b >> n && a&&b&&n)
	{

		for (i = 2; i < 49; i++)
		{
			array[i] = (a*array[i - 1] + b * array[i - 2]) % 7;
		}

			cout << array[(n - 1) % 49] << endl;
	}
	_getch();
	return 0;
}
