
import java.util.Scanner;

//find largest element in array
public class Largest_00 {

    // brute - sort + find 
    //TC = O(nlogn)
    //SC = O(1)
    public static int Brute(int[] arr, int n) {
        //selection sort
        for (int i = 0; i <= n - 2; i++) {
            int mini = i;

            for (int j = i; j <= n - 1; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }

        //return max
        return arr[n-1];
    }

    //optimal
    // TC = O(n); n = size of array 
    // SC = O(1)
    public static int Optimal(int[] arr, int n) {
        int max = arr[0];
        for (int i = 0; i < n; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter elements in array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Largest element : " + Brute(arr, n));
        System.out.println("Largest element : " + Optimal(arr, n));
    }
}
