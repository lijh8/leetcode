class Solution {
public:
    /*
    chatGPT 3.5:

    动态规划 (Dynamic Programming) 是一种解决复杂问题的算法设计技术, 
    通常用于优化重复子问题的计算. 
    动态规划和使用循环遍历穷举的方法之间的主要区别在于效率和重复计算的处理方式. 

    循环遍历穷举: 
    循环遍历穷举是一种朴素的解决方法, 通过遍历所有可能的情况来找到最优解. 
    这种方法通常会导致大量的重复计算, 特别是在面对具有重叠子问题性质的问题时, 效率较低. 

    动态规划: 
    动态规划通过将问题分解为重叠子问题, 并存储子问题的解来避免重复计算, 从而提高效率. 
    动态规划通常包括以下步骤: 找到最优子结构, 存储中间结果, 递推或迭代计算最优解. 
    通过记忆化存储或自底向上的迭代方式, 动态规划可以避免重复计算, 从而在时间和空间上实现优化. 
    演示动态规划的优点, 我们可以考虑一个经典的例子: 计算斐波那契数列的第n项. 

    通过比较上述两种方法的性能, 可以看到动态规划方法在计算斐波那契数列时具有更高的效率, 
    因为它避免了重复计算, 将时间复杂度从指数级降低到线性级, 提高了算法的执行速度. 

    下面是一个示例代码, 演示如何使用循环遍历穷举和动态规划来计算斐波那契数列第n项, 
    并展示动态规划的优势: 
    */

    // 使用循环遍历穷举的方法计算斐波那契数列第n项
    int fib2(int n) {
        if (n <= 1) {
            return n;
        }
        
        return fib2(n-1) + fib2(n-2);
    }

    // 使用动态规划计算斐波那契数列第n项
    int fib3(int n) {
        if (n <= 1) {
            return n;
        }
        
        int dp[n+1];
        dp[0] = 0;
        dp[1] = 1;
        
        for (int i = 2; i <= n; i++) {
            dp[i] = dp[i-1] + dp[i-2];
        }
        
        return dp[n];
    }

    int fib(int n){
        if (n <= 1){
            return n;
        }
        int a = 0;
        int b = 1;
        int c = a + b;
        for (int i = 3; i <= n; i++){
            a = b;
            b = c;
            c = a + b;
        }
        return c;
    }

};