class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i=0; int j=n;
        vector<int> v;

        while(i<n && j<nums.size()){
            v.push_back(nums[i]);
            i++;
            v.push_back(nums[j]);
            j++;

        }
        return v;
    }
};
