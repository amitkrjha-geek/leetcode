class Solution {
public:
    int maxArea(vector<int>& height) {
        int m=0, i=0,j=height.size()-1;
        while(i<j)
        {
            if(height[i]<height[j])
            {
                m=max(m,height[i]*(j-i));
                i++;
            }
            else
            {
                 m=max(m,height[j]*(j-i));
                j--;
            }
        }
        return m;
    }
};