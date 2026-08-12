class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        map<int, int> freq;

        // frequency count
        for (int i = 0; i < nums.size(); i++) {
            freq[nums[i]]++;
        }

        int count = 0;

        // har value ko maximum 2 baar nums mein daalna
        for (auto it : freq) {

            if (it.second > 2) {

                nums[count] = it.first;
                count++;

                nums[count] = it.first;
                count++;

            } else {

                for (int i = 0; i < it.second; i++) {
                    nums[count] = it.first;
                    count++;
                }
            }
        }
        nums.resize(count);
        return count;
    }
};