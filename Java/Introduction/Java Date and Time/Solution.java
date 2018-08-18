import java.util.Scanner;
import java.util.*;

public class Solution{
    public static String getDay(String d, String m, String y){
        Calendar c = Calendar.getInstance();
        c.set(Integer.valueOf(y), Integer.valueOf(m) - 1, Integer.valueOf(d));
        
        String day = "";
        switch(c.get(Calendar.DAY_OF_WEEK)){
            case 1:
                day = "Sunday";
                break;
            case 2:
                day = "Monday";
                break;
            case 3:
                day = "Tuesday";
                break;
            case 4:
                day = "Wednesday";
                break;
            case 5:
                day = "Thursday";
                break;
            case 6:
                day = "Friday";
                break;
            case 7:
                day = "Saturday";
                break;
        }
        return day.toUpperCase();
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        
        System.out.println(getDay(day, month, year));
    }
}
