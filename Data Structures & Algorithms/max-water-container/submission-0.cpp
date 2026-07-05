class Solution {
public:
    int maxArea(vector<int>& heights) 
    {
       int ans=0;
       int l=0;
       int r=heights.size()-1;
       while(l<r)
       {
         int width=r-l;
         int height=min(heights[l],heights[r]);
         int water=width*height;
           
           if(heights[l]<heights[r])
           {
            l++;
           }
           else 
           {
            r--;
           }
           ans=max(ans,water);

       }
       return ans;    
    }
};
