#include <iostream>

#include "../../vision/super_sonic.h"
#include "gtest/gtest.h"

namespace visionTests {

	TEST(sample_test_case, sample_test)
	{
		SuperSonicRadar* uut = new SuperSonicRadar();
		EXPECT_EQ(1, uut->GetDistancemap());
	}

	TEST(sample_test_case, sample_test_another)
	{
		EXPECT_EQ(1, 1);
	}
};