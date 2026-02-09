#include <bits/stdc++.h>
using namespace std;

void explainMultiset() {

    // Multiset stores elements in sorted order
    // It also allows duplicate elements
    multiset<int> ms;

    // Insert elements
    ms.insert(2);   // {2}
    ms.insert(2);   // {2, 2}
    ms.insert(2);   // {2, 2, 2}

    // Count occurrences
    cout << "Count of 2: " << ms.count(2) << endl; // 3

    // Erase all occurrences of a value
    ms.erase(2); // {}

    // Insert again
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(2); // {1,1,1,2}

    // Erase only ONE occurrence using iterator
    auto it = ms.find(1); // points to first 1
    if (it != ms.end()) {
        ms.erase(it); // removes only one 1
    }

    // Print multiset
    cout << "Multiset elements: ";
    for (auto x : ms) {
        cout << x << " ";
    }
    cout << endl;

    // Erase range
    auto it1 = ms.find(1);
    auto it2 = ms.upper_bound(1);
    ms.erase(it1, it2); // removes all remaining 1s

    cout << "After range erase: ";
    for (auto x : ms) {
        cout << x << " ";
    }
    
    cout << endl;
}

int main() {
    explainMultiset();
    return 0;
}
