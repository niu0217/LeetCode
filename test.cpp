#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int slowIndex = 0;
        for(int fastIndex =0; fastIndex < nums.size(); fastIndex++) {
            if(val != nums[fastIndex]) {
                nums[slowIndex++] = nums[fastIndex];
            }
        }
        return slowIndex;
    }
};

int main()
{
    Solution slu;
    vector<int> a = {
        1,4,4,8
    };
    cout<<slu.removeElement(a,4)<<endl;
}





