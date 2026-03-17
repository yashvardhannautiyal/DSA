
import java.util.Scanner;

//find largest element in array

public class Largest_00{

    public static int func(int[] arr, int n){
        int max = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }

        return max;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter elements in array : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        System.out.print("Largest element : " + func(arr, n));
    }
}

// TC = O(n); n = size of array 
// SC = O(1)