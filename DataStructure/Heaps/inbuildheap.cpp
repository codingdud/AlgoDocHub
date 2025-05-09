#include <iostream>
#include <vector>
#include <algorithm> // For heap operations

void printHeap(const std::vector<int>& heap) {
    for (int val : heap) {
        std::cout << val << " ";
    }
    std::cout << "\n";
}

int main() {
    // Max Heap Example
    std::cout << "Max Heap:\n";
    std::vector<int> maxHeap = {1,2,3,4,5};
    
    // Convert to max heap
    std::make_heap(maxHeap.begin(), maxHeap.end());
    printHeap(maxHeap);

    // Push an element
    maxHeap.push_back(50);
    std::push_heap(maxHeap.begin(), maxHeap.end());
    printHeap(maxHeap);

    // Pop the top element
    std::pop_heap(maxHeap.begin(), maxHeap.end());
    std::cout << "Popped: " << maxHeap.back() << "\n";
    maxHeap.pop_back();
    printHeap(maxHeap);

    // Min Heap Example
    std::cout << "\nMin Heap:\n";
    std::vector<int> minHeap = {10, 20, 15, 30, 40};
    
    // Convert to min heap
    std::make_heap(minHeap.begin(), minHeap.end(), std::greater<>());
    printHeap(minHeap);

    // Push an element
    minHeap.push_back(5);
    std::push_heap(minHeap.begin(), minHeap.end(), std::greater<>());
    printHeap(minHeap);

    // Pop the top element
    std::pop_heap(minHeap.begin(), minHeap.end(), std::greater<>());
    std::cout << "Popped: " << minHeap.back() << "\n";
    minHeap.pop_back();
    printHeap(minHeap);

    return 0;
}
