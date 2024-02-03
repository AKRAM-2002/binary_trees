# 0x1D. C - Binary Trees

## Project Overview
This is a group project for the C programming language focusing on binary trees.

## Learning Objectives
After completing this project, you should be able to explain the following concepts without external assistance:

- What is a binary tree
- The difference between a binary tree and a Binary Search Tree
- Potential time complexity gains compared to linked lists
- Understanding the depth, height, and size of a binary tree
- Different traversal methods for binary trees
- Characteristics of a complete, full, perfect, and balanced binary tree

## Header Files

- Prototypes of all functions should be in a header file named `binary_trees.h`
- Header files should be include guarded

## Data Structures

- Use the provided data structures for binary trees:
  - `binary_tree_t` for basic binary tree
  - `bst_t` for Binary Search Tree
  - `avl_t` for AVL Tree
  - `heap_t` for Max Binary Heap
- Note: Tasks 0 to 23 deal with simple binary trees, not following any BST rules

## Requirements

- Allowed editors: vi, vim, emacs
- Compilation on Ubuntu 20.04 LTS using gcc with options:       
  ```bash 
    Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- Files should end with a new line
- A README.md file at the root is mandatory
- Code should follow the Betty style
- No global variables allowed
- No more than 5 functions per file
- Standard library usage is allowed

## Task Table

| Task     | Description |
|------    |-------------|
| 0. New node   |  function that creates a binary tree node |
| 1. Insert left      |   function that inserts a node as the left-child of another node |
| 2. Insert right        |  function that inserts a node as the right-child of another node                       |
| 3. Delete   |  function that deletes an entire binary tree |
| 4. Is leaf             |    function that checks if a node is a leaf                                   |
| 5. Is root            |  function that checks if a given node is a root                                     |
| 6. Pre-order traversal           |  function that goes through a binary tree using pre-order traversal                                     |
| 7. In-order traversal            |  function that goes through a binary tree using in-order traversal                                    |
|  8. Post-order traversal           |   function that goes through a binary tree using post-order traversal                                    |
|  9. Height           |   function that measures the height of a binary tree                                     |
|  10-binary_tree_depth.c           |   function that measures the depth of a node in a binary tree                                    |
|  11. Size            |   function that measures the size of a binary tree                                     |
|  12. Leaves            |   function that counts the leaves in a binary tree                                    |
|  13. Nodes           |    function that counts the nodes with at least 1 child in a binary tree                                   |
|  14. Balance factor           |   function that measures the balance factor of a binary tree                                    |
|  15-binary_tree_is_full.c           |  function that checks if a binary tree is full                                     |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
|             |                                       |
| Task N        | Description for Task N |