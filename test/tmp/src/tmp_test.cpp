#include <catch2/catch_test_macros.hpp>
#include "tmp.hpp"

TEST_CASE("TmpAddTest", "CheckValues")
{
  REQUIRE(tmp::add(1, 2) == 3);
}
