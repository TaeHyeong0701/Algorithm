#include <iostream>
using namespace std;
int main(void)
{
	int n, x, y;
	int r; // n=맵의 크기, x는 위치(행), y는 위치(열), r= 사거리.
	int i, j = 0; // 배열 좌표값 (행과열 좌표값-1)
	int temp_i, temp_j; // 배열 좌표 임시 저장값.
	int range=0; //  사거리값 출력을 위함.
	cin >> n;
	cin >> y >> x >> r;
	int arr[100][100]; // 맵 배열.
	temp_i = y - 1;
	temp_j = x - 1;
	int gap_i;
	int gap_j;
	int gap; // 가로 세로 차이의 합
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i > y-1)
				gap_i = i - (y-1);
			else if (i < (y-1))
				gap_i = (y-1) - i;
			else if (i == (y-1))
			{
				gap_i = 0;
			}
			if (j > (x-1))
				gap_j = j - (x-1);
			else if(j<(x-1))
			{
				gap_j = (x-1) - j;
			}
			else if ((x-1) == j)
			{
				gap_j = 0;
			}
			gap = gap_i + gap_j;
			if(gap <= r)
			{
				arr[i][j] = gap;
			}
			else
			{
				arr[i][j] = 0;
			}
			if (gap == 0) // 0이라면 변수값 지정.
			{
				arr[i][j] = 210000000;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (arr[i][j] == 210000000)
			{
				cout << 'x' << " ";
			}
			else
			{ 
			cout << arr[i][j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}