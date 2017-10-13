#include <iostream>
#include <vector>

using std::cin;
using std::cout;
using std::vector;

int SmallFibo(int n)
{
	vector<int> fibVec(n + 1);
	fibVec[0] = 0;
	fibVec[1] = 1;
	for (int i = 2; i < n + 1; i++)
	{
		fibVec[i] = fibVec[i - 2] + fibVec[i - 1];
	}
	return fibVec[n];
}

int main()
{
	int num;
	int result;
	cin >> num;
	result = SmallFibo(num);
	cout << result << "\n";
	return 0;
}