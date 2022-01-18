class Solution {
public:
   
    long long points(vector<vector<int>>& questions,vector<long long> &vec,int i,int &n){
        // base case
		if(i>=n) return 0;
		// if we already computed for ith index, return vec[i]
        if(vec[i]!=0) return vec[i];
        else{
		// case1 : If we want to take ith question
            long long take=questions[i][0]+points(questions,vec,i+questions[i][1]+1,n);
			// case2: If we don't want to take ith question
            long long ntake=points(questions,vec,i+1,n);
            vec[i]= max(take,ntake);
            return vec[i];
        }
    }

    long long mostPoints(vector<vector<int>>& questions) {
	// for memoization
        vector<long long> vec(100001,0);
        int n=questions.size();
        return points(questions,vec,0,n); 
    }
};