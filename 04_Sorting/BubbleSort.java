
import java.util.Scanner;

public class BubbleSort {

    public static void Func(int[] arr, int n) {
        for (int i = n - 1; i > 0; i--) { // 5 - 4 - 3 - 2 - 1 - 0
            int isSwap = 0; // no swap

            // (j loop iterations for each i iteration) 
            //i = 5 - 0, 1, 2, 3, 4    
            //i = 4 - 0, 1, 2, 3
            //i = 3 - 0, 1, 2
            //i = 2 - 0, 1
            //i = 1 - 0
            for (int j = 0; j <= i - 1; j++) { // j <=i-1  : excludes last element as it has nothing to compare with next as it is the last element 
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;

                    isSwap = 1;
                }

            }
            if (isSwap == 0) {
                break; // array is sorted
            }
        }
    }

// TC = n + (n-1) + (n-2) + (n-3) ... = n * (n+1)/2 = n^2 + n/2 = smaller excluded -> n^2/2 (constant excluded) -> o(n^2)
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.print("Enter elements in array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Func(arr, n);
        System.out.print("Sorted array : ");
        for (int j = 0; j < n; j++) {
            System.out.print(arr[j] + " ");
        }

    }
}

// Output 
// Enter size of array : 6
// Enter elements in array : 13
// 46
// 24
// 52
// 20
// 9
// Sorted array : 9 13 20 24 46 52 
