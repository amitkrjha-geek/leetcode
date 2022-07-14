// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
    //Function to find the maximum number of activities that can
    //be performed by a single person.
    int activitySelection(vector<int> start, vector<int> end, int n)
    {
    vector<pair<int,int>>activity;
        for(int i=0;i<n;i++)
        {
            activity.push_back({start[i],end[i]});
        }
        sort(activity.begin(),activity.end());
        int ans=1;
        int endpoint=activity[0].second;
        for(int i=1;i<n;i++)
        {
            if(activity[i].first>endpoint)//both are disjoint
            {
                ans++;
                endpoint=activity[i].second;
            }
            else//both are non disjoint
            {
                if(activity[i].second<endpoint)//non disjoint but since end point of second 
                //pair is smaller than second part of the first pair,in order to maximise the
                //number of activity we take the lower second value
                {
                    endpoint=activity[i].second;
                }
            }
        }
        return ans;
    }
 
};

// { Driver Code Starts.
int main()
{
    int t;
    
    //testcases
    cin >> t;
    while(t--)
    {
        //size of array
        int n;
        cin >> n;
        vector<int> start(n), end(n);
        
        //adding elements to arrays start and end
        for(int i=0;i<n;i++)
            cin>>start[i];
        for(int i=0;i<n;i++)
            cin>>end[i];
        Solution ob;
        //function call
        cout << ob.activitySelection(start, end, n) << endl;
    }
    return 0;
}
  // } Driver Code Ends