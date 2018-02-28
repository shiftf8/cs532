#include <iostream>
#include "UnionFind.h"

UnionFind::UnionFind(int n)
{
    aTotalNumberOfELements = n;
    pParentArray = new int[aTotalNumberOfELements]();
    for (int i = 0; i < n; ++i)
    {
        //Root will keep track of number of elements in each tree via decrementing
        pParentArray[i] = -1; //Initializing each element as its own root, ie -1.
    }
}
void UnionFind::wUnion(int e1, int e2)
{
    int r1 = pcFind(e1);
    int r2 = pcFind(e2);

    /* Original code block given */
    if (r1 != r2)
    {
        pParentArray[r2] = r1;
    }
    /* Original code block given */
    
    
}
int UnionFind::pcFind(int e)
{
    int p;
    
    /* Original code block given */
    p = pParentArray[e];

    while (p != -1)
    {
        e = p;
        p = pParentArray[e];
    }
    
    return e; 
    /* Original code block given */
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