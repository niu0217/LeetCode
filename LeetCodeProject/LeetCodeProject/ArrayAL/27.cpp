//
//  27.cpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/30.
//

#include "27.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
int CSolution27::RemoveElement_1(vector<int>& vctNums, int iVal)
{
    int iSize = vctNums.size();
    for(int i = 0; i < iSize; i++)
    {
       if(iVal == vctNums[i])
       { // 发现需要移除的元素，就将数组集体向前移动一位
           for(int j = i + 1; j < iSize; j++)
           {
               vctNums[j-1] = vctNums[j];
           }
           i--; //因为下标i以后的数值都向前移动了一位，所以i也向前移动一位
           iSize--;
       }
    }
    return iSize;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
int CSolution27::RemoveElement_2(vector<int>& vctNums, int iVal)
{
    int iSlow = 0;
    for(int iFast =0; iFast < vctNums.size(); iFast++)
    {
        if(iVal != vctNums[iFast])
        {
            vctNums[iSlow++] = vctNums[iFast];
        }
    }
    return iSlow;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution27::Test()
{
    vector<int> vctData = {0,1,2,2,3,0,4,2};
    int iVal = 2;
    
    for(int iIndex = 0; iIndex < vctData.size(); iIndex++)
    {
        cout<<vctData[iIndex]<<"   ";
    }
    cout<<endl;
    
    cout<<"RemoveElement_1的结果是： "<<RemoveElement_1(vctData, iVal)<<endl;
    cout<<"RemoveElement_2的结果是： "<<RemoveElement_2(vctData, iVal)<<endl;
}
