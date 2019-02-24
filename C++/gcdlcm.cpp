#include <iostream>
using namespace std;
int main(void)
{
	int a, b;
	int gcd;
	int lcm;

	cin >> a;
	cin >> b;
	if (a == b)
	{
		gcd = a;
		lcm = a;
	}
	else if (a > b)
	{
		lcm = a;
		gcd = b;
		while (1)
		{
			if(a%gcd == 0 && b%gcd == 0)
			break;
			gcd--;
		}
		while (1)
		{

			if (lcm%a == 0 && lcm%b == 0)
				break;
			lcm++;
		}
	}
	else if (a < b)
	{
		lcm = b;
		gcd = a;
		while (1)
		{

			if (a%gcd == 0 && b%gcd == 0)
				break;
			gcd--;
		}
		while (1)
		{

			if (lcm%a == 0 && lcm%b == 0)
				break;
			lcm++;
		}
	}
	cout << gcd << "\n" << lcm;
}