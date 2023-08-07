#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../src/my_functions.h"
TEST_CASE("succ", "[basic]") {
    REQUIRE(  myFunction("dsa","sad")  == true);
}
TEST_CASE("fail", "[basic]") {
    REQUIRE(  myFunction("ssssa","sssss")  == false);
}
TEST_CASE("fail2", "[basic]") {
    REQUIRE(  myFunction("dsa","sa")  == false);
}
TEST_CASE("fail3", "[basic]") {
    REQUIRE(  myFunction("dsa","dsf")  == false);
}