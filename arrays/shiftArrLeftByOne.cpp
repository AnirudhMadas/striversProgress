#include<bits/stdc++.h>
using namespace std;

// Function to solve and shift array elements left by one position
void solve(int arr[], int n) {
    int temp[n];  // Create a temporary array to store the shifted elements

    // Shift the elements to the left by one position
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];  // The first element moves to the last position

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
}


//optimal

 void rotateArrayByOne(vector<int>& nums) {
        // Store the first element in a temporary variable
        int temp = nums[0];
        
        // Shift elements to the left
        for (int i = 1; i < nums.size(); ++i) {
            nums[i - 1] = nums[i];
        }

        // Place the first element at the end
        nums[nums.size() - 1] = temp;
    }


int main() {
    int n = 5;  // Size of the array
    int arr[] = {1, 2, 3, 4, 5};  // Original array

    solve(arr, n);  // Call the solve function to rotate and print the result

    return 0;
}