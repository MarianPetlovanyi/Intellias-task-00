Implement a function that takes as an input a two-dimensional square matrix consisting of 0 and 1 and outputs a boolean.


The input matrix is in fact a maze where 1 means that the route is available while 0 means that it is not. Diagonal route paths are not allowed, only horizontal and vertical.


The function output is True or False depending on the fact if there is a way from the top left corner of the matrix to the lowest right one. The maximum matrix dimension is 50x50 while the minimum one is 2x2. There is no need to output the route(s) itself, just the boolean corresponding to its existence.


1. Implement the function itself (e.g., applying Union-Find algorithm to maze-solving task), including error handling of the incorrect input format.


2. Cover the implementation with an extensive set of unit tests providing the example mazes as inputs and the corresponding outputs to make sure that the implementation has no pitfalls
3. 
// my maze 10x10 (return 1)  .
1 1 0 0 0 0 0 0 0 0
1 0 0 1 1 0 1 1 1 1
1 1 0 0 1 1 1 0 0 1
0 1 1 0 1 0 0 0 1 1
1 0 1 1 1 1 0 0 0 1
0 0 0 0 1 0 0 1 1 1
1 1 1 1 1 0 0 1 0 0
1 0 0 1 0 0 1 1 1 0
1 1 0 0 0 0 0 0 1 0
1 1 1 1 0 0 0 0 1 1

// my maze 20x20 (return 1)  .
1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 1 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 0 0 1 1 1 0 0 1 0 1 0 1 0 0 1 1 1 0
0 1 1 0 1 0 0 0 1 1 1 1 0 1 0 0 1 0 1 0
1 0 1 1 1 1 0 0 0 1 0 0 0 0 0 0 1 1 1 0
0 0 0 0 1 0 0 1 1 1 1 1 1 1 0 0 0 0 1 1
1 1 1 1 1 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1
1 0 0 1 0 0 1 1 1 0 1 1 0 1 0 1 0 0 0 1
1 1 0 0 0 0 0 0 1 0 0 1 0 1 0 1 0 0 0 1
1 1 1 1 0 0 0 0 1 1 0 1 0 1 0 1 0 0 0 1
1 1 0 0 0 0 0 0 0 0 0 1 1 1 0 1 1 1 1 1
1 0 0 1 1 0 1 1 1 1 0 0 0 0 0 0 0 1 0 0
1 1 0 0 1 1 1 0 0 1 0 0 1 1 1 0 0 1 0 0
0 1 1 0 1 0 0 0 1 1 0 1 1 0 1 0 0 1 0 0
1 0 1 1 1 1 0 0 0 1 0 0 0 0 1 0 0 1 0 0
0 0 0 0 1 0 0 1 1 1 1 1 1 1 1 0 0 1 0 0
1 1 1 1 1 0 0 1 0 0 0 0 0 0 0 0 0 1 0 0
1 0 0 1 0 0 1 1 1 0 0 0 0 1 0 0 0 1 0 0
1 1 0 0 0 0 0 0 1 0 0 0 1 1 1 1 1 1 0 0
1 1 1 1 0 0 0 0 1 1 0 1 1 0 0 0 0 1 1 1


// my maze 20x20 (return 0)  .
1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 1 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 0 0 1 1 1 0 0 1 0 1 0 1 0 0 1 1 1 0
0 1 1 0 1 0 0 0 1 1 1 1 0 1 0 0 1 0 1 0
1 0 1 1 1 1 0 0 0 1 0 0 0 0 0 0 1 1 1 0
0 0 0 0 1 0 0 1 1 1 1 1 1 1 0 0 0 0 1 1
1 1 1 1 1 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1
1 0 0 1 0 0 1 1 1 0 1 1 0 1 0 1 0 0 0 1
1 1 0 0 0 0 0 0 1 0 0 1 0 1 0 1 0 0 0 1
1 1 1 1 0 0 0 0 1 1 0 1 0 1 0 1 0 0 0 1
1 1 0 0 0 0 0 0 0 0 0 1 1 1 0 1 1 1 1 1
1 0 0 1 1 0 1 1 1 1 0 0 0 0 0 0 0 1 0 0
1 1 0 0 1 1 1 0 0 1 0 0 1 1 1 0 0 1 0 0
0 1 1 0 1 0 0 0 1 1 0 1 1 0 1 0 0 1 0 0
1 0 1 1 1 1 0 0 0 1 0 0 0 0 1 0 0 1 0 0
0 0 0 0 1 0 0 1 1 1 1 1 1 1 1 0 0 1 0 0
1 1 1 1 1 0 0 1 0 0 0 0 0 0 0 0 0 1 0 0
1 0 0 1 0 0 1 1 1 0 0 0 0 1 0 0 0 1 0 0
1 1 0 0 0 0 0 0 1 0 0 0 1 1 1 1 1 1 0 0
1 1 1 1 0 0 0 0 1 1 0 1 1 0 0 0 0 1 0 1


// incorrect maze 20x19 return ("Error! Print maze correctly")
1 1 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
1 0 0 1 1 0 1 1 1 1 1 1 1 1 1 1 1 1 1 1
1 1 0 0 1 1 1 0 0 1 0 1 0 1 0 0 1 1 1 0
0 1 1 0 1 0 0 0 1 1 1 1 0 1 0 0 1 0 1 0
1 0 1 1 1 1 0 0 0 1 0 0 0 0 0 0 1 1 1 0
0 0 0 0 1 0 0 1 1 1 1 1 1 1 0 0 0 0 1 1
1 1 1 1 1 0 0 1 0 0 0 0 0 1 0 0 0 0 0 1
1 0 0 1 0 0 1 1 1 0 1 1 0 1 0 1 0 0 0 1
1 1 0 0 0 0 0 0 1 0 0 1 0 1 0 1 0 0 0 1
1 1 1 1 0 0 0 0 1 1 0 1 0 1 0 1 0 0 0 1
1 1 0 0 0 0 0 0 0 0 0 1 1 1 0 1 1 1 1 1
1 0 0 1 1 0 1 1 1 1 0 0 0 0 0 0 0 1 0 0
1 1 0 0 1 1 1 0 0 1 0 0 1 1 1 0 0 1 0 0
0 1 1 0 1 0 0 0 1 1 0 1 1 0 1 0 0 1 0 0
1 0 1 1 1 1 0 0 0 1 0 0 0 0 1 0 0 1 0 0
0 0 0 0 1 0 0 1 1 1 1 1 1 1 1 0 0 1 0 0
1 1 1 1 1 0 0 1 0 0 0 0 0 0 0 0 0 1 0 0
1 0 0 1 0 0 1 1 1 0 0 0 0 1 0 0 0 1 0 0
1 1 0 0 0 0 0 0 1 0 0 0 1 1 1 1 1 1 1 1
