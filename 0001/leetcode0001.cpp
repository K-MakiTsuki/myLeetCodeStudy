#include<iostream>
using namespace std;

#include<vector>

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        int a,b;
        for(int i=0;i<nums.size();i++)
        	for(int j=0;j<nums.size();j++)
        		if(nums[i]+nums[j]==target&&i!=j)
        		{
        			a=i;
        			b=j;
        			break;
				}
        
        ans.push_back(a);
        ans.push_back(b);
        
        return ans;
    }
};



main()
{
	vector<int> nums;
	int target;
	
	
//	Solution()
}
