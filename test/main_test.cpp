#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"
#include "../src/my_functions.h"
TEST_CASE("Basic test", "[basic]") {
    REQUIRE(  myFunction()  == 42);
}