
import java.util.Scanner;

public class _06_palindrome {

    public static boolean func(int i, String s) {
        //base condition
        if (i >= s.length() / 2) {
            return true;
        }

        //compare index values
        if (s.charAt(i) != s.charAt(s.length() - i - 1)) {
            return false;
        }

        // recursive call 
        return func(i + 1, s);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string : ");
        String s = sc.nextLine();

        System.err.println("String palindrome : " + func(0, s));
    }
}
