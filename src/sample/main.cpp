#include <gmock/gmock.h>
#include <gtest/gtest.h>
#include <gmockglobal/gmockglobal.h>

// 
//  Mocks for test sum functions
//
MOCK_GLOBAL_FUNC10(sum10, int(int, int, int, int, int, int, int, int, int, int));

MOCK_GLOBAL_FUNC9(sum9, int(int, int, int, int, int, int, int, int, int));

MOCK_GLOBAL_FUNC8(sum8, int(int, int, int, int, int, int, int, int));

MOCK_GLOBAL_FUNC7(sum7, int(int, int, int, int, int, int, int));

MOCK_GLOBAL_FUNC6(sum6, int(int, int, int, int, int, int));

MOCK_GLOBAL_FUNC5(sum5, int(int, int, int, int, int));

MOCK_GLOBAL_FUNC4(sum4, int(int, int, int, int));

MOCK_GLOBAL_FUNC3(sum3, int(int, int, int));

MOCK_GLOBAL_FUNC2(sum2, int(int, int));

MOCK_GLOBAL_FUNC1(sum1, int(int));

MOCK_GLOBAL_FUNC0(sum0, int(void));


//
// Test for mocks
//
TEST(SeveralSumsInOne, CanSumSeveral)
{
    using ::testing::AtLeast;
    EXPECT_GLOBAL_CALL(sum2, sum2(1, 2)).Times(1);
    sum2(1, 2);
    EXPECT_GLOBAL_CALL(sum2, sum2(1, 2)).Times(AtLeast(1));
    sum2(1, 2);

    EXPECT_GLOBAL_CALL(sum3, sum3(1, 2, 3)).Times(2);
    sum3(1, 2, 3);
    sum3(1, 2, 3);
}

TEST(SummizerTestGlobal10, CanSumGlobal10)
{
    EXPECT_GLOBAL_CALL(sum10, sum10(1, 2, 3, 4, 5, 6, 7, 8, 9, 10)).Times(1);
    sum10(1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
}

TEST(SummizerTestGlobal9, CanSumGlobal9)
{
    EXPECT_GLOBAL_CALL(sum9, sum9(1, 2, 3, 4, 5, 6, 7, 8, 9)).Times(1);
    sum9(1, 2, 3, 4, 5, 6, 7, 8, 9);
}

TEST(SummizerTestGlobal8, CanSumGlobal8)
{
    EXPECT_GLOBAL_CALL(sum8, sum8(1, 2, 3, 4, 5, 6, 7, 8)).Times(1);
    sum8(1, 2, 3, 4, 5, 6, 7, 8);
}

TEST(SummizerTestGlobal7, CanSumGlobal7)
{
    EXPECT_GLOBAL_CALL(sum7, sum7(1, 2, 3, 4, 5, 6, 7)).Times(1);
    sum7(1, 2, 3, 4, 5, 6, 7);
}

TEST(SummizerTestGlobal6, CanSumGlobal6)
{
    EXPECT_GLOBAL_CALL(sum6, sum6(1, 2, 3, 4, 5, 6)).Times(1);
    sum6(1, 2, 3, 4, 5, 6);
}

TEST(SummizerTestGlobal5, CanSumGlobal5)
{
    EXPECT_GLOBAL_CALL(sum5, sum5(1, 2, 3, 4, 5)).Times(1);
    sum5(1, 2, 3, 4, 5);
}

TEST(SummizerTestGlobal4, CanSumGlobal4)
{
    EXPECT_GLOBAL_CALL(sum4, sum4(1, 2, 3, 4)).Times(1);
    sum4(1, 2, 3, 4);
}

TEST(SummizerTestGlobal3, CanSumGlobal3)
{
    EXPECT_GLOBAL_CALL(sum3, sum3(1, 2, 3)).Times(1);
    sum3(1, 2, 3);
}

TEST(SummizerTestGlobal2, CanSumGlobal2)
{
    EXPECT_GLOBAL_CALL(sum2, sum2(1, 2)) .Times(1);
    sum2(1, 2);
}

TEST(SummizerTestGlobal1, CanSumGlobal1)
{
    EXPECT_GLOBAL_CALL(sum1, sum1(1)).Times(1);
    sum1(1);
}

TEST(SummizerTestGlobal0, CanSumGlobal0)
{
    EXPECT_GLOBAL_CALL(sum0, sum0()).Times(1);
    sum0();
}