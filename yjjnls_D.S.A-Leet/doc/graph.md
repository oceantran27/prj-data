# Graph

- [Graph](#graph)
  - [1 Basics](#1-basics)
    - [1.1 Representation of graph](#11-representation-of-graph)
    - [1.2 Oriented Graph](#12-oriented-graph)
      - [1.2.1 Topological Sort](#121-topological-sort)
      - [LeetCode](#leetcode)
  - [2. DFS](#2-dfs)
    - [2.1 Template](#21-template)
    - [2.2 Properties](#22-properties)
    - [LeetCode](#leetcode-1)
  - [3. BFS](#3-bfs)
    - [3.1 Template](#31-template)
    - [3.2 Properties](#32-properties)
    - [LeetCode](#leetcode-2)
  - [4. DFS vs BFS todo](#4-dfs-vs-bfs-todo)
  - [5. 最小支撑树 todo](#5-最小支撑树-todo)
  - [6. 最短路径 todo](#6-最短路径-todo)
  - [7. extension](#7-extension)

## 1 Basics

### 1.1 Representation of graph

[Graph](https://www.khanacademy.org/computing/computer-science/algorithms/graph-representation/a/representing-graphs)的表示有以下三种结构：

-   `Edge lists`
-   `Adjacency matrices ( (i,j)为1表示i与j之间有连接 )`  
-   `Adjacency lists ( i->j,k,l 有三条边由i指向j,k,l )`  

图的结构转换，例题：207 course schedule

```cpp
vector<unordered_set<int>> make_graph(int numCourses, vector<pair<int, int>> &prerequisites)
{
    //Adjacency lists
    vector<unordered_set<int>> graph(numCourses);
    for (auto pre : prerequisites)
        graph[pre.second].insert(pre.first);
    return graph;
}
```

图一般是带环的，没有环的一般称之为树。图还分为**有向图**和**无向图**。

### 1.2 Oriented Graph

-   **有向图**的边有方向，若一条边由顶点u指向顶点v，则可以表示(u,v)。
-   有n条边指向顶点v，就可以说顶点v的**indegree**为n。
-   有向图一定有环，但是若几条边的方向首尾相连，那么就会构成一个**圈**。圈上的顶点的indegree都大于0.

#### 1.2.1 Topological Sort

[拓扑排序](http://blog.csdn.net/changyuanchn/article/details/17067349)是对有向无圈图的顶点的一种排序，这个排序的结果是如果存在一条vi到vj的路径，那么排序中vi在vj的前面。

    a) 查找indegree为0的点p
    b) 对所有与p邻接的点的indegree = indegree -1；
    c) 查找indegree为0的点（p除外），然后循环过程

这里只是拓扑排序的一种方法。

#### LeetCode

-   207 Course Schedule
-   210 Course Schedule II  

* * *

## 2. DFS

[演示过程](http://www.cs.usfca.edu/~galles/visualization/DFS.html)  

<!-- ![dfs](./img/Graph/dfs.png) -->

![dfs_gif](./img/Graph/dfs.gif)  

### 2.1 Template

```python
def DFS(graph, start):
    # 1.terminator
    if start is None:
        return []
    # 2.init container
    visited = []
    stack = [(start)]

    while stack:
        # 3.pop one node from container
        node  = stack.pop()
        visited.add(node)
        # 4.process current node
        process(node)
        # 5.push releated nodes to container
        nodes = generate_related_nodes(node)
        stack.push(nodes)

    #other processing work
    ...
```

### 2.2 Properties

-   一根筋走到底，也可以叫做BackTracking
-   DFS可以用递归，如果不用递归，则用stack来维护
-   需要用hash表或者stack来保存已经访问过的结点（如果需要）
-   时间复杂度为O(N)，每个结点只访问一次
-   适合于输出所有路径

### LeetCode

-   22 Generate Parentheses
-   37 Sudoku Solver
-   51 N-Queens
-   52 N-Queens II
-   79 Word Search
-   200 Number of Islands
-   102 Binary Tree Level Order Traversal
-   112 Path Sum(适合一头扎到底)
-   113 Path Sum II
-   124 Binary Tree Maximum Path Sum
-   515 Find Largest Value in Each Tree Row
-   515 Coin Change 2

* * *

## 3. BFS

-   [演示过程](http://www.cs.usfca.edu/~galles/visualization/BFS.html)    
    <!-- ![dfs](./img/Graph/bfs.png) -->  
    ![dfs_gif](./img/Graph/bfs.gif)  

### 3.1 Template

```python
def BFS(graph, start):
    # 1.terminator
    if start is None:
        return []
    # 2.init container
    visited = []
    queue.append([start])

    while queue:
        # 3.pop one node from container
        node = queue.pop()
        visited.add(node)
        # 4.process current node
        process(node)
        # 5.push releated nodes to container
        nodes = generate_related_nodes(node)
        queue.push(nodes)

    # other processing work
    ...
```

### 3.2 Properties

-   BFS不能用递归，因为递归是往下深入一层，与BFS的语义就违背了。所以BFS只能用队列来维护。
-   time:O(N)
-   对于树的BFS和DFS，不需要判重，因为树没有环。

在求两个点之间的最短路径，用BFS更好（01-matrix）
从一个字符串转换到另一个字符串，也是这类问题（word search）
bfs像水波纹一样扩散出去，这样一层层扩展出去，找到路径时一定是**最短**的路径（word search II）。而dfs要全部遍历完之后才能比较是否是最简单的路径。
**dfs适合求满足一定条件的路径**，dfs不适合解最优性的问题。

<!-- -   22 Generate Parentheses -->

### LeetCode

-   102 Binary Tree Level Order Traversal
-   103 Binary Tree Zigzag Level Order Traversal  
-   515 Find Largest Value in Each Tree Row
-   542 01 Matrix(好题目)
-   433 minimum genetic mutation
-   127 word ladder
-   322 Coin Change  

* * *

## 4. DFS vs BFS todo

* * *

## 5. 最小支撑树 todo

todo

## 6. 最短路径 todo

todo

## 7. extension

* * *

DFS用stack
BFS用queue
如果用priority_queue,就是A\*算法，启发式搜索 todo
