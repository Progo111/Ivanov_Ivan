#include "header.hpp"
#include "function.cpp"

int main() {
    MyPriorityQueueMax<int> A;
    A.push(5);
    A.push(4);
    A.push(3);
    A.push(2);
    A.push(1);
    cout << A;
    A.pop();
    A.pop();
    A.pop();
    cout<<A<<"\n\n";

    MyPriorityQueueMin<int> B;
    B.push(5);
    B.push(4);
    B.push(3);
    B.push(2);
    B.push(1);
    cout << B;
    B.pop();
    B.pop();
    B.pop();
    cout<<B<<"\n\n";

    MyPriorityQueueMax<char> C;
    C.push('a');
    C.push('b');
    C.push('c');
    C.push('d');
    C.push('e');
    C.push('f');
    C.push('g');
    C.push('h');
    C.push('i');
    C.push('j');
    cout << C;
    C.pop();
    C.pop();
    C.pop();
    cout<<C<<"\n\n";

    MyPriorityQueueMin<char> D;
    D.push('a');
    D.push('b');
    D.push('c');
    D.push('d');
    D.push('e');
    D.push('f');
    D.push('g');
    D.push('h');
    D.push('i');
    D.push('j');
    cout << D;
    D.pop();
    D.pop();
    D.pop();
    cout<<D<<"\n\n";
    return 0;
}