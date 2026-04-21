#include <catch2/catch_test_macros.hpp>

#include "main/hello-greet.h"

TEST_CASE("get_greet returns a greeting for the given name", "[hello-greet]") {
    REQUIRE(get_greet("world") == "Hello world");
    REQUIRE(get_greet("Bazel") == "Hello Bazel");
}
