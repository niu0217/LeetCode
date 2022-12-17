#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;//左闭右闭区间
        int middle = 0;
        while(left <= right){
            middle = left + (right - left)/2;
            if(nums[middle] > target) {
                right = middle -1;
            }
            else if(nums[middle] < target) {
                left = middle + 1;
            }
            else {
                return middle;
            }
        }
        return -1;
    }
};

int main()
{
    Solution slu;
    vector<int> a ={
        1,4,7,9,10,24
    };
    int result = slu.search(a,9);
    cout<<result<<endl;
}





