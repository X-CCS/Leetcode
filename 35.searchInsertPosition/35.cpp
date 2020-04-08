#include <iostream>
#include<vector>
using namespace std;

class Solution{
public:
    int searchInsert(std::vector<int>& nums, int target){
        int index =-1; //最终返回的下标，若找到则为该元素下标，否则为需要插入的位置
        int begin = 0;//搜索区间左端点
        int end = nums.size() -1;//搜索区间右端点
        while(index == -1){ //若index==-1,则说明还未找到正确位置（没找到均有正值），持续二分搜索，
            int mid=(begin+end)/2; //计算中心位置
            if(target == nums[mid]){ //若目标值为中间值，则为找到target
                index = mid;
            }
            else if(target<nums[mid]){
                if(mid==0||target > nums[mid-1]){ //如果是在临介点，则插入的位置为中间点
                    index=mid;
                }
                end = mid-1;//如果target小于中点，更新区间右端点。
            }
            else if (target > nums[mid]){
                if (mid == nums.size()-1||target<nums[mid+1]){
                    index=mid+1;
                }
                begin = mid+1;//如果target大于终点，更新区间左端点
            }
        }
        return index;
    }
};

int main(){
    int test[]={1,3,5,6};
    std:vector<int> nums;
    Solution solve;
    for (int i=0;i<4;i++){
        nums.push_back(test[i]);
    }
    for (int i=0;i<8;i++){
        printf("i= %d index =%d\n",i,solve.searchInsert(nums,i));
    }
    return 0;
}