#include <iostream>

using std::cin;
using std::cout;

int GCD_Slow(int a, int b)
{
	int best = 0;
	for (int i = 1; i < a + b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			best = i;
		}
	}
	return best;
}

int EuclidGCD(int a, int b)
{
	int ap = 0;
	if (b == 0)
	{
		return a;
	}
	else
	{
		ap = a % b;
		return EuclidGCD(b, ap);
	}
}

int main()
{
	int a, b;
	int result;
	cin >> a;
	cin >> b;
	result = EuclidGCD(a, b);
	cout << result << "\n";
	return 0;
}
