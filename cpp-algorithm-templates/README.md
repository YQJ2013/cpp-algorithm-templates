# C++ 基础算法模板库

C++ 基础算法模板集合：14 个经典算法模板，按算法类型分为 7 类。每个模板都带 `main` 函数和自测样例，可直接编译运行，适合算法竞赛、面试手撕和日常复习。

## 模板清单

| # | 分类 | 文件 | 说明 |
|---|------|------|------|
| 1 | 排序算法 | `01-排序算法/quick_sort.cpp` | 快速排序 |
| 2 | 排序算法 | `01-排序算法/merge_sort.cpp` | 归并排序 + 逆序对计数 |
| 3 | 查找算法 | `02-查找算法/binary_search.cpp` | 二分查找 |
| 4 | 数据结构 | `03-数据结构/dsu.cpp` | 并查集（路径压缩） |
| 5 | 数据结构 | `03-数据结构/bit.cpp` | 树状数组（单点修改 + 前缀和） |
| 6 | 图论 | `04-图论/dijkstra.cpp` | Dijkstra 堆优化最短路 |
| 7 | 图论 | `04-图论/topo.cpp` | 拓扑排序（判环） |
| 8 | 动态规划 | `05-动态规划/knapsack01.cpp` | 01 背包 |
| 9 | 动态规划 | `05-动态规划/knapsack_full.cpp` | 完全背包 |
| 10 | 动态规划 | `05-动态规划/lcs.cpp` | 最长公共子序列 |
| 11 | 数学 | `06-数学/quick_pow.cpp` | 快速幂（模运算） |
| 12 | 数学 | `06-数学/gcd.cpp` | 最大公约数 / 最小公倍数 |
| 13 | 数学 | `06-数学/primes.cpp` | 线性筛素数 |
| 14 | 字符串 | `07-字符串/kmp.cpp` | KMP 字符串匹配 |

## 目录结构

```
cpp-algorithm-templates/
├── 01-排序算法/
│   ├── quick_sort.cpp
│   └── merge_sort.cpp
├── 02-查找算法/
│   └── binary_search.cpp
├── 03-数据结构/
│   ├── dsu.cpp
│   └── bit.cpp
├── 04-图论/
│   ├── dijkstra.cpp
│   └── topo.cpp
├── 05-动态规划/
│   ├── knapsack01.cpp
│   ├── knapsack_full.cpp
│   └── lcs.cpp
├── 06-数学/
│   ├── quick_pow.cpp
│   ├── gcd.cpp
│   └── primes.cpp
├── 07-字符串/
│   └── kmp.cpp
├── README.md
├── LICENSE
└── compile_all.bat
```

## 编译运行

需要支持 C++17 的编译器（g++ / clang / MSVC / Dev-C++ 均可）。

```bash
# 编译单个模板
g++ -std=c++17 -O2 "01-排序算法/quick_sort.cpp" -o quick_sort
./quick_sort
```

Windows 下也可以双击根目录的 `compile_all.bat` 一键编译全部模板，可执行文件生成在各源码同目录。

## 说明

- 源码统一为 UTF-8 编码；在 Windows 传统 cmd 控制台运行出现中文乱码时，先执行 `chcp 65001` 再运行程序。
- 每个模板都带有自测样例，运行即可看到示例输出，便于验证模板正确性。

## License

[MIT](./LICENSE)