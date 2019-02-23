import java.util.Scanner;
public class dice {
	public static void main(String[] args) {
	Scanner sc=new Scanner(System.in);
	int member=sc.nextInt();
	int[][] arr= new int[member][3];
	int[] score=new int[member];
	int[] number=new int[3];
	int[][] cnt=new int[member][];
	int max;
	int m;
	int c;
	int d=0;
	int i,j,k=0;
	for(i=0;i<member;i++)
	{
		for(j=0;j<3;j++)
		{
			arr[i][j]=sc.nextInt();
		}
	}
	for(i=0;i<member;i++)
	{
		for(j=0;j<3;j++)
		{
			for(k=0;k<3;k++)
			{
			if(arr[i][j]==arr[i][k])
				cnt[i][j]+=1;
			}
			
		}
		max=cnt[i][0];
		m=0;
		for(j=0;j<3;j++)
		{
			if(max<cnt[i][j])
				max=cnt[i][j];
				m=j;
		}
		if(max==3)
		{
			number[i]=10000*arr[i][m]*1000;
		}
		else if(max==2)
		{
			number[i]=1000*arr[i][m]*100;	
		}
		else
		{
			c=arr[i][0];
			for(j=0;j<3;j++)
			{
				if(c<arr[i][j])
					c=arr[i][j];
			}
			number[i]=100*c*10;
		}
	}
	for(i=0;i<member;i++)
	{
		d=number[0];
		if(d<number[i])
		{
			d=number[i];
		}
	}
	System.out.println(d);
	
	}
}
