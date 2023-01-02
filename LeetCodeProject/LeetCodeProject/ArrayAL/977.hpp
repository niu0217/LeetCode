//
//  977.hpp
//  LeetCodeProject
//
//  Created by niu0217 on 2023/1/2.
//

#ifndef _977_hpp
#define _977_hpp

#include <stdio.h>
#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

class CSolution977
{
public:
    /* **********************************************************
    作者：niu0217
    日期：2023/01/02
    函数功能：返回每个数字的平方组成的新数组(非递减)
    输入参数：非递减数组vector（有正有负）
    输出参数：每个数字的平方组成的新数组(非递减)
    返回值：
    其他：
    *********************************************************** */
    vector<int> SortedSquares(vector<int>& vctNums);
    
    /* **********************************************************
    作者：niu0217
    日期：2023/01/02
    函数功能：测试函数
    输入参数：
    输出参数：
    返回值：
    其他：
    *********************************************************** */
    void Test();
};

#endif /* _977_hpp */
