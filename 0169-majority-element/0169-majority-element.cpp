class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> counts;
        int majority = 0;
        int n = nums.size();

        for (int num : nums) {
            counts[num]++;
            if (counts[num] > n / 2) {
                majority = num;
                break;
            }
        }

        return majority;
    }
};