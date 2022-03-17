class Solution {
public:
   vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        if(arr1.size() <= 1) return arr1;
        for(int i = 0; i < arr2.size(); ++i) custom.mapping[arr2[i]] = i;
        int left = 0, right = arr1.size() - 1;
        
        while(left <= right) {
            if(custom.mapping.count(arr1[left]) == 0) 
                swap(arr1[left], arr1[right--]);
            else ++left;
        }
    
        sort(arr1.begin(), arr1.begin()+right+1, custom);
        sort(arr1.begin()+right+1, arr1.end());
        return arr1;
    }
private:
    struct Comp{
        unordered_map<int, int> mapping;
        bool operator() (const int& a, const int& b) {
            return mapping[a] < mapping[b];
        }
    } custom;
};