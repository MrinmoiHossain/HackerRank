import java.util.Scanner;

public class Solution{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);

		int T = sc.nextInt();

		for(int i = 0; i < T; i++){
			int a = sc.nextInt();
			int b = sc.nextInt();
			int n = sc.nextInt();

			int sum = a;
			for(int j = 0; j < n; j++){
				sum += (Math.pow(2, j) * b);
				System.out.print(sum + " ");
			}
			System.out.println();
		}
	}
}
