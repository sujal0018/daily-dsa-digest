class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int> ans;

        int minLen = to_string(low).size();
        int maxLen = to_string(high).size();

        for (int len = minLen; len <= maxLen; len++) {
            for (int start = 1; start <= 10 - len; start++) {
                int num = 0;
                for (int d = start; d < start + len; d++) {
                    num = num * 10 + d;
                }

                if (num >= low && num <= high)
                    ans.push_back(num);
            }
        }

        return ans;
    }
};