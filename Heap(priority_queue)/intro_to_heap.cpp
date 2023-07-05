#include<iostream.h>

int main(){
    //Heap is a data structure 
    //Two types of heap
    1. minheap  
     priority_queue<int, vector<int>, greater<int>> minheap;

    2. maxheap
    priority_queue<int> maxheap;

    Very helpful to find Kth largest, Kth smallest

    Time complexity: O(N log(K))     K: size of Heap
    
    minheap.push(element);    Top element will be minimum along all elements in heap

    maxheap.push(element);    Top element will be maximum along all elements in heap

    return 0;
}