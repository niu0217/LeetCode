//
//  27.hpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/30.
//

#ifndef _27_hpp
#define _27_hpp

#include <stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class CSolution27
{
public:
    /* **********************************************************
    作者：niu0217
    日期：2022/12/30
    函数功能：移除重复的元素（暴力法）
    输入参数：原始vector，移除值
    输出参数：移除元素后的vector长度
    返回值：
    其他：
    *********************************************************** */
    int RemoveElement_1(vector<int>& vctNums, int iVal);
    
    /* **********************************************************
    作者：niu0217
    日期：2022/12/30
    函数功能：移除重复的元素（快慢指针）
    输入参数：原始vector，移除值
    输出参数：移除元素后的vector长度
    返回值：
    其他：
    *********************************************************** */
    int RemoveElement_2(vector<int>& vctNums, int iVal);
    
    /* **********************************************************
    作者：niu0217
    日期：2022/12/30
    函数功能：测试函数
    输入参数：
    输出参数：
    返回值：
    其他：
    *********************************************************** */
    void Test();
};


#endif /* _27_hpp */