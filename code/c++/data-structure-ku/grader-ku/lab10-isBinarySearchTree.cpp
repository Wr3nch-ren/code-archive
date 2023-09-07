//Write a program to check if a tree is a binary search tree or not.

//1st Input : Recieve root node
//Later Input : Recieve <parent node> <child node> <side> untill 0 0 end is encountered (In a tree will not have 0 as a node value)
//Output : If the tree is a binary search tree shows "A binary search tree, this is."
//         If the tree is not a binary search tree shows "This tree is illegal."
//         If the tree has only root node shows "This tree is lonely, give them a hug."
//         If the node is duplicated in a tree or have a same position with another node shows "Not what I am looking for, I am afraid." and terminate the program without recieving more nodes.

//Sample Input 1:
//1
//0 0 end
//Sample Output 1:
//This tree is lonely, give them a hug.

//Sample Input 2:
//3
//3 2 L
//3 4 R
//2 -2 L
//4 6 R
//4 1 L
//0 0 end
//Sample Output 2:
//A binary search tree, this is.

//Sample Input 3:
//10
//10 8 L
//10 12 R
//12 6 L
//12 9 R
//0 0 end
//Sample Output 3:
//This tree is illegal.

//Sample Input 4:
//10
//10 8 L
//10 12 R
//12 15 R
//12 10 L
//Sample Output 4:
//Not what I am looking for, I am afraid.

//Sample Input 5:
//13
//13 7 L
//13 15 R
//7 4 L
//7 9 R
//13 19 R
//Sample Output 5:
//Not what I am looking for, I am afraid.