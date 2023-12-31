/* Max Sum of K Consecutive Elements
Send Feedback
You are given an array of ‘N’ integers. You have to find the maximum sum over all subarrays of size ‘K’.
For example:
If N=3, K=2 and array elements are [ -100, 20, 40 ]. Following are the subarrays of size 2:
[ -100, 20 ] having sum = -100 + 20 = -80.
[ 20, 40 ] having sum = 20 + 40 = 60.

The maximum sum between -80 and 60 is 60. Hence, the output is 60.
Input Format :
The first line of the input contains an integer, 'T’, denoting the number of test cases.

The first line of each test case will contain two space-separated integers ‘N’ and ‘K’, denoting the size of the array and the subarray size.

The second line of each test case contains ‘N’ space-separated integers denoting elements of the array.
Output Format :
For each test case, print the maximum sum over all subarrays of size ‘K’.

Print a separate line for each test case.
Note :
You do not need to print anything, it has already been taken care of. Just implement the given function.
Constraints:
1 <= T <= 10
1 <= N <= 10000
1 <= K <= N
-10000 <= nums[i] <= 10000

Time limit: 1 sec
Sample Input 1 :
2
3 2 
-100 20 40
2 1
12 -34
Sample output 1 :
60
12
Explanation For Sample Output 1:
For the first test case,
N=3, K=2 and array elements are [ -100, 20,40 ]. Following are the subarrays of size 2:
[-100, 20] having sum = -100 + 20 = -80.
[20, 40] having sum = 20 + 40 = 60.

The maximum sum between -80 and 60 is 60. Hence, the output is 60.

For the second test case,
N=2, K=1 and array elements are [ 12, -34 ]. Following are the subarrays of size 1:
[12] having sum =12.
[-34] having sum = -34.

The maximum sum between 12 and -34  is 12. Hence, the output is 12.
Sample Input 2 :
2
5 2
7 10 -6 3 5
6 6
4 8 5 -1 -9 10
Sample output 2 :
17
17
*/

#include <iostream>
#include <fstream>
#include <vector> 
#include <climits>

using namespace std;



int maxOfK(int n, int k, vector<int> &arr)
{
    // Write your code here.

    int sum = 0 ; 
    int maxSum = INT_MIN ; 
    for(int i = 0 ; i < k ; i++){
        sum+=arr[i];
        maxSum=max(maxSum , sum);
    }

    for(int i = k ; i < n ; i++){
        sum-=arr[i-k];
        sum+=arr[i];

        maxSum=max(sum , maxSum);
    }

    return maxSum;
}

int main(){
    int n , k ;
    cin >> n >> k ; 

    vector<int> arr(n) ; 
    for(int i = 0 ; i < n ; i++){
        cin >>arr[i];
    }

    cout<<maxOfK(n , k , arr);

}