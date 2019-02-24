#include <iostream>
using namespace std;
// 거꾸로 추론해야됨. -> 가장 마지막 색종이 부터 구하기.
int main()
{
	int arr[101][101];
	int n = 0;
	int colorpaper_x[101]; // 색종이마다의 왼쪽 아래 열배열 값.
	int colorpaper_y[101]; // 색종이마다의 왼쪽 아래 행배열 값.
	int colorpaper
	int i, j;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> colorpaper_x[i];
		cin >> colorpaper_y[j];
		colorpaper_x[i] -= 1;//배열겂과 열값 맞춰주기.
		colorpaper_y[i] -= 1;// 배열값과 행값 맞춰주기.
	}
	for
	return 0;
}