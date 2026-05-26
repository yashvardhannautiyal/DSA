
class Solution {

    public void sortColors(int[] nums) {
        // BRUTE 
        // int cnt0=0;
        // int cnt1=0;
        // int cnt2=0;

        // // count
        // for(int i =0; i<nums.length; i++){
        //      if(nums[i] == 0){cnt0++;}
        //      else if(nums[i] == 1){cnt1++;}
        //      else cnt2++;
        // }
        // //print
        // for(int i=0; i<cnt0; i++){
        //     nums[i] = 0;
        // }
        // for(int i=cnt0; i<cnt0+cnt1; i++){
        //     nums[i] = 1;
        // }
        // for(int i=cnt0+cnt1; i<nums.length; i++){
        //     nums[i] = 2;
        // }
        // TC = O(2N)
        // SC = O(1)
        //OPTIMAL - DUTCH NATIONAL FLAG ALGORITHM
        // TC = O(N) SC = O(1)
        int n = nums.length;
        int low = 0;
        int mid = 0;
        int high = n - 1;

        while (mid <= high) {
            if(nums[mid] == 0) {
                // swap(nums[low], nums[mid]);
                int temp = nums[low];
                nums[low] = nums[mid];
                nums[mid] = temp;

                low++;
                mid++;
            } else if (nums[mid] == 1) {
                mid++;
            } else { //mid = 2
                // swap(nums[mid], nums[high]);
                int temp = nums[mid];
                nums[mid] = nums[high];
                nums[high] = temp;
                high--;
            }
        }

        for (int x : nums) {
            System.out.print(x + " ");
        }

    }
}

public class Sort012 {

    public static void main(String[] args) {
        int[] arr = {0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 0};
        Solution obj = new Solution();
        obj.sortColors(arr);

    }
}
