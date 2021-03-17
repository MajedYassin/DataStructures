#include <iostream>
#include "DataStructures.cpp"

int main() {
    std::cout << "Running data structures!" << std::endl;
    DataStruct::LinkedList<int> listA(4, (int)1, (int)2, (int)3, (int)4);
    /*
    DataStruct::LinkedList<int> listA = DataStruct::LinkedList<int>();
    listA.addAtTail(0);
    listA.addAtTail(1);
    listA.addAtTail(2);
    listA.addAtTail(3);*/
    int length = listA.len();
    for(int i = 0; i < length; ++i)
    {
        std::cout << listA.get(i) << std::endl;
    }
    std::getchar();
    return 0;
}
