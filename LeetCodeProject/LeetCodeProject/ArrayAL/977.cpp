//
//  977.cpp
//  LeetCodeProject
//
//  Created by niu0217 on 2023/1/2.
//

#include "977.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2023/01/02        niu0217            V1.0         完成函数
********************************************************************** */
vector<int> CSolution977::SortedSquares(vector<int>& vctNums)
{
    // 使用快慢指针
    int iSlow = 0;
    int iFast = vctNums.size() - 1;
    int iCount = vctNums.size() - 1; // 倒着取结果
    vector<int> vctRes(vctNums.size(), 0); // 保存最后的输出结果
    
    while(iFast >= iSlow)
    {
        if(pow(vctNums[iFast], 2) >= pow(vctNums[iSlow], 2))
        {
            vctRes[iCount--] = pow(vctNums[iFast], 2);
            iFast--;
        }
        else
        {
            vctRes[iCount--] = pow(vctNums[iSlow], 2);
            iSlow++;
        }
    }
    
    return vctRes;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2023/01/02        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution977::Test()
{
    vector<int> vctNums = {-4, -1, 0, 3, 10};
    cout<<"排序前：  "<<endl;
    for(auto& num:vctNums)
    {
        cout<<num<<"    ";
    }
    cout<<endl;
    
    vctNums = SortedSquares(vctNums);
    
    cout<<"排序后：  "<<endl;
    for(auto& num:vctNums)
    {
        cout<<num<<"    ";
    }
    cout<<endl;
}
