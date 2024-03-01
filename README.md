# 0x1D. C - Binary trees

This project was done as part of the **Software Engineering** at **ALX**. It was aimed at teaching us about binary trees.

## Key concepts
* Binary Tree
* Binary Search Tree
* Time complexity
* Tree Traversal Methods

At the end of this project, We were able to answer these questions:

. What is a binary tree
. What is the difference between a binary tree and a Binary Search Tree
. What is the possible gain in terms of time complexity compared to linked lists
. What are the depth, the height, the size of a binary tree
. What are the different traversal methods to go through a binary tree
. What is a complete, a full, a perfect, a balanced binary tree

## Data Structures
The following data structures and binary tree types are used in this project. They are also included in the header file
.
* Basic Binary Tree
```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
```

* Binary Search Tree
```
typedef struct binary_tree_s bst_t;
```

* AVL Tree
```
typedef struct binary_tree_s avl_t;
```

* Max Binary Heap
```
typedef struct binary_tree_s heap_t;
```
## Print function
The functions to print binary trees in a pretty way
```

                           .----------------------(006)-------.
                      .--(001)-------.                   .--(008)--.
                 .--(-02)       .--(003)-------.       (007)     (009)
       .-------(-06)          (002)       .--(005)
  .--(-08)--.                           (004)
(-09)     (-07)
```

## Files

| Filename | Description |
| -------- | ----------- |
|`0-binary_tree_node.c` | Function that creates a binary tree node |
|`0-binary_tree_node.c` | Function that inserts a node as the left-child of another node |
|`0-binary_tree_node.c` | Function that inserts a node as the right-child of another node |
|`0-binary_tree_node.c` | Function that deletes an entire binary tree |
|`0-binary_tree_node.c` | Function that checks if a node is a leaf |
|`0-binary_tree_node.c` | Function that checks if a given node is a root |
|`0-binary_tree_node.c` | Function that goes through a binary tree using pre-order traversal |
|`0-binary_tree_node.c` | Function that goes through a binary tree using in-order traversal |
|`0-binary_tree_node.c` | Function that goes through a binary tree using post-order traversal |
|`0-binary_tree_node.c` | Function that measures the height of a binary tree |
|`0-binary_tree_node.c` | Function that measures the depth of a node in a binary tree |
|`0-binary_tree_node.c` | Function that measures the size of a binary tree |
|`0-binary_tree_node.c` | Function that counts the leaves in a binary tree |
|`0-binary_tree_node.c` | Function that counts the nodes with at least 1 child in a binary tree |
|`0-binary_tree_node.c` | Function that measures the balance factor of a binary tree |
|`0-binary_tree_node.c` | Function that checks if a binary tree is full |
|`0-binary_tree_node.c` | Function that checks if a binary tree is perfect |
|`0-binary_tree_node.c` | Function that finds the sibling of a node |
|`0-binary_tree_node.c` | Function that finds the uncle of a node |
|`0-binary_tree_node.c` | Function that finds the lowest common ancestor of two nodes |
|`0-binary_tree_node.c` | Function that goes through a binary tree using level-order traversal |
|`0-binary_tree_node.c` | Function that checks if a binary tree is complete |
|`0-binary_tree_node.c` | Function that performs a left-rotation on a binary tree |
|`0-binary_tree_node.c` | Function that performs a right-rotation on a binary tree |
|`0-binary_tree_node.c` | Function that checks if a binary tree is a valid Binary Search Tree |
|`0-binary_tree_node.c` | Function that inserts a value in a Binary Search Tree |
|`0-binary_tree_node.c` | Function that builds a Binary Search Tree from an array |
|`0-binary_tree_node.c` | Function that searches for a value in a Binary Search Tree |
|`0-binary_tree_node.c` | Function that removes a node from a Binary Search Tree |
|`0-binary_tree_node.c` | What are the average time complexities of those operations on a Binary Search Tree |
|`0-binary_tree_node.c` | Function that checks if a binary tree is a valid AVL Tree |
|`0-binary_tree_node.c` | Function that inserts a value in an AVL Tree |
|`0-binary_tree_node.c` | Function that builds an AVL tree from an array |
|`0-binary_tree_node.c` | Function that removes a node from an AVL tree |
|`0-binary_tree_node.c` | Function that builds an AVL tree from an array |
|`0-binary_tree_node.c` | What are the average time complexities of those operations on an AVL Tree |
|`0-binary_tree_node.c` | Function that checks if a binary tree is a valid Max Binary Heap (Task in progress) |
|`0-binary_tree_node.c` | Function that inserts a value in Max Binary Heap (Task in progress) |
|`0-binary_tree_node.c` | Function that builds a Max Binary Heap tree from an array (Task in progress) |
|`0-binary_tree_node.c` | Function that extracts the root node of a Max Binary Heap (Task in progress) |
|`0-binary_tree_node.c` | Function that converts a Binary Max Heap to a sorted array of integers (Task in progress) |
|`0-binary_tree_node.c` | What are the average time complexities of those operations on a Binary Heap |
