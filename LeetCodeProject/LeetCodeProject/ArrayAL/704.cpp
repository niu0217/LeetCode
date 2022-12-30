//
//  704.cpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/29.
//

#include "704.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
int CSolution::Search_1(vector<int>& vctNums, int iTarget)
{
    int iLeft = 0;
    int iRight = vctNums.size() - 1;//左闭右闭区间
    int iMiddle = 0;
    while(iLeft <= iRight)
    {
       iMiddle = iLeft + (iRight - iLeft)/2;
       if(vctNums[iMiddle] > iTarget)
       {
           iRight = iMiddle -1;
       }
       else if(vctNums[iMiddle] < iTarget)
       {
           iLeft = iMiddle + 1;
       }
       else
       {
           return iMiddle;
       }
    }
    return -1;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
int CSolution::Search_2(vector<int>& vctNums, int iTarget)
{
    int iLeft = 0;
    int iRight = vctNums.size(); // 左闭右开
    int iMiddle = 0;
    while(iLeft < iRight)
    {
        iMiddle = iLeft + (iRight - iLeft)/2;
        if(vctNums[iMiddle] > iTarget)
        {
            iRight = iMiddle;
        }
        else if(vctNums[iMiddle] < iTarget)
        {
            iLeft = iMiddle + 1;
        }
        else
        {
            return iMiddle;
        }
    }
    return -1;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution::Test()
{
    vector<int> vctNums = {1,4,9,12,16};
    int iTarget = 12;
    for(auto iter = vctNums.begin(); iter != vctNums.end(); iter++)
    {
        cout<<*iter<<"   ";
    }
    cout<<endl;
    cout<<"Search_1查找到"<<iTarget<<"的位置为：  "<<Search_1(vctNums, iTarget)<<endl;
    cout<<"Search_2查找到"<<iTarget<<"的位置为：  "<<Search_2(vctNums, iTarget)<<endl;
}
