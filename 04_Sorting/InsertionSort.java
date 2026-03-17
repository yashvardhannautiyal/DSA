// TC 
// Average + Worst case ->  n*(n+1)/2 = o(n^2)
// Best case o(n); if the array is already sorted
import java.util.Scanner;

public class InsertionSort{
    public static void func(int[] arr, int n){
        for(int i=0; i<= n-1; i++){
            int j=i;

            while(j>0 && arr[j-1] > arr[j]){
                int temp = arr[j-1];
                arr[j-1] = arr[j];
                arr[j] = temp;

                j--;
            }
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the sizze of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.print("Enter elements in array : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        func(arr, n);
        System.out.print("Sorted array: ");
        for(int j=0; j<n; j++){
            System.out.print(arr[j] + " ");
        }

    }
}

// Output 
// Enter the sizze of array : 4
// Enter elements in array : 23
// 45
// 12
// 3
// Sorted array: 3 12 23 45 