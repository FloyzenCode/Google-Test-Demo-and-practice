/*
	Example for Google Test:

		TEST(SubNameCase, NameCase) {
			ASSERT_TRUE(1 == 1); // Test condition and its verification
		}
*/

#include "pch.h"

size_t func(int x) {
	return x;
}

TEST(Case1, a_plus_b) {
	ASSERT_TRUE(1 == 1);
}

TEST(Case2, function) {
	int x = 5 + 5;
	int value = x;

	ASSERT_EQ(func(x), value);
	ASSERT_EQ(func(1), value);
}

// test for class
class MyClass
{
	std::string id;

public:
	MyClass(std::string _id) : id(_id) {}
	std::string GetId() { return id; }
};

TEST(Case3, increment_by_5___class_test)
{
	// Arrange
	MyClass mc("root");

	// Act
	std::string value = mc.GetId();

	// Assert
	EXPECT_STREQ(value.c_str(), "root"); // string equal with _STREQ
}

// test for practic
// You can practice by writing your own methods for the Hard class and tests for its methods
// You can write tests for the class in the structure above

class Hard {
public:
	size_t func(int a) {		
		return a += TWOSTOPBITS;
	}

	size_t func1(std::string str) {
		// Write your logic
	}

};

TEST(CaseHard, class_Hard) {
	Hard Q;
	ASSERT_EQ(Q.func(TWOSTOPBITS), 4);
}

// start test's

INT _tmain(INT argc, WCHAR** argv)  {
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}