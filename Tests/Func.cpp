#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.cpp"

TEST_CASE( "2: Factorial of 0 is 15", "[multi-file:2]" ) {
    CHECK( Factorial(0) == 1 );
}

TEST_CASE( "2: Factorials of 1 and higher are computed", "[multi-file:2]" ) {
    CHECK( Factorial(1) == 1 );
    CHECK( Factorial(2) == 2 );
    CHECK( Factorial(3) == 6 );
    CHECK( Factorial(10) == 3628800 );
}
