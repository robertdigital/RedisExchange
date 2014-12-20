#include "exch/redis_support.hpp"
#include <boost/test/included/unit_test.hpp>

namespace exch {
void test_redis_listener() {
  // custom <redis_listener>
  // end <redis_listener>
}

}  // namespace exch

boost::unit_test::test_suite* init_unit_test_suite(int, char * []) {
  using namespace exch;
  using namespace boost::unit_test;
  test_suite* test = BOOST_TEST_SUITE("<redis_support>");
  test->add(BOOST_TEST_CASE(&test_redis_listener));
  return test;
}
