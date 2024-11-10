class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxReach = 0;
        int n = nums.size();
        
        for (int i = 0; i < n; i++) {
            // If the current index is beyond the farthest reachable point, return false
            if (i > maxReach) return false;
            
            // Update the farthest point we can reach
            maxReach = std::max(maxReach, i + nums[i]);
            
            // If we can reach or go beyond the last index, return true
            if (maxReach >= n - 1) return true;
        }
        
        return false;
    }
};
