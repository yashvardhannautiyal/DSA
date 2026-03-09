//hashing : to find the count (frequency) of occurrence of numbers using hashing.

import java.util.Scanner;

public class _00_hashing {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        //Take input size of array from user
        System.out.print("Enter size of array : ");
        int sizeArr = sc.nextInt();

        //Declare and input values into array
        int[] arr = new int[sizeArr];
        System.err.print("Enter values in array : ");
        for (int i = 0; i < sizeArr; i++) {
            arr[i] = sc.nextInt();
        }

        //declare and set values of hashArr to 0 for all indexes initially
        int[] hashArr = new int[100]; // java automatically initializes array with 0 to all index

        // pre-compute : hash-function - here = index + 1
        for (int i = 0; i < sizeArr; i++) {// store at index = index+1 
            hashArr[arr[i]] = hashArr[arr[i]] + 1;
        }

        //total count of number you want to search
        System.out.print("Enter count of number you want to search : ");
        int nums = sc.nextInt();

        //input number and search
        while (nums-- > 0) {
            System.out.print("Enter number you want to search : ");
            int n = sc.nextInt();

            //fetch the index
            System.out.println("Count of " + n + " = " + hashArr[n]);

        }

    sc.close();
    }
}
