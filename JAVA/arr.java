import java.util.Scanner;

public class arr {


	public static void main(String[] args) {
		// TODO 자동 생성된 메소드 스텁

		Scanner sc=new Scanner(System.in);

		int a=sc.nextInt();

		int b=sc.nextInt();

		int i,j;

		int sum=0; //결과값 입력을 하기 위한 값.

		int[][] arr=new int[a][b];

		for(i=0;i<a;i++)

		{
			
			for(j=0;j<b;j++)
			
			{
				
				sum++;

				arr[i][j]=sum;

			
		}

		}

		for(i=0;i<a;i++)

		{
			
			for(j=0;j<b;j++)
			
		{

				System.out.print(arr[i][j]+" ");

		}

			System.out.print("\n");

		}

}
}