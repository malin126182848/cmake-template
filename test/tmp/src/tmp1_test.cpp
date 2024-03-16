#include <catch2/catch_test_macros.hpp>
#include "tmp.hpp"

TEST_CASE("TmpAddTest2", "CheckValues")
{
  REQUIRE(tmp::add(2, 2) == 4);
}
