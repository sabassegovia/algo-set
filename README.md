# Algorithms

English | [中文](https://github.com/InnoFang/Algorithms/blob/master/README_zh.md)

The algorithm library that support basic data types and reference data types. You can generate the jar file in this library and add the jar file to your own project so that you can use the implemented algorithm to implement the function you want.


## _Project Progress_

 + Sort
   - [Bubble Sort](https://github.com/InnoFang/Algorithm-Library/blob/master/src/io/innofang/sort/impl/BubbleSort.java)
   - [Selection Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/SelectionSort.java)
   - [Insertion Sort](https://github.com/InnoFang/Algorithms/blob/master/src/io/innofang/sort/impl/InsertionSort.java)
   - [Shell Sort](https://github.com/InnoFang/Algorithm-Library/blob/master/io/innofang/src/sort/impl/ShellSort.java)
   - [Quick Sort](https://github.com/InnoFang/Algorithm-Library/blob/master/io/innofang/src/sort/impl/QuickSort.java)
   - [Merge Sort](https://github.com/InnoFang/Algorithm-Library/blob/master/io/innofang/src/sort/impl/MergeSort.java)

   Sorting the same array(array length is 100,000), and the time complexity of each sorting algorithm is as follows
   ```console
    Test for Random Array, size = 100000, random range [0, 100000]
    BubbleSort : 48.446000s
    SelectionSort : 16.273000s
    InsertionSort : 17.110000s
    ShellSort : 0.048000s
    MergeSort : 0.067000s
    QuickSort : 0.070000s

    Test for Nearly Ordered Array, size = 100000, range [0, 100000]
    BubbleSort : 16.588000s
    SelectionSort : 13.123000s
    InsertionSort : 0.005000s
    ShellSort : 0.013000s
    MergeSort : 0.033000s
    QuickSort : 0.010000s
   ```
 + Search  
 
   - [Binary Search](https://github.com/InnoFang/Algorithm-Library/blob/master/src/io/innofang/search/BinarySearch.java)
   
 + Heap
 
   ...

 + Graph
 
   ...

 + BinaryTree
 
   ...
   
