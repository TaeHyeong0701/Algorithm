#include <iostream>
using namespace std;
int main(void)
{
	int arr[5][5]; // 철수가 적은 빙고판.
	int ment[5][5]; // 사회자 멘트 값.
	int i, j; // 철수의 빙고판 for문
	int a, b = 0; // 사회자 멘트판 for문
	int distinct=1; // 각 줄, 대각선, 마다의 빙고 판별.
	int c, d; // 판별을 하기 위한 for문
	int x=0; //전체 포문 탈출. score3이상 됬을 시 탈출.
	int score = 0;
	int result;
	for(i=0;i<5;i++)
	{
		for (j = 0; j < 5; j++)
		{
			cin >> arr[i][j]; //철수가 적은 빙고판
		}
	}
	for (i = 0; i < 5; i++)
	{
		for(j=0;j<5;j++)
		{
			cin >> ment[i][j]; // 사회자 멘트 값.
		}
	}
	a = 0;
	while(1)
	{
		b = 0;
		if (x == 1)
		{
			break;
		}
		if (a == 5) // 모든행 다 돌면 탈출.
		{
			break;
		}
		while (1)
		{
			if (x == 1)
			{
				break;
			}
			if (b == 5) // 가로줄 다돌면 탈출.
			{
				break;
			}
			for (i = 0; i < 5; i++)
			{
				for (j = 0; j < 5; j++)
				{
					if (ment[a][b] == arr[i][j])
					{
						arr[i][j] = 0; // 철수의 빙고판을 0으로 변환한다.

					}
				}
			}
			distinct = 1;
			score = 0;
			for (c = 0; c < 5; c++) // / 판별
			{
				if (arr[4 - c][c] != 0)
					distinct = 0;
			}
			if (distinct == 1)
			{
				score++;
			}
			distinct = 1;
			for (c = 0; c < 5; c++) // \ 판별
			{
				if (arr[c][c] != 0)
					distinct = 0;
			}
			if (distinct == 1)
			{ 
					score++;
			}
			distinct = 1;
			for (c = 0; c < 5; c++)// 가로 판별.
			{
				distinct = 1;
				for (d = 0; d < 5; d++)
				{
					if (arr[c][d] != 0)
						distinct = 0;
				}
				if (distinct == 1)
				{
					score++;
				}
			}
			for (d = 0; d < 5; d++)// 세로 판별.
			{
				distinct = 1;
				for (c = 0; c<5; c++)
				{
					if (arr[c][d] != 0)
					   distinct = 0;
				}
				if (distinct == 1)
				{
					score++;
				}
			}
			if (score >= 3)
			{ 
				cout << a * 5 + b + 1 << endl;
				x = 1;
			}
			//cout << a << " " << b << " " << score << endl;
							//result = (a + 1) * 5 + (b + 1);
				

			
			/*
			if (score == 3)
			{
				result = (a + 1) * 5 + (b + 1);
			}
			*/


			 //출력
			b++;
		}
		a++;
	}
	return 0;
}