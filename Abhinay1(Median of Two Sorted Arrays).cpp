class Solution {
public:
    /*vector<int> merge(vector<int>& nums1, vector<int>& nums2){
        if(nums1.size()==0){
            return nums2;
        }
        if(nums2.size()==0){
            return nums1;
        }
        vector<int>mergev;
        int i=0;
        int j=0;
        int k=0;
        while(i<=nums1.size()-1 && j<=nums2.size()-1){
            if(nums1[i]<nums2[j]){
                 mergev[k++]=nums1[i++];
            }
            else{
                mergev[k++]=nums2[j++];
            }
        }
        while(i<=nums1.size()-1){
            mergev[k++]=nums1[i++];
        }
        while(j<=nums2.size()-1){
            mergev[k++]=nums2[j++];
        }
        return mergev;
    }*/
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        /*vector<int>mergev=merge(nums1,nums2);
        int n=mergev.size()-1;
        double ele;
        if(n%2==0){
            ele=mergev[n/2];
         
        }
        else{
            
            ele=(mergev[(n/2)]+mergev[(n/2)+1])/2;
        }
        return ele;*/
  
        int n1=nums1.size();
        int n2=nums2.size();
        int i=0;
        int j=0;
        int lastindex=-1;
             
        vector<int>v(n1+n2,0);
        
        while(i<n1&&j<n2)
        {
            if(nums1[i]<=nums2[j])
                v[++lastindex]=nums1[i++];
            else
                v[++lastindex]=nums2[j++];
        }
        
        while(i<n1)
            v[++lastindex]=nums1[i++];
        while(j<n2)
            v[++lastindex]=nums2[j++];
        
  
        int n=n1+n2;
        return n%2?v[n/2]:(v[n/2]+v[n/2-1])/2.0;
        
    }
};



