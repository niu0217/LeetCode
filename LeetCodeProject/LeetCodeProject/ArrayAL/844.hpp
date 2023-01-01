//
//  844.hpp
//  LeetCodeProject
//
//  Created by niu0217 on 2023/1/1.
//

#ifndef _844_hpp
#define _844_hpp

#include <stdio.h>
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class CSolution844
{
public:
    /* **********************************************************
    作者：niu0217
    日期：2023/01/01
    函数功能：去除字符串中的‘#’(stack)
    输入参数：含有‘#’的字符串
    输出参数：不含‘#’的字符串
    返回值：
    其他：
    *********************************************************** */
    string DealData_1(string& strData);
    
    /* **********************************************************
    作者：niu0217
    日期：2023/01/01
    函数功能：去除字符串中的‘#’(string)
    输入参数：含有‘#’的字符串
    输出参数：不含‘#’的字符串
    返回值：
    其他：
    *********************************************************** */
    string DealData_2(string& strData);
    
    /* **********************************************************
    作者：niu0217
    日期：2023/01/01
    函数功能：比较两个字符是否相等
    输入参数：两个比较的字符
    输出参数：1或者0
    返回值：
    其他：
    *********************************************************** */
    bool BackSpaceCompare(string strS, string strT);
    
    
    /* **********************************************************
    作者：niu0217
    日期：2023/01/01
    函数功能：测试函数
    输入参数：
    输出参数：
    返回值：
    其他：
    *********************************************************** */
    void Test();
};

#endif /* _844_hpp */
