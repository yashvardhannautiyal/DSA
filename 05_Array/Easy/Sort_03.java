
import java.util.Scanner;

public class Sort_03{
    public static boolean isSorted(int[] arr, int n){
        for(int i=1; i<n; i++){
            if(arr[i] >= arr[i-1]){//does nothing
             }
             else{
                return false;
             }
        }
        return true;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.err.print("Enter size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter elements in array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Is array sorted : " + isSorted(arr, n));
    }
}

// TC = O(n)