// Collin McGhee
// CIS 1202
// May 5 2021
#include<iostream>
#include<string>
using namespace std;

template <class T>
T half(T x)
{
	cout << "Template\n";
	return (x / 2);
}

int half(int x)
{
	double remainder;//--- hold the remainder to check if the int vvalue needs to be rounded up or down
	cout << "Int\n";
	remainder = x % 2;
	if (remainder > 0.5)
	{
		return (x / 2) + 1;
	}
	else
	{
		return (x / 2);
	}
}

int main()
{
	int numI = 7;
	double numD = 42.9;
	float numF = 12.0f;

	cout << half(numI) << endl;
	cout << half(numD) << endl;
	cout << half(numF) << endl;

	return 0;
}