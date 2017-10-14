#include <iostream>

using std::cout;
using std::cin;

long long LeastCommonMultiple(int a, int b)
{
	for (long l = 1; l <= (long long) a * b; l++)
	{
		if (l % a == 0 && l % b == 0)
		{
			return l;
		}
	}
	return (long long) (a * b);
}

long long mcd(int a, int b)
{
	if (a % b == 0)
	{
		return b;
	}
	else
	{
		return mcd(b, a % b);
	}
}

long long LeastCommonMultipleFast(int a, int b)
{
	long long res = 0;
	if (a > b)
	{
		res = mcd(a,b);
	}
	else
	{
		res = mcd(b, a);
	}

	return (((long long)a * (long long)b)/ res);
}


int main()
{
	while (true)
	{
		int a, b;
		long long result = 0;
		cin >> a;
		cin >> b;
		//result = LeastCommonMultiple(a, b);
		//cout << LeastCommonMultiple(a, b) << "\n";
		cout << LeastCommonMultipleFast(a, b) << "\n";
	}	
}