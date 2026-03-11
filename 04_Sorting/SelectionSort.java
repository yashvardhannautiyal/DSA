// iterate till n-2 

// TC = n + (n-1) + (n-2) + (n-3) = n * (n+1)/2 = n^2/2 = O(n^2) | best, average, worst
import java.util.Scanner;

public class SelectionSort {

    public static void SortFunc(int[] arr, int n) {
        for (int i = 0; i <= n - 2; i++) { // run till n-2
            int mini = i; // let least element mini = i

            // run till n-1 for checking the smallest element
            for (int j = i; j <= n - 1; j++) {
                if (arr[j] < arr[mini]) {
                    mini = j;
                }
            }

            //swap -> arr[mini] and arr[i]
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " elements in array : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        SortFunc(arr, n);
        System.out.print("Sorted array : ");
        for (int j = 0; j < n; j++) {
        System.out.print(arr[j] + " ");    
        }
        sc.close();
    }
}


// Output 
// Enter size of array : 4
// Enter 4 elements in array : 23
// 89
// 9
// 56
// Sorted array : 9 23 56 89 
