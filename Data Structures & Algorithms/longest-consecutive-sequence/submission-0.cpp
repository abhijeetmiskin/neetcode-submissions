class Solution {
public:
    int longestConsecutive(vector<int>& nums)
     {
        
      unordered_set<int>s(nums.begin(),nums.end());
      int longest=0;
      for(int x:s)
      {
        if(s.find(x-1)==s.end())
        {
            int cur=x;
            int length=1;
            while(s.find(cur+1)!=s.end())
            {
                cur++;
                length++;
            }
              longest=max(longest,length);
        }
       
      }
      return longest;
      
      
     }
};
