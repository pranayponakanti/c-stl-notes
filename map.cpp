#include <bits/stdc++.h>
using namespace std;

int main() {

    // Map stores key-value pairs
    // Keys are unique and sorted
    map<int, int> mpp;

    // Insert values
    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});

    // Another example: key is pair<int,int>
    map<pair<int,int>, int> mpp2;
    mpp2[{2, 3}] = 10;

    // Print map using for-each loop
    cout << "Map elements:\n";
    for (auto it : mpp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // Access values
    cout << "Value at key 1: " << mpp[1] << endl;

    // If key does not exist, [] creates it with value 0
    cout << "Value at key 5: " << mpp[5] << endl;

    // Find
    auto it = mpp.find(3);
    if (it != mpp.end()) {
        cout << "Found key 3, value = " << it->second << endl;
    }

    // Key not present
    auto it2 = mpp.find(8);
    if (it2 == mpp.end()) {
        cout << "Key 8 not found\n";
    }

    // Lower bound & Upper bound
    auto lb = mpp.lower_bound(2);
    if (lb != mpp.end())
        cout << "Lower bound of 2: " << lb->first << endl;

    auto ub = mpp.upper_bound(2);
    if (ub != mpp.end())
        cout << "Upper bound of 2: " << ub->first << endl;

    // Erase
    mpp.erase(2); // remove key 2

    // Size & empty
    cout << "Size: " << mpp.size() << endl;
    cout << "Is empty? " << mpp.empty() << endl;

    return 0;
}
