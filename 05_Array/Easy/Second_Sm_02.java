//second smallest element in array
// TC = O(n)
import java.util.Scanner;

public class Second_Sm_02{
    public static int OptimalF(int[] arr, int n){
        int s = arr[0];
        int sm = Integer.MAX_VALUE; // defines [10^9]

        for(int i=1; i<n; i++){
            if(arr[i] < s){
                sm = s;
                s = arr[i];
            }
            else if(arr[i] < sm && arr[i]!=s){
                sm = arr[i];
            }
        }
        return sm;

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

        System.out.println("Second Smallest element : " + OptimalF(arr, n));
    }

}