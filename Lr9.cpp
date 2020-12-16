#include <iostream>
#include <Math.h>
using namespace std;
int main()
{
	int x, Y = 0,i;
	cout << "input x" << endl;
	cin >> x;
	for (i = 1; i < 6; i++)
	{
		Y = Y + pow(i, 3);
	}
	cout << "Y=" << (log(Y) + 2 * pow(sin(x), 2) / (pow(x, 2) + 5))<<endl;
	int Z = 1, m, y;
	cout << "input y" << endl;
	cin >> y;
	for (m = 1; m < 5; m++)
	{
		Z = Z * cos(m * y);
	}
	cout << "Z=" << Z + 2 * y << endl;
}