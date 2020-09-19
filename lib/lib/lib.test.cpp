#include <lib/lib.hpp>

#include <boost/ut.hpp>

using namespace boost::ut;

using xzr::lib::add;

namespace
{
suite suite_add = [] {
    "add"_test = [] {
        expect(2_i == add(1, 1));
        expect(3_i == add(1, 2));
        expect(3_i == add(2, 1));
    };
};
}
