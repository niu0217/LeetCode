//
//  283.hpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/31.
//

#ifndef _283_hpp
#define _283_hpp

#include <stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class CSolution283
{
public:
    /* **********************************************************
    作者：niu0217
    日期：2022/12/31
    函数功能：去除vector中的0元素
    输入参数：含有0元素的vector
    输出参数：不含0元素的vector
    返回值：
    其他：
    *********************************************************** */
    void MoveZeroes(vector<int>& vctNums);
    
    /* **********************************************************
    作者：niu0217
    日期：2022/12/31
    函数功能：测试函数
    输入参数：
    输出参数：
    返回值：
    其他：
    *********************************************************** */
    void Test();
};

#endif /* _283_hpp */
