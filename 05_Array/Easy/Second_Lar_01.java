import java.util.Scanner;
public class Second_Lar_01{

//Brute =  sort + result
    public static int BruteF(int[] arr, int n){
        //selection sort
        for(int i=0; i<=n-2; i++){
            int mini=i;

            for(int j=i; j<=n-1; j++){
                if(arr[j] < arr[mini]){
                    mini=j;
                }
            }
            //swap
            int temp = arr[mini];
            arr[mini] = arr[i];
            arr[i] = temp;
        }
        //result
        return arr[n-2];
    }



    // Better approach
    //1st loop - largest = Big O(n)
    //2nd loop - second largest = Big O(n)
    //TC = Big O(2n)
    public static int BetterF(int[] arr, int n){
            int lar = arr[0];
        for(int i=0; i<n; i++){
            if(arr[i] > lar){
                lar = arr[i];
            }
        }

        int sl=-1;
        for(int j=0; j<n; j++){
            if(arr[j] > sl && arr[j] != lar){ //if arr[i] is larger than sl but not equal to largest
                sl = arr[j];
            }
        }
        return sl;
    }

    // Optimal 
    //TC = O(n)
    public static int OptimalF(int[] arr, int n){
        int l = arr[0];
        int sl = -1;

        for(int i=1; i<n; i++){
            if(arr[i] > l){ // greater than l
                sl = l;
                l = arr[i];                
            }
            else if(arr[i] < l && arr[i] > sl){ // smaller than l and greater than sl
                sl = arr[i];
            }
            else if(arr[i] == l){ // equal to L
                continue;
            }
        }
    return sl;
    }


    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter size of array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter elements in array : ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.println("Second Largest element : " + BruteF(arr, n));
        System.out.println("Second Largest element : " + BetterF(arr, n));
        System.out.println("Second Largest element : " + OptimalF(arr, n));
    }
}