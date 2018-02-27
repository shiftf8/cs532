#include <iostream>
#include "UnionFind.h"

UnionFind::UnionFind(int n)
{
    aTotalNumberOfELements = n;
    pParentArray = new int[aTotalNumberOfELements]();
    for (int i = 0; i < n; ++i)
    {
        pParentArray[i] = -1; //Initializing each element as its own root.
    }
}
void UnionFind::wUnion(int e1, int e2)
{
    int r1 = pcFind(e1);
    int r2 = pcFind(e2);
    
    if (r1 != r2)
    {
        pParentArray[r2] = r1;
    }
}
int UnionFind::pcFind(int e)
{
    if (e >= TotalNumberOfElements())
    {
        std::cerr <<e <<" is out of bounds for this object.\n";
        return e;
    }
    int p;
    
    p = pParentArray[e];
    while (p != -1)
    {
        e = p;
        p = pParentArray[e];
    }
    
    return e; 
}
void UnionFind::printArray()
{
    for (int i = 0; i < aTotalNumberOfELements; ++i)
    {
        std::cout <<pParentArray[i];
        if (i < aTotalNumberOfELements - 1) std::cout <<", ";
    }
    std::cout <<"\n";
}


int UnionFind::TotalNumberOfElements() const { return aTotalNumberOfELements; }
const int& UnionFind::ParentOfElementN(int ElementN) const { return pParentArray[ElementN]; }