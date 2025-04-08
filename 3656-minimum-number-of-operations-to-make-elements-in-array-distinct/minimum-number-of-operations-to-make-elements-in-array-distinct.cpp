class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n=nums.size();
        stack<int> st;
        if(n==1)return 0;
        if(n==2&&nums[0]!=nums[1])return 0;
        if(n==2&&nums[0]==nums[1])return 1;
        if(n==3){
        if(nums[0]!=nums[1]&&nums[0]!=nums[2]&&nums[1]!=nums[2])return 0;
        else return 1;}
       
        for(int i=n-1;i>=0;i--)
        {
            st.push(nums[i]);
        }
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        int repeat_char=0;
        for(auto it:mpp)
        {
            if(it.second>1)
            {
                repeat_char++;
            }
        }
        int count=0;
        while(repeat_char&&!st.empty())
        {
            int pops = 0;
            while (pops < 3 && !st.empty()) {
                int top = st.top();
                st.pop();

                if (mpp[top] > 1) {
                    mpp[top]--;
                    if (mpp[top] == 1) {
                        repeat_char--;
                    }
                }
                pops++;
            }
            count++;
        }
        return count;
    }
};