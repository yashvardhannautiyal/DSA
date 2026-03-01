
import java.util.Scanner;

//reverse array - usin functional recursion
public class _05_reverse_array{
    // recursive function 
    public static void func(int i, int[] arr, int n){
        //base condition
        if(i >= n/2){ return;}

        //swap values
        int temp = arr[i];
        arr[i] = arr[n-i-1];
        arr[n-i-1] = temp;

        // recursive call
        func(i+1, arr, n);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.err.print("Enter the size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.err.print("Enter values for the array : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        func(0, arr, n);

        System.err.println("Reversed array : ");
        for (int i = 0; i < n; i++) {
            System.err.print(arr[i] + " ");
        }
    }
}