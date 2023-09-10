// ConsoleApplication23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>
using namespace std;
long long int fac(long a) {
	if (a <= 1)
		return 1;
	return a * fac(a - 1);
}
long long int calc(int a,int b) {
	return fac(a) / (fac(b) * fac(a - b));
}
string repeat(int count, char a) {
	string b = "";
	for (int i = 0; i < count; i++)
	{
		b += a;
	} return b;
}
int main()
{
	vector<string> Pascal;
	int a;
	cin >> a;
	Pascal.assign(a, "");
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			Pascal[i] += to_string(calc(i, j)) + "  ";
		}
	}
	for (int i = 0; i < a; i++)
	{
		cout << repeat((size(Pascal[a - 1]) - size(Pascal[i]))/2, ' ') << Pascal[i] << endl;
	}

}