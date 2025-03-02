class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2)  {
        unordered_map<int,int> store;
        vector<vector<int>> ans;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
           store[nums1[i][0]] = nums1[i][1];
        }
        for(int i=0;i<n2;i++)
        {
            int id=nums2[i][0];
            int value=nums2[i][1];
            if(store.count(id)==1)
            {
                store[id]=store[id]+value;
            }
            else
            store[id]=value;
        }
        for(auto it=store.begin();it!=store.end();it++)
        {
            ans.push_back({it->first, it->second});
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};