class Solution {
public:
  vector<string>result;
    void helper(string digits,int index,string current)
    {
         vector<string>v= {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};   // to generate string for that index
        if(index==digits.length()) //base case
        {
            result.push_back(current);
            return;
        }
        string s=v[digits[index]-'0'];
        for(int i=0;i<s.length();i++)
        {
			 // If some letter remaining to consider, consider that and generate the combination or go to base case and end recursion for that letter
            helper(digits,index+1,current+s[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits=="")  return {};
        helper(digits,0,"");
        return result; //return answer
    }
};