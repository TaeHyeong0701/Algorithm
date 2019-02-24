#include <iostream>
using namespace std;

int main()
{
	int arr[100][100];
	int n, m;
	int i = 0;
	int j = 0;
	cin >> n;
	cin >> m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{ 
			cin >> arr[i][j];
		}
	}
	for (i = 0; i<n; i++)
	{
		for (j = m-1; j>=0; j--)
		{
			cout << arr[i][j] << " ";
		}
		cout << "\n";
	}
	return 0;
}