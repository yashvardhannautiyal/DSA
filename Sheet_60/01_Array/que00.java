// find smallest and largest element in array 
public class que00{
    public static void main(String[] args) {
        int[] arr = {5, 2, 9, 1, 7};

        int min = arr[0];
        int max = arr[0];

        for(int i = 0; i<arr.length; i++){
            if(arr[i] > max){
                max = arr[i];
            }

            if(arr[i] < min){
                min = arr[i];
            }
        }

        System.out.println("Largest : " + max);
        System.out.println("Smallest : " + min);
    }
}


// TC = O(n) 
// SC = O(1)    = no extra array or data structure; only fixed variables