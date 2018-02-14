
int main()
{
    initialize a forest with 4 elements (0 – 3)
    wUnion(0, 1);
    wUnion(2, 0);
    wUnion(3, 0);
    printArray();
    initialize a forest with 12 elements (0 – 11)
    wUnion(0, 1);
    wUnion(2, 3);
    wUnion(4, 5);
    wUnion(6, 7);
    wUnion(8, 9);
    wUnion(10, 11);
    printArray();
    wUnion(0, 3);
    wUnion(5, 0);
    wUnion(6, 9);
    printArray();
    wUnion(9, 5)
    wUnion(5, 11);
    int r = pcFind(9);
    print r
    printArray();
}