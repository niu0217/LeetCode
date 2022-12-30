//
//  26.hpp
//  LeetCodeProject
//
//  Created by niu0217 on 2022/12/30.
//

#ifndef _26_hpp
#define _26_hpp

#include <stdio.h>
#include<iostream>
#include<vector>
using namespace std;

class CSolution26
{
public:
    /* **********************************************************
    作者：niu0217
    日期：2022/12/30
    函数功能：删除排序数组中的重复项
    输入参数：原始vector
    输出参数：删除重复元素后的vector长度
    返回值：
    其他：
    *********************************************************** */
    int RemoveDuplicates(vector<int>& vctNums);
    
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
#endif /* _26_hpp */
