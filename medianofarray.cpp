class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     int i=0; int j=0;
     
     vector<int>v;
     while(i<nums1.size()&&j<nums2.size()){
        if(nums1[i]<nums2[j]){
            v.push_back(nums1[i]);
            i++;
        }
        else{ v.push_back(nums2[j]);
            j++;}
     }
     while(i<nums1.size()){
         v.push_back(nums1[i]);
            i++;
     }
     while(j<nums2.size()){
         v.push_back(nums2[j]);
            j++;
     }
    if(v.size()%2!=0){
        return v[v.size()/2];
    }
    else{
        int temp=v.size()/2;
      
        return (v[temp]+v[temp-1])/2.0;
    }
    }
};
