#include <algorithm>
#include <vector>
#include <iostream>
#include<bits/stdc++.h>

int main() {
    std::vector<std::vector<int>> matrix = {
        {3, 1, 4},
        {1, 5, 9},
        {2, 6, 5}
    };

    std::sort(matrix.begin(), matrix.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        int sumA = accumulate(a.begin(), a.end(), 0); // Sum of elements in row a
        int sumB = accumulate(b.begin(), b.end(), 0); // Sum of elements in row b
        return sumA > sumB; // Sort by descending order of row sums
    });

    for (const auto& row : matrix) {
        for (int num : row) {
            std::cout << num << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
