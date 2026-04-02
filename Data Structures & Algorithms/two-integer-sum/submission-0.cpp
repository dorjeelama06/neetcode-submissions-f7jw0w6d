class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for loop
        // newtarget = target - curr_index_value
        // if newtarget = curr_index+value then, continue, cant use same number twice
        // if newtarget = curr_index_value;
        // return first_loop_index and second loop index

        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int new_target = target - nums[i];
            for (int j = 0; j < nums.size(); j++) {
                if (j == i) {
                    continue;
                }
                if (new_target == nums[j]) {
                    ans.push_back(i);
                    ans.push_back(j);
                    break;
                }
            }
            if (ans.size() == 2) {
                break;
            }
        }
        return ans;
    }
};
