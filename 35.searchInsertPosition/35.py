"""
遍历
"""
from typing import List

class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        i = 0
        while i < len(nums):
            if nums[i] < target:
                i +=1
            else:
                break
        return i

"""
标准二分
"""
class Solution:
    def searchInsert(self, nums: List[int], target: int) -> int:
        high = len(nums) - 1 
        low = 0
        ### 特殊情况
        if target < nums[0]:
            return 0
        if target > nums[high]:
            return high+1
        ###
        ans = 0
        while low <= high:
            mid = (high+low)//2
            if nums[mid] == target:
                ans = mid
                return ans # 可以化简，return mid
            elif nums[mid] < target:
                ans = mid + 1
                low = mid + 1
            else:
                high = mid - 1
        return ans # 可以化简，return low
        #  return mid+1 则会出错
        #   因为 ans 只在elif 中更新
        #   如果改为mid + 1 , 则mid的值可能会在else中被更新，从而mid+1 != ans


if __name__=="__main__":

    test=[1,3,5,6]
    solve=Solution()
    print(solve.searchInsert(test,7))


