public class Solution {
    public static int lowerBound(int []arr, int n, int x) {
        // Write your code here
        if(arr[n-1]<x){
            return n;
        }
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if(arr[mid]<x){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return start;
    }
}
