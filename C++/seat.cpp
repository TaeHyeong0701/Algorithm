#include <iostream>
using namespace std;
int seat[1000][1000]; //seat 세로 번호 //seat 가로 번호  // 대략 10만개 이상부터 전역변수할당
int main(void)
{
	int c, r;
	int k,l;
	int result;
	int x, y;
	cin >> c; // 가로길이
	cin >> r; // 세로길이
	cin >> result;
	int i = r, j = 0;
	int direct = -1;
	int num = 1;
	int limitx = c-1; //가로의 경계값
	int limity = r;// 세로의 경계값.

	while (1)
	{

		//cout << i << " " << j << endl;
		for(k=0;k<limity;k++) //limity 만큼만 세로로 이동.
		{
			i = i + direct;
			//cout << i << " " << j << endl; // 확인
			seat[i][j] = num;
			num++;
		}
		limity--;
		direct = -direct;// 위아래 좌우 방향 변경
		if (limitx == 0)
			break;
		for (k = 0; k < limitx; k++) // 가로출력
		{
			j = j + direct;
			//cout << i << " " << j << endl; // 확인
			seat[i][j] = num;
			num++;
		}
		limitx--;
		//direct = -direct;// 위아래 좌우 방향 변경
		if (limity == 0)
			break;
	}
	/*
	for(k=0;k<r;k++)
	{
		for (l=0;l<c;l++)
		{
			cout << seat[k][l] <<" ";
		}
		cout << "\n";
	}
	*/
	for (k = 0; k<r; k++)
	{
		for (l = 0; l<c; l++)
		{
			if (seat[k][l] == result)
			{ 
			x = l+1;
			y = r - (k);
			}

		}
	}
	if (result <= num)
	{
		cout << x << " " << y;
	}
	else
		cout << 0;
	return 0;
}