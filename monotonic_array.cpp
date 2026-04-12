class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=true,dec=true;
        int i=1;
        while(i<nums.size()){
            if(nums[i-1]<nums[i])
                dec=false;

            else if(nums[i-1]>nums[i])
                inc=false;
                
                
            
            
            i++;

        }
     return inc || dec;
    }
};