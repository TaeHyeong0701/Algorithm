import java.util.Scanner;
public class spinal {

	public static void main(String[] args) {

		Scanner sc=new Scanner(System.in);

		int num=sc.nextInt();

		int i, j;//for문 돌리기 위함.

		int x,y;//배열값 받기 위함.

		int sum=1;//결과값 받기 위함.

		int[][] arr=new int[num][num];

		int direct=1;

		int limit=num;

		x=0;

		y=-1;

		while(true)

		{

			for(i=0;i<limit;i++)
	
		{

				y=y+direct;

				arr[x][y]=sum;


				sum++;

			}

			limit--; //횟수 줄이고,

			if(limit<=0) break;
	
		for(i=0;i<limit;i++)
	
		{

				x=x+direct;

				arr[x][y]=sum;

				sum++;

			}

			direct=-direct;

			
		}

		for(i=0;i<num;i++)

		{

			for(j=0;j<num;j++)
	
		{

				System.out.print(arr[i][j]+" ");
	
		}
			System.out.print("\n");

		}

			
	}
}
