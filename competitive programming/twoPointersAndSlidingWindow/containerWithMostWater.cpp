// 11. Container With Most Water
// Medium
// 24.6K
// 1.3K
// Companies
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

 

// Example 1:


// Input: height = [1,8,6,2,5,4,8,3,7]
// Output: 49
// Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
// Example 2:

// Input: height = [1,1]
// Output: 1
 

// Constraints:

// n == height.length
// 2 <= n <= 105
// 0 <= height[i] <= 104



#include <iostream>
#include <vector>
using namespace std;


int maxArea(vector<int>& height) {
    // Write your code here.

    int start = 0 ; 
    int end = height.size()-1;
    int area = 0 ; 
    int ans = 0 ; 

    while(start < end){
        if(height[start] <= height[end]){
            area = height[start]*(end-start);
            start++;
        }
        else{
            area = height[end]*(end-start);
            end--;
        }

        ans = max(ans , area);
    }

    return ans ; 
}


int main() {
    int t;
    cin >> t;
    while (t--)

    {
        int n;
        cin >> n;

        vector<int> v(n);

        for (auto &i : v) {
            cin >> i;
        }

        cout << maxArea(v) << endl;
    }
}