#include "class.h"
#include <malloc.h>
#include <cstring>

using namespace std;

CClass::CClass()
{

}

CClass::~CClass()
{

}

int CClass::Execute(int nSearch, const vector<int>& arr)
{
    CCompare objLocal;
    return binarysearch(nSearch, arr, objLocal);
}

template <typename T, typename comp>
int CClass::binarysearch(const T& val2search, const vector<T>& arr, comp& comparible)
{
    if(comparible.IsFirstParamGrt(val2search,arr[arr.size()-1])== true)
        return -1;
        
    int nRet = -1;
    if(arr.empty())
        return -1;

    int nMid = arr.size()/2;

    if(comparible.IsEqual(arr[nMid],val2search) == true)
    {
        return nMid;
    }

    if(comparible.IsFirstParamGrt(arr[nMid],val2search) == true)
    {
        vector<T> subvec = vector<T>(arr.begin(),arr.begin()+arr.size()/2);
        nRet = binarysearch(val2search,subvec,comparible);
    }
    else
    {
        vector<T> subvec = vector<T>(arr.begin()+arr.size()/2,arr.end());
        nRet = binarysearch(val2search,subvec,comparible);
        nRet = nMid + nRet;
    }
    return nRet;
}


bool CCompare::IsFirstParamGrt(const int& p1,const int& p2)
{
    return p1 > p2;
}

bool CCompare::IsEqual(const int& p1,const int& p2)
{
    return p1 == p2;
}