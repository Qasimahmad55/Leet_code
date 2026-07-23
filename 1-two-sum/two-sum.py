class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
       num_map={}
       for i in range (len(nums)):
        curr=nums[i]
        required=target-curr

        if required in num_map:
            return [num_map[required],i]
        num_map[curr]=i    
        

         