//
//  26.cpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/30.
//

#include "26.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
int CSolution26::RemoveDuplicates(vector<int>& vctNums)
{
    int iSlowIndex = 0;
    int iFastIndex = 0;
    for(; iFastIndex<vctNums.size(); iFastIndex++)
    {
       if(vctNums[iSlowIndex] != vctNums[iFastIndex])
       {
           vctNums[++iSlowIndex] = vctNums[iFastIndex];
       }
    }
    return iSlowIndex + 1;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/30        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution26::Test()
{
    vector<int> vctData = {1, 1, 2};
    
    for(int iIndex = 0; iIndex < vctData.size(); iIndex++)
    {
        cout<<vctData[iIndex]<<"   ";
    }
    cout<<endl;
    cout<<"原始长度：  "<<vctData.size()<<endl;
    
    cout<<"执行后的长度："<<RemoveDuplicates(vctData)<<endl;
}
