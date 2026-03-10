//ordered map
// TC = o(1) - best, average
// o(n) - worst case (rarely happens because of internal collision) 
import java.util.Scanner;
import java.util.TreeMap;

public class TreeMap0{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter number of elements in array : ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.print("Enter " + n + " elments in array : ");
        for(int i=0; i<n; i++){
            arr[i] = sc.nextInt();
        }

        //pre-compute
        TreeMap<Integer, Integer> hm = new TreeMap<>();
        for(int i=0; i<n; i++){
           if(hm.containsKey(arr[i])){
            hm.put(arr[i], hm.get(arr[i]) + 1);
           }
           else{
            hm.put(arr[i], 1);
           }
        }

        System.out.print("Enter number of elements to search in hashmap : ");
        int q = sc.nextInt();

        while(q-- > 0){
            System.out.print("Enter number : ");
            int num = sc.nextInt();

            // gives num, or 0 if not exist
            System.out.println(num + " -> " + hm.getOrDefault(num, 0));
        }
    }
}