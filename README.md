# gmockglobal_sample
Sample project demonstrating how gmockglobal works. It contains googletest submodule, gmockglobal submodule, and source file with samples.   

# HOW TO BUILD
You can build this project using CMake.  

# ABOUT
This project demonstrates main usecases for a gmockglobal. It's mocks several global functions with all possible counts of arguments (like in gmock is from 0 up to 10), and test calls count of them. It also demonstrates that several expectation in one TEST working too. 

# HOW TO MOCK
So, let's imagine you want to mock global function ```int sum2(int a, int b)``` 
You should declare mock in a global scope:
```MOCK_GLOBAL_FUNC2(sum2, int(int, int));```
and use it in some TEST as follows: 
```
TEST(SummizerTestGlobal2, CanSumGlobal2)
{
    EXPECT_GLOBAL_CALL(sum2, sum2(1, 2)) .Times(1);
    sum2(1, 2);
}
```

You can also specify different call convention using macro ```MOCK_GLOBAL_FUNC2_WITH_CALLTYPE(...)``` placing as first argument the call convention name you want. 

# Known issues

The [after clause](https://github.com/google/googletest/blob/master/googlemock/docs/CheatSheet.md#the-after-clause) can't be using with gmockglobal, use Sequences instead.
