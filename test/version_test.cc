#include "gtest/gtest.h"

#include "lwsock.hpp"

using namespace std;
using namespace lwsock;

TEST(Version, version)
{
  std::string ver = Version;
  ASSERT_EQ("v1.3.0", ver);
}
