import java.util.*;

class Solution {
    public int[] twoSum(int[] nums, int target) {
    HashMap<Integer, Integer> mpp = new HashMap<>();

        int n = nums.length;

        for(int i=0; i<n; i++){
        int curr = nums[i];
        int moreNeeded = target - curr;
        if(mpp.containsKey(moreNeeded)){
        return new int[]{mpp.get(moreNeeded), i};
        }
        mpp.put(curr, i);
    }
    return new int[]{-1, -1};
    }                                                                                                                                
}

public class TwoSum01{
    public static void main(String[] args){
        int[] nums = {2,6,5,8,11};
        int target = 14;

        Solution obj = new Solution();
        int[] ans = obj.twoSum(nums, target);

        for(int x : ans){
            System.out.print(x + " ");
        }
    }
}