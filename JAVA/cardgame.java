import java.util.Scanner;
public class cardgame 
{

	public static void main(String[] args) {

		// TODO 자동 생성된 메소드 스텁

		int i=0;

		Scanner sc=new Scanner(System.in);

		int[] arr1=new int[10];

		int[] arr2=new int[10];

		int score1=0;

		int score2=0;

		for(i=0;i<10;i++)//arr1

		{

			arr1[i]=sc.nextInt();

		}

		for(i=0;i<10;i++)//arr2

		{

			arr2[i]=sc.nextInt();

		}

		for(i=0;i<10;i++)

		{

			if(arr1[i]>arr2[i])

			{

				score1+=1;

			}

			else if(arr1[i]<arr2[i])

			{

				score2+=1;

			}

		}

		if(score1>score2)

		{

			System.out.print("A");

		}

		else if(score1<score2)

		{

			System.out.print("B");

		}

		else

		{

			System.out.print("D");
		
		}

	}

}
