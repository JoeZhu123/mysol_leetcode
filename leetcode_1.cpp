/*
 * Name : 朱幸尔(JoeZhu)
 * Date : 2016-02-13
 * Q1   : Two Sum
 */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int o_num=0;
        vector<int> indice;
        for(int i=0;i<nums.size();i++){
            o_num=target-nums[i];
            for(int j=i+1;j<nums.size();j++){
                if(o_num==nums[j]){
                    indice.push_back(i);
                    indice.push_back(j);
                }
            }
        }
        return indice;
    }
};