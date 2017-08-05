import java.util.Scanner;
import java.util.Arrays;

public class Solution{
	static boolean isAnagram(String a, String b){
        if(a.length() != b.length())
            return false;
        else{
            char[] A = a.toLowerCase().toCharArray();
            char[] B = b.toLowerCase().toCharArray();
            
            Arrays.sort(A);
            Arrays.sort(B);
            return Arrays.equals(A, B);
        }
    }

	public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        String a = scan.next();
        String b = scan.next();
        scan.close();
        boolean ret = isAnagram(a, b);
        System.out.println( (ret) ? "Anagrams" : "Not Anagrams" );
    }
}
