#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../src/my_functions.h"
#include <vector>       // std::vector
TEST_CASE("dup", "[basic]") {
    int myints[] = {32,71,12,45,26,80,53,54};
    std::vector<int> myvector (myints, myints+8);  
    REQUIRE(  myFunction(myvector)  == false);
}
TEST_CASE("no dup", "[basic]") {
    int myints[] = {32,71,12,45,26,80,53,53};
    std::vector<int> myvector (myints, myints+8);  
    REQUIRE(  myFunction(myvector)  == true);
}