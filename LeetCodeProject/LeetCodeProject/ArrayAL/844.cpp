//
//  844.cpp
//  LeetCodeProject
//
//  Created by niu0217 on 2023/1/1.
//

#include "844.hpp"

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2023/01/01        niu0217            V1.0         完成函数
********************************************************************** */
string CSolution844::DealData_1(string& strData)
{
    stack<char> sVar;
    
    // 利用栈去除strData中的'#'
    for(int iIndex = 0; iIndex < strData.size(); iIndex++)
    {
        if('#' != strData[iIndex])
        {
            sVar.push(strData[iIndex]);
        }
        else
        {
            // 指向pop操作前先判断sVar是不是为空
            if(!sVar.empty())
            {
                sVar.pop();
            }
        }
    }
    
    // 输出最终结果，保存在strData中
    strData = "";
    while(!sVar.empty())
    {
        strData += sVar.top();
        sVar.pop();
    }
    
    return strData;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2023/01/01        niu0217            V1.0         完成函数
********************************************************************** */
string CSolution844::DealData_2(string& strData)
{
    string strRet = "";
    for(auto& strCh:strData)
    {
        if('#' != strCh) // 不等于'#'就拼接到strRet
        {
            strRet.push_back(strCh);
        }
        else // 等于且strRet不为空，就将strRet的最后一个字符去掉
        {
            if(!strRet.empty())
            {
                strRet.pop_back();
            }
        }
    }
    return strRet;
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2023/01/01        niu0217            V1.0         完成函数
********************************************************************** */
bool CSolution844::BackSpaceCompare(string strS, string strT)
{
    //return DealData_1(strS) == DealData_1(strT);
    return DealData_2(strS) == DealData_2(strT);
}

/* *********************************************************************
编辑记录：
时间               作者                版本         操作内容
2023/01/01        niu0217            V1.0         完成函数
********************************************************************** */
void CSolution844::Test()
{
    string strS = "ab#c";
    string strT = "ad#c";
    if(BackSpaceCompare(strS, strT))
    {
        cout<<"Equall"<<endl;
    }
    else
    {
        cout<<"Not equall"<<endl;
    }
}
