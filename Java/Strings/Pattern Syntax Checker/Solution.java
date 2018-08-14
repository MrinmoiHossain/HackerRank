import java.util.Scanner;
import java.util.regex.*;

public class Solution{
	public static void main(String[] args){
		Scanner in = new Scanner(System.in);
		int n = Integer.parseInt(in.nextLine());
        
		for(int i = 0; i < n; i++){
            String s = in.nextLine();
            try{
                Pattern.compile(s);
                System.out.println("Valid");
            }catch(PatternSyntaxException e){
                System.out.println("Invalid");
            }
        }
        in.close();
	}
}




