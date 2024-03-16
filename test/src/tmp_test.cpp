#include "project/tmp.hpp"

#include <catch2/catch_test_macros.hpp>


TEST_CASE( "TmpAddTest", "CheckValues" ) {
    REQUIRE(tmp::add(1, 2) == 3);
}
