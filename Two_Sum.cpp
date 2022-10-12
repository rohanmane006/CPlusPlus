/*
    Given int array & target, return indices of 2 nums that add to target
    Ex. nums = [2,7,11,15] & target = 9 -> [0,1], 2 + 7 = 9

    At each num, calculate complement, if exists in hash map then return

    Time: O(n)
    Space: O(n)
*/
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        vector<int> result;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (m.find(complement) != m.end()) {
                result.push_back(m[complement]);
                result.push_back(i);
                break;
            } else {
                m.insert({nums[i], i});
            }
        }
        
        return result;
    }
};

int main(){
    int n , target;
    cin>>n;
    vector<int> nums(n);
    for(int i = 0 ; i < n ; i++){
        cin>>nums[i];
    }
    cin>>target;
    Solution obj;
    vector<int> ans = obj.twoSum(nums,target);
    for(auto i : ans){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
    return 0;
}
