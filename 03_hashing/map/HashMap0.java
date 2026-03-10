import java.util.HashMap;
import java.util.Scanner;

public class HashMap0{
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
        HashMap<Integer, Integer> hm = new HashMap<>();
        for(int i=0; i<n; i++){
           if(hm.containsKey(arr[i])){
            hm.put(arr[i], hm.get(arr[i]) + 1);
           }
           else{
            hm.put(arr[i], 1);
           }
        }

        System.out.print("Enter number of elements to search in hashmap");
        int q = sc.nextInt();

        while(q-- > 0){
            System.out.print("Enter number : ");
            int num = sc.nextInt();

            // gives num, or 0 if not exist
            System.out.println(num + " -> " + hm.getOrDefault(num, 0));
        }
    }
}


// output 
// Enter number of elements in array : 5
// Enter 5 elments in array : 1
// 2
// 3
// 4
// 5
// Enter number of elements to search in hashmap3
// Enter number : 5
// 5 -> 1
// Enter number : 6
// 6 -> 0
// Enter number : 9
// 9 -> 0