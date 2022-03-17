#include<iostream>
#include<bits/stdc++.h>
using namespace std;
bool swap_or_not(pair<int,int> a, pair<int,int> b){
   if(a.second!=b.second){
       if(a.second>b.second) return false;
       else return true;
   }
   else{
       if(a.first>b.first) return true;
       else return false;
   }
}
int main()
{
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    int arr[n];
    vector<pair<int,int>> v;
    unordered_map<int,int> m;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        m[arr[i]]++;
    }
    for(auto z:m){
        if(z.second!=0){
            v.push_back({z.first,z.second});
        }
    }
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(swap_or_not(v[i],v[j])){
                swap(v[i],v[j]);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        int z=v[i].second;
        while(z--){
            cout<<v[i].first<<" ";
        }
    }cout<<endl;
}
return 0;
}

