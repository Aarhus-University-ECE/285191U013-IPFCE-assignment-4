#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include <assert.h>

extern "C"
{
#include "average.h"
#include "counter.h"
#include "longest_seq.h"
#include "reverse.h"
#include "smallest.h"

}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up
TEST_CASE("longest_seq")
{
    int a[13] = {0,0,0,4,5,0,0,0,0,0,11,0,0};
    int b[5] = {1,2,3,4,5};

    assert(longest_seq(a,13) == 5);
    assert(longest_seq(b,5) == -1);
}

TEST_CASE("average")
{
    // Look here
    int list[10] = {1,2,3,4,5,6,7,8,-4,0};
    int n = 5;
    average(list,n);
    REQUIRE(n == 3.2);
}

TEST_CASE("counter")
{
    // Add test case
}



TEST_CASE("reverse")
{
    int a[5] = {1,2,3,4,5};
    int b[5];
    int c[5] = {5,4,3,2,1};
    reverse(a, b, 5);
    REQUIRE(b == c);
}

TEST_CASE("smallest")
{
    int list[5] = {1,2,3,4,5};
    int n = 5;
    REQUIRE(get_min(list, n) == 1);
}

