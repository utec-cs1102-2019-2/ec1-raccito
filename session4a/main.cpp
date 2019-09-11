#include <iostream>
using namespace std;
int main() {
    std::cout << "Hello, World!" << std::endl;
    int ival = 42;
    int *p = &ival;
    cout << p <<"\t" << *p << "\t" <<&p;
    return 0;
}