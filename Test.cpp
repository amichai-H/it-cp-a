//
// Created by amichai hadad on 10/06/2020.
//

#include "doctest.h"
#include <iostream>
#include <vector>
#include <limits>

#include "range.hpp"
#include "accumulate.hpp"
#include "filterfalse.hpp"
#include "compress.hpp"


using namespace itertools;
using namespace std;
TEST_CASE("Test 1"){
    int j = 1
    for(int i : range(1,8)){
        CHECK( j == i )
        j++;
    }

}