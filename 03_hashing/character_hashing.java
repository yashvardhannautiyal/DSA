//frequency of occurance of a character in a string (for lowercases)

//hash function
// index on hash array = ch - 'a'
import java.util.Scanner;

public class character_hashing {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //input string from user
        System.out.print("Enter string : ");
        String s = sc.nextLine();

        //declare hash array with 0 initially
        // for uppercase - int hashArr[] = new int[256];
        int hashArr[] = new int[26]; // java automatically initializes with 0

        //pre-compute hash function : ch - 'a'
        for (int i = 0; i < s.length(); i++) {
            hashArr[s.charAt(i) - 'a'] = hashArr[s.charAt(i) - 'a'] + 1;
        }

        //
        System.err.print("Enter number of characters (to search) : ");
        int n = sc.nextInt();

// if we enter UpperCAse character it gives error : ArrayIndexOutOfBoundsException: Index -25 out of bounds for length 26
        while (n-- > 0) {
            System.out.print("Enter character (to search) : ");
            char ch = sc.next().charAt(0);

            System.out.println("Frequency of " + ch + " = " + hashArr[ch - 'a']);

        }
        sc.close();
    }
}
