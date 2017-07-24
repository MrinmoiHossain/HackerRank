import java.math.BigDecimal;
import java.util.Scanner;

public class Solution{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		
		int T = sc.nextInt();

		String[] s = new String[T + 2];
		for(int i = 0; i < T; i++)
			s[i] = sc.next();
		sc.close();

		for(int i = 0; i < T; i++)
			System.out.println(s[i]);
	}
}
