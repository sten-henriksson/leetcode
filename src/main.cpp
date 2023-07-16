#include <iostream>
#include "my_functions.h"
int main() {
    int myints[] = {32,71,12,45,26,80,53,43};
    std::vector<int> myvector (myints, myints+8);  
    std::cout << "c: " << myFunction(myvector) << std::endl;
    return 0;
}