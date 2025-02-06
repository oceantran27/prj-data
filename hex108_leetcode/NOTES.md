# Some thought about algorithm
*Algorithm* is important, and *implementation* is also very important(e.g. Partition List).

To solve a problem, I usually think it in a normal way first, then I try to optimize it, I get the expected algorithm finally, e.g. Longest Palindromic Substring; Median Of Two Sorted Arrays; Container With Most Water; Trapping Rain Water; Largest Rectangle In Histogram.

## How to analyze problemom
### Understand the problem
### How to estimate the least complexity of algorithm for the problem
I have not figured not it yet. But you could see the article [why is quicksort so quick](http://mindhacks.cn/2008/06/13/why-is-quicksort-so-quick/) first.

### Basic methods
* Split the problem to smaller problem

  Split it to smaller problem. But how to split is also a problem. 
  
  e.g. Palindrome Palindrome II.

* Recursion

  After split problem, we usually use recursion if the child problem is similar to the parent problem. 

* Backtracking
  
  e.g. Word Search. 

* Dynamic programming

  Its implementation is usually 'recursion' + 'record'.

  `f2 = f0 + f1` is a specific case of dynamic programming!

  e.g. Climbing Stairs; Decode Ways.

* Brute force
  
  It is a good method sometimes.

  e.g. Sudoku Solver.

## How to make programe faster?
### Pruning
It is used in many programs. Briefly, we need cut down alternative answer those must not be the answer. It usually appears  in the code in the form of conditional statements.

e.g. Scramble String.

### Record
Record values that need computed many times. It could change the complexity of the algorithm. If not using record, it will exceed time limit.

e.g. Palindrome Palindrome II; Distinct Subsequences; Edit Distance; Pow.

*But* we should implement it effecively.
e.g. Interleaving String.

### Hash
Hash is very very helpful. It could save much time.

e.g. Two Sum; Longest Consecutive Sequence.

### heap
maximum heap and minimum heap.

e.g. Merge K Sorted Lists. 

### Reduce compare times

e.g. Longest Common Prefix. 

### Process data first

e.g. Best Time To Buy And Sell Stock II.

## How to write correct program
Please refer to the book <\<Programming Pearls\>> Part I Column 4(Writing Correct Programs). Then you could understand how to set/compare low and high in quick sort and binary search algorithm.

## Tricks
### Fast and slow pointer
Currently, it has been used in rotating list and checking whether a chain list is a loop, e.g. Rotate List; Remove Nth Node From End Of List; Convert Sorted List To Binary Search Tree.

### Dummy node
It is useful when you might delete the head of a node list, e.g. Reverse Linked List II; Remove Duplicates From Sorted List II; Populating Next Right Pointers In Each Node II.

# Specific problems
Some problems could be tried again. e.g. Wildcard Matching; Longest Substring Without Repeating Characters; Populating Next Right Pointers In Each Node.

## Palindrome Partitioning II
Write programe more effectively. It *matters*.

e.g.

    for(size_t i = 0; i < need_cut.size(); i ++){
        if(isPalindrome(s, need_cut[i], len - 1)){
            return n; 
        }
        size_t start = need_cut[i];
        for(size_t j = start; j < len - 1; j ++){
            if(record[j + 1] != 0 && isPalindrome(s, start, j)){
                tmp.push_back(j + 1);
                record[j + 1] = 0;
            }
        }
    }
    
=>

    for(size_t i = 0; i < need_cut.size(); i ++){
        if(isPalindrome(s, need_cut[i], len - 1)){
            return n; 
        }
    }

    for(size_t i = 0; i < need_cut.size(); i ++){
        size_t start = need_cut[i];
        for(size_t j = start; j < len - 1; j ++){
            if(record[j + 1] != 0 && isPalindrome(s, start, j)){
                tmp.push_back(j + 1);
                record[j + 1] = 0;
            }
        }
    }
    
## Longest Consecutive Sequence
I usually use bit map to solve the problem. And I have already recognized the solution will be very inefficient when the range of the element in the array is very large, e.g. {-200000, 200000}. Today I think I could use map to solve it suddenly. Finally I solve the problem. What a big surprise!

## Interleaving String
Implement record effectively. According to index1 and index2, we could get index3 because the equation `(s1.size() - index1 + s2.size() - index2) == (s3.size() - index3)` must be true. So we could use `recored[index1][index2]` instead of `record[index1][index2][index3]` to record.

## Merge Sorted Array
Classify every situation, e.g. m == 0, n == 0.

## Partition List
It is very senstive to the effective implementation of every operation, not just complexity of algorithm.

Using dummy node could simplify the implementation.

## Remove Duplicates From Sorted List II
Use a dummy node and set its member 'next' point to head. It is one of questions in my interview one year ago.

## Search In Rotated Sorted Array II
I have not figured out why linear search does not exceed the time limit!

## Median Of Two Sorted Arrays
It is a very good practice to deduce the program step by step.

## Climbing Stairs
I have never thinked that the equation `f(n) = f(n - 1) + f(n - 2)` could be used in my program.

## 3Sum
Please note the following *error* code.

    vector<int> v;
    for(size_t i = v.size() - 1; i >= 0; i --){  // i whose type is 'size_t' will always be non-negative.
        ...
    }
    
## 4Sum
Write program very effectively and carefully. You could use `git diff` to see the difference.

## Permutation Sequence
It is a useful trick using `remain_num` in code.

## Next Permutation
Please understand what is the expected permutation first.

## Implement StrStr
KMP is always a little hard to write right at one time. Glibc  has another implementation in the file string/strstr.c.

## Minimum Window Substring
Use `deque` and `map`. It is a little hard. If the question becomes "Given a string S and a string T, find the minimum window in S which will contain all the characters(that same characters are contained once is OK) in T in complexity O(n).", it will be more easy, using `map` is just OK.

## Pow(x, n)
Use record. Please notice corner cases: n < 0; n = -2147483648(the smallest negative int).

## Longest Palindromic Substring
To solve this problem, I think it in a normal way first, then I try to optimize it, I get the expected algorithm finally. Perfect idea!

There is another linear algorithm for it at [part I](http://leetcode.com/2011/11/longest-palindromic-substring-part-i.html) and [part II](http://leetcode.com/2011/11/longest-palindromic-substring-part-ii.html).

## Add Two Numbers
Notice corner cases. The code `remain = l1 != NULL? l1 : l2; while(remain){...}` is bettern than the code `while(l1){...}; while(l2){...}` I wrote before.

## Divide Two Integers
Corner cases: `dividend` and `divisor` might be negative; `dividend` and `divisor` might be `-2147483648`, then `dividend = -dividend` and `divisor = -divisor` will overflow.

## Generate Parentheses
A little complex use of recurtion and record. Please see the notes of code for details.

##  First Missing Positive
1. bit sets? Not constant memory. 2. Seach the array again and again? Need O(n^2) time. If you could think out that the input array aslo could be used, you will get the answer! 

The problem is very special. We could put all the numbers in [0, n - 1] in right places where `A[i] == i + 1`. Then we visit the array from the beginning again, if `A[i] != i + 1`, `A[i]` is what we want, otherwise `n + 1` is what we want.

## Combination Sum
First sort and unique candicates.

## Combination Sum II
Deal with duplicates smartly and carefully.

## Valid Sudoku
Understand the question first. Valid means filled part is valid, we need not care the empty part.

## Sudoku Solver
Brute force.

## Search Insert Position
For Binary Search, the most important thing to remember: the end of `while(low <= high)` will always be `low == high + 1`, before the end is `low == high`, then you should choose to set `low` or `high` according to `A[mid] ? target`. According to the queston, you could set the middle `?` easily.

## Substring With Concatenation Of All Words
Think it in a normal way, then optimize it in a hard way. Divide S to `element_size` parts, and search S part by part not one character by one. See notes in code for details.

An important optimization is *do not do the same thing more than one time*. 

e.g. for this problem, if you search S one character by one(suppose `S` is 'foobartarfoobarfoo', `L` is {"foo", "bar", "foo"}), then you will searh from the first character `f`, after "foobar" you find "tar" is not in `L`, so this search fails. You continue to search from the character 'o' after 'f' ... Then you finally search from the third character 'b', after "bar" you find "tar" is not in `L` *again*! In this two situations, you check "bar" twice and "tar" also twice. How to avoid this? Think it hard, you will get the answer.

## Surrounded Regions
The key idea is: If the 'O' in board could not touch the boarder by surrounded 'O', it must be surrounded by 'X', otherwise it must not be.

An important thing is we should write non-recursion code if it is convinient, or it might cause stack overflow(I guess). When I tested the code using recursion version on online test system, it saied "Runtime Error". It is usually because stack overflow or memory bounds.

## Populating Next Right Pointers In Each Node II
Do breadth frist visit. Because we could not use extra memory, we use the pointer 'next' in TreeLinkNode to simulate a vector.

## Flatten Binary Tree To Linked List
Preorder visit.

## Convert Sorted List To Binary Search Tree
Recursion. Get mid of list node using slow and fast pointer.

## Recover Binary Search Tree
The easy way to solve it is that do a in-order traversal and store the nodes into a vector, then find which two nodes are in the wrong place. Think how it works clearly(it is really very important), then think how could we implement it without vector. And I get the answer.

## Subsets II
The key point is dealing with duplicates. Please see code.

## Decode Ways
`f2 = f1 + f0` again!

Actually it is a specific case of dynamic programming!

## Gray Code
G(i) = (B(i) / 2) ^ B(i).
http://en.wikipedia.org/wiki/Gray_code

## Scramble String
The solution uses recursion. It seems Brute Force to me. But pruning(`contain_same_charactoers` in the code) is used as an optimization. Pruning is really very useful.

## Maximal Rectangle
It is a very good expand for the problem 'Largest Rectangle In Histogram'. 

## Sort Colors
Write good program.

## Simplify Path
So many corner cases!

## Sqrt
Perfect formula from http://en.wikipedia.org/wiki/Methods_of_computing_square_roots.

## Valid Number
[+-]?[0-9]+?.?[0-9]+?(e+?[0-9]+)?, but there is must a digit in it.

## Jump Game
Good optimization.

## Jump Game II
We use 'record[i]' to record the smallest index that could reach last index in i steps. We need to maintain a property for 'record': record[0] > record[1] > ... > record[max_steps]

e.g. if record[0 ... 3] = {8, 7, 6, 5} and max_steps = 4, then we find A[4] = 8, then we set A[0] = 4, and max_steps = 0 becuase we are searching backward, if it could reach A[5] or A[6], it must could reach A[4], there will be short steps if we choose reaching last index through A[4], so the steps after A[4] is not useful.

Then we could use binary search to search record. For every A[i], we just need to search `A[i] + i` in the record, the index in `record` + 1 is the steps for A[i].

How do I get the above solution? It is just "Think it in a normal way, then try to optimise it".

## N-Queens II
See optimization in the comments.

## Roman To Integer
For the definition of roman numeral, see http://en.wikipedia.org/wiki/Roman_numeral for details.

## Anagrams
I do not know how I figure it out, I just try and try. Hash is perfect!

## Trapping Rain Water
There is a more concise version, the article is [I Failed a Twitter Interview](http://qandwhat.apps.runkite.com/i-failed-a-twitter-interview/). 
