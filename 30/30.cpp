#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int i = 2;
	while (i <= 2*n)
	{
		s = s + (float)1/i;
		i = i + 2;
	}
	cout << "Tong s la:" << s;
	return 1;

}