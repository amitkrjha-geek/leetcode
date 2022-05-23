class Solution {
public:
    string s;
//     void helper(vector<int>& vec,vector<int>& temp,int& k,int idx)
//     {
//         if(idx == vec.size())
//         {
//             k--;
//             s = "";
//             if(k == 0)
//             {
//                 for(int i = 0;i<vec.size();i++)
//                 {
//                     s += to_string(temp[i]);
//                 } 
//             }
//             return;
//         }
//         if(k == 0)
//         {
//             return;
//         }
        
//         for(int i=0;i<vec.size();i++)
//         {
//             if(vec[i] > 0)
//             {
//                 temp[idx] = vec[i];
//                 vec[i] = -1*vec[i];
//                 helper(vec,temp,k,idx+1);
//                 vec[i] = -1*vec[i];
//                 temp[idx] = 0;
//             }
//         }
        
//     }
    
    string getPermutation(int n, int k) {
    int pTable[10] = {1};
    for(int i = 1; i <= 9; i++){
        pTable[i] = i * pTable[i - 1];
    }
    string result;
    vector<char> numSet;
    numSet.push_back('1');
    numSet.push_back('2');
    numSet.push_back('3');
    numSet.push_back('4');
    numSet.push_back('5');
    numSet.push_back('6');
    numSet.push_back('7');
    numSet.push_back('8');
    numSet.push_back('9');
    while(n > 0){
        int temp = (k - 1) / pTable[n - 1];
        result += numSet[temp];
        numSet.erase(numSet.begin() + temp);
        k = k - temp * pTable[n - 1];
        n--;
    }
    return result;
}
};