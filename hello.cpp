#include <iostream>
#include <bits/stdc++.h>

using namespace std;
//lets start STL - Standard Template Library
int main() {
    // An array of pair objects
    std::pair<int, std::string> pairArray[] = {{1, "One"}, {2, "Two"}, {3, "Three"}};

    // Iterating over the array of pairs
    for (const auto &p : pairArray) {
        std::cout << "First Element: " << p.first << ", Second Element: " << p.second << std::endl;
    }

    return 0;
}

