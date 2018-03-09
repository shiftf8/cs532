#ifndef UnionFind_h
#define UnionFind_h

class UnionFind
{
    public:
        UnionFind(int n);
        void wUnion(int e1, int e2);
        int pcFind(int e);
        void printArray();
        
        int TotalNumberOfElements() const;
        const int& ParentOfElementN(int ElementN) const;

    private:
        int aTotalNumberOfElements;
        int *pParentArray;
};

#endif
