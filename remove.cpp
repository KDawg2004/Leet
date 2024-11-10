class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k=0;
        int j= 0;
        while(j < nums.size()){
            if(val!=nums[j]){
                nums[k]=nums[j];
                k++;
            }
            j++;
        }
        return k;
    }
};
