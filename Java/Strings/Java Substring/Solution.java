import java.util.Scanner;

public class Solution{
	public static void main(String[] args){
		Scanner input = new Scanner(System.in);

		String s = input.next();
		int a = input.nextInt();
		int b = input.nextInt();

		System.out.println(s.substring(a, b));
	}
}
