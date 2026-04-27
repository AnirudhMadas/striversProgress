
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestSubarray(vector<int> &nums, int k)
    {
        int n = nums.size(); 
        int maxLength = 0;

        // starting index
        for (int startIndex = 0; startIndex < n; startIndex++) { 
            // ending index
            for (int endIndex = startIndex; endIndex < n; endIndex++) { 
                /* add all the elements of 
                   subarray = nums[startIndex...endIndex]  */
                int currentSum = 0;
                for (int i = startIndex; i <= endIndex; i++) {
                    currentSum += nums[i];
                }

                if (currentSum == k)
                    maxLength = max(maxLength, endIndex - startIndex + 1);
            }
        }
        return maxLength;
    }

    // Function to find the length of longest subarray having sum k
    int longestSubarray(vector<int> &nums, int k){
        int n = nums.size();
        
        // To store the maximum length of the subarray
        int maxLen = 0;
        
        // Pointers to mark the start and end of window
        int left = 0, right = 0;
        
        // To store the sum of elements in the window
        int sum = nums[0];
        
        // Traverse all the elements
        while(right < n) {
            
            // If the sum exceeds K, shrink the window
            while(left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }
            
            // store the maximum length
            if(sum == k) {
                maxLen = max(maxLen, right - left + 1);
            }
            
            right++;
            if(right < n) sum += nums[right];
        }
        
        return maxLen;
    }

    
};

int main()
{
    vector<int> a = { -1, 1, 1 };
    int k = 1;

    // Create an instance of the Solution class
    Solution solution;
    // Function call to get the result
    int len = solution.longestSubarray(a, k);
    
    cout << "The length of the longest subarray is: " << len << "\n";
    return 0;
}
