class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size(),m=nums[0].size();
        for(auto &i: nums){
            sort(i.begin(),i.end());
        }
        int ans=0;
        for(int i=0; i<m; i++){
            int mx=0;
            for(int j=0; j<n; j++){
                mx=max(mx,nums[j][i]);
            }
            ans+=mx;
        }
        return ans;
    }
};
