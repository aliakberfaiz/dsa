//https://leetcode.com/problems/sort-colors/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low  = 0;
        int mid = low +1;
        int high = nums.size() -1;
        while(mid<= high){
            if(nums[mid] ==1)
                mid++;
            else if(nums[mid]== 0){
                swap(nums[mid], nums[low]);
                low++;
            }
            else{
                swap(nums[high], nums[mid]);
                high--;
            }   
        }
    }
};