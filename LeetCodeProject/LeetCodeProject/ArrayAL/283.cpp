//
//  283.cpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/31.
//

#include "283.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/31        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution283::MoveZeroes(vector<int>& vctNums)
{
    int iSlow = 0;
    int iFast = 0;
    // 第一次遍历去除vector中的0，iSlow指向去除0后的vector的最后一个位置
    for(; iFast < vctNums.size(); iFast++)
    {
      if(0 != vctNums[iFast])
      {
          vctNums[iSlow++] = vctNums[iFast];
      }
    }
    
    // 将iSlow后面的元素全部赋值为0
    for(; iSlow < vctNums.size(); iSlow++)
    {
       vctNums[iSlow] = 0;
    }
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2022/12/31        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution283::Test()
{
    vector<int> vctData = {0, 1, 0, 3, 12};
    
    cout<<"原始数据： "<<endl;
    for(int iIndex = 0; iIndex < vctData.size(); iIndex++)
    {
        cout<<vctData[iIndex]<<"   ";
    }
    cout<<endl;
    
    cout<<"去除0之后的数据： "<<endl;
    MoveZeroes(vctData);
    for(int iIndex = 0; iIndex < vctData.size(); iIndex++)
    {
        cout<<vctData[iIndex]<<"   ";
    }
    cout<<endl;
}
