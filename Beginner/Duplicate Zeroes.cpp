
'''Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

Note that elements beyond the length of the original array are not written. Do the above modifications to the input array in place and do not return anything.

 

Example 1:

Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4]
'''

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int count = 0;

    // Count the number of zeros in the original array
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == 0) {
            count++;
        }
    }

    // Modify the array in place by shifting elements to the right
    int j = arr.size() + count - 1;
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            if (j < arr.size()) {
                arr[j] = 0;
            }
            j--;
        }
        if (j < arr.size()) {
            arr[j] = arr[i];
        }
        j--;
    }
        
    }
};