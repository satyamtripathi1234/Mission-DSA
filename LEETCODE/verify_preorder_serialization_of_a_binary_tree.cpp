#include <iostream>
#include <vector>
#include <queue>
#include <sstream>
using namespace std;
// Definition for a binary tree node.
class Solution {
public:
    bool isValidSerialization(string preorder) {
    stringstream ss(preorder);
    string node;
    int diff = 1; 
    while (getline(ss, node, ',')) {
        if (--diff < 0) return false; 
        if (node != "#") diff += 2; 
    }
    
    return diff == 0; 
    }
};