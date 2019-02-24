#include <iostream>
using namespace std;
int main(void)
{
	int num;
	int arr[5];
	int cnt=0;
	int i, j;
	cin >> num;
	for (i = 0; i < 5; i++)
	{
		cin >> arr[i];
	}
	for (i = 0; i < 5; i++)
	{
		if (num == arr[i])
			cnt++;
	}
	cout << cnt;

	return 0;
}