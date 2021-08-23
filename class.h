#pragma once

#ifndef __TEST__
#define __TEST__

#include <vector>
using namespace std;
class CClass
{
    template <typename T, typename comp>
    int binarysearch(const T &val2search, const vector<T> &arr, comp &comparible);

public:
    CClass();

    //Big5
    virtual ~CClass();
    CClass(const CClass &) = delete;
    CClass(const CClass &&) = delete;

    CClass &operator=(const CClass &) = delete;
    CClass &operator=(const CClass &&) = delete;

    int Execute(int nSearch,const vector<int>& arr);
};

class CCompare
{
public:
    CCompare() = default;
    virtual ~CCompare() = default;

    bool IsFirstParamGrt(const int & p1,const int& p2);
    bool IsEqual(const int& p1,const int& p2);
};
#endif