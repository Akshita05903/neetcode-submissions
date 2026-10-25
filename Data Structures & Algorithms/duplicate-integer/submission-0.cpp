class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> mp;

        for(int x : nums){
            if(mp.count(x) > 0) return true;
            mp.insert(x);
        }
        return false;
    }
};