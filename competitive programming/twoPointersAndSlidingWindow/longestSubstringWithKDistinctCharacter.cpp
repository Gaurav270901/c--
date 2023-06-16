// Longest Sub-string with at most K Distinct Characters
// Send Feedback
// You are given string S of length N, and an integer K. Your task is to find the length of the longest substring that contains at most K distinct characters.
// Input Format:
// The first line contains an Integer 'T' which denotes the number of test cases/queries to be run. 
// Then the test cases follow. 

// The first line of input for each test case/query contains an integer K.

// The second line of input for each test case/query contains a string S.
// Output Format:
// For each test case, print the length of the longest substring that contains at most K distinct characters.

// Output for every test case will be printed in a separate line.
// Note:
// You do not need to print anything, it has already been taken care of. Just implement the function.
// Constraints:
// 1 <= T <= 10
// 1 <= K <= 26
// 1 <= N <= 10^4

// Time Limit: 1sec
// Sample Input 1:
// 2
// 2
// abcba
// 1
// abccc
// Sample Output 1:
// 3
// 3
// Explanation of the Sample Input1:
// Test Case 1:
// K = 2 in the first test case so we can choose substring ‘bcb’ having 2 distinct characters which are less than equal to K=2. 
// We c annot get any other substring of length 4 or greater having distinct characters less than equal to 2.
// Test Case 2:
// K = 1 in the second test case so we can choose substring ‘ccc’ having only 1 distinct character which is less than equal to K=1. 
// We cannot get any other substring of length 4 or greater having distinct characters less than equal to 1.






#include <iostream>

using namespace std;

int getLengthofLongestSubstring(int k, string s)
{
   // Write your code here.
   int strSize = s.size();
   int total = 0 ; 
   int maxLen = 0 ;  
   int start = 0 ; 
   int end = 0 ; 
   int *arr = new int[26]();
   while(end < strSize){
      char ch = s[end];
      if(arr[ch-'a']==0){
         total++;
         arr[ch-'a']++;
      }else arr[ch-'a']++;

      if(total>k){
         while(start < strSize && total>k){
            arr[s[start]-'a']--;
            if(arr[s[start]-'a']==0){
               total--;
            }
            start++;
         }
      }
      else
         maxLen = max(maxLen , end-start+1);
      end++;
   }

   return maxLen;
}


int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int k;
        string s;
        cin >> k >> s;
        int longestSubstring = getLengthofLongestSubstring(k, s);
        cout << longestSubstring << endl;
    }

    return 0;
}
