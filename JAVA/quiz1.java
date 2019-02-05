import java.util.Scanner;
// 스캐너를 사용하기 위해 import시켜줌.
public class quiz1 {
// 1000번 문제
// 입력 예시 1 2
// 출력 예시 3
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
Scanner scanTH = new Scanner(System.in);
// Scanner 변수 선언
int num3;
int num1 = scanTH.nextInt();
// Integer 형식으로 데이터 입력 받음.
int num2 = scanTH.nextInt();
//Integer 형식으로 데이터 입력 받음.
num3 = num1 + num2;
System.out.println(num3);
	}

}
