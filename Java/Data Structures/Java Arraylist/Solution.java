import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution{
    public static void main(String[] args){
        Scanner scan = new Scanner(System.in);
        
        int n = scan.nextInt();
        ArrayList[] arr = new ArrayList[n];
        
        for(int i = 0; i < n; i++){
            int a = scan.nextInt();
            arr[i] = new ArrayList();
            for(int j = 0; j < a; j++){
                int b = scan.nextInt();
                arr[i].add(b);
            }
        }
        
        int q = scan.nextInt();
        for(int i = 0; i < q; i++){
            int a = scan.nextInt();
            int b = scan.nextInt();
            try{
                System.out.println(arr[a - 1].get(b - 1));
            }catch(Exception e){
                System.out.println("ERROR!");
            }
        }
    }
}
