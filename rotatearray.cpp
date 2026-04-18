class Solution {
public:
void krotate(vector<int>& nums, int i,int j){
    while(i<j){
       swap(nums[i],nums[j]);
       i++;
       j--;
    }
}
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1) return;
        k=k%nums.size();
        krotate(nums,0,nums.size()-1);
        krotate(nums,0,k-1);
        krotate(nums,k,nums.size()-1);
    }
};
