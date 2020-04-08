/* 预备知识：二分查找（递归)
递归跟退出程序都是renrune flase
回溯则考虑递归
分之思想则考虑循环
判断target时不加=是因为target == sort_array[mid]已经判断过了
 */
#include <iostream>
#include<vector>

using namespace std;
// int sort_array[]={};
bool binary_search(std::vector<int>& sort_array, int begin, int end, int target){
    if(begin>end){   //区间不存在
            return false;
        }
    int mid =(begin + end)/2; //中到中点
    if (target == sort_array[mid]){ //当找到点时候
        return true;
    }
    else if(target < sort_array[mid]){ //找到左区间
        return binary_search(sort_array,begin,mid-1,target);
    }
    else if(target > sort_array[mid]){
        return binary_search(sort_array,mid+1,end,target);
    }

}
 
/* 预备知识：二分查找（递归)
递归跟退出程序都是renrune flase
回溯则考虑递归
分之思想则考虑循环
判断target时不加=是因为target == sort_array[mid]已经判断过了
 */

// bool binary_search(std::vector<int> &sort_array,int target){
//     int begin=0;
//     int end =sort_array.size() -1;
//     while(begin<=end){
//         int mid = (begin+end)/2;
//         if(target == sort_array[mid]){
//             return true;
//         }
//         else if(target < sort_array[mid]){
//             end=mid-1;
//         }
//         else if(target < sort_array[mid]){
//             begin=mid+1;
//         }
//     }
//     return false;
// }

int main()
{

//    int A[]={-1,2,5,20,90,100,207,800};
//    bool res;
//    res = binary_search(A,0,7,100);
//    cout << res << endl; //
   return 0;
}