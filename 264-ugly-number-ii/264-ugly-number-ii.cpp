class Solution {
public:
    typedef long long int lll;
    int nthUglyNumber(int n) {
        priority_queue<lll,vector<lll>,greater<lll>> minheap;
        
        minheap.push(1);
       if(n==1)    return 1;
        while(n!=1){
            lll temp=minheap.top();
            minheap.pop();
            if(temp%2==0){
                minheap.push(temp*2);
            }
            else if(temp%3==0){
                minheap.push(temp*2);
               minheap.push(temp*3);
            }
            else{
                minheap.push(temp*2);
               minheap.push(temp*3);
                minheap.push(temp*5);
            }            
            n--;
        }
        return minheap.top();
    }
};