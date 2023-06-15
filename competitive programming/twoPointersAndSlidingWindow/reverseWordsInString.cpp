// // Online C++ compiler to run C++ program online

// 151. Reverse Words in a String
// Medium
// 6.2K
// 4.6K
// Companies
// Given an input string s, reverse the order of the words.

// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

 

// Example 1:

// Input: s = "the sky is blue"
// Output: "blue is sky the"
// Example 2:

// Input: s = "  hello world  "
// Output: "world hello"
// Explanation: Your reversed string should not contain leading or trailing spaces.
// Example 3:

// Input: s = "a good   example"
// Output: "example good a"
// Explanation: You need to reduce multiple spaces between two words to a single space in the reversed string.
 

// Constraints:

// 1 <= s.length <= 104
// s contains English letters (upper-case and lower-case), digits, and spaces ' '.
// There is at least one word in s.
#include <iostream>
#include<cstring>
using namespace std ;


string reverseString(string &s){
	// Write your code here.	
	string ans = "";
    string temp = "";
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if (ch == ' ')
        {
            if (temp != "")
            {
                ans = temp + " " + ans;
            }
            temp = "";
        }
        else
        {
            temp += ch;
        }
    }
    if (temp != "")
    {
        ans = temp + " " + ans;
    }
    // if (ans.length() > 0 && ans[ans.length() - 1] == ' ')
    // {
    //     ans = ans.substr(0, ans.length() - 1);
    // }
    return ans;
	
}

int main() {
   string s ="my name is gaurav and yours" ; 
  
   
   s = reverseString(s);
   cout<<endl<<s ; 

    return 0;
}