class Solution {
public:
    // Function to check if a number is a perfect square
    bool isSquare(int x) {
        int root = sqrt(x);
        return (root * root == x);
    }

    // Backtracking function to find squareful permutations
    void solve(vector<int>& nums, vector<int>& perm, vector<bool>& used, int& count) {
        // Base case: If the permutation size is equal to the input size, we have formed a complete squareful array
        if (perm.size() == nums.size()) {
            count++;
            return;
        }

        // Iterate through all elements of the input array
        for (int i = 0; i < nums.size(); i++) {
            // Skip elements that are already used or if the same number is already used in the current permutation
            if (used[i] || (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]))
                continue;

            // Skip elements that do not form a squareful pair with the previously added element in the permutation
            if (perm.size() > 0 && !isSquare(perm.back() + nums[i]))
                continue;

            // Mark the current element as used and add it to the permutation
            used[i] = true;
            perm.push_back(nums[i]);

            // Recursively solve for the next elements in the permutation
            solve(nums, perm, used, count);

            // Backtrack by marking the current element as unused and removing it from the permutation
            used[i] = false;
            perm.pop_back();
        }
    }

    // Main function to count the number of squareful permutations
    int numSquarefulPerms(vector<int>& nums) {
        int count = 0;
        vector<int> perm;               // Current permutation
        vector<bool> used(nums.size(), false);  // Track used elements in the permutation

        sort(nums.begin(), nums.end()); // Sort the input array to handle duplicates correctly

        // Call the backtracking function to find squareful permutations
        solve(nums, perm, used, count);

        return count;
    }
};
