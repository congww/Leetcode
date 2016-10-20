class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res(2,0);
        for(int i = 0; i < nums.size() - 1; i++)
        {
            for(int j = i + 1; j < nums.size(); j++)
            {
                if(target = nums[i] + nums[j])
                {
                    res[0] = i;
                    res[1] = j;
                }
            }
        }
        return res;
    }
};

public int[] twoSum(int[] nums, int target)
{
    Map<Integer, Integer> map = new Hashmap();
    for( int i = 0; i < nums.length; i++)
    {
        int complement = target - nums[i];
        if( map.containsKey(complement)){
            return new int[] { map.get(complement), i};
        }
        map.put(nums[i],i)
    }
}