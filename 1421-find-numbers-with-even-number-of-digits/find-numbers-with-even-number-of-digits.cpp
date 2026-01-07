class Solution {
public:
    int findNumbers(vector<int>& nums) {
        vector<string>s;
        for(int i=0;i<nums.size();i++){
            s.push_back(to_string(nums[i]));
        }
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i].size()%2==0){
                ans++;
            }
        }
        return ans;
    }
};