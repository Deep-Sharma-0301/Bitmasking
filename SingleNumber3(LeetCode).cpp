class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        //APPROACH-1
        /* unordered_map<int,int> m;
         int n=nums.size();
         for(int i=0;i<n;i++)
         {
             m[nums[i]]++;
         }
         vector<int> v;
         for(int i=0;i<n;i++)
         {
             if(m[nums[i]]==1)
             {
                 v.push_back(nums[i]);
             }
         }
         return v;
         */
        
        //APPROACH-2
        int res=0;
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            res=res^nums[i];
        }
        int pos=0;
        int temp=res;
        while((temp&1)!=1)
        {
            pos++;
            temp=(temp>>1);
        }
        int x=0;
        int y=0;
        int mask=1<<pos;
        for(int i=0;i<n;i++)
        {
            if((nums[i]&mask)>0)
            {
                x=x^nums[i];
            }
        }
        y=x^res;
        v.push_back(min(x,y));
        v.push_back(max(x,y));
        return v;
        
    }
};