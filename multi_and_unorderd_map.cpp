#include <bits/stdc++.h>
using namespace std;

int main() {

    // -------- MULTIMAP --------
    multimap<int, int> mmp;

    mmp.insert({1, 10});
    mmp.insert({1, 20});
    mmp.insert({2, 30});
    mmp.insert({1, 40});

    cout << "Multimap elements:\n";
    for (auto it : mmp) {
        cout << it.first << " -> " << it.second << endl;
    }

    // -------- UNORDERED MAP --------
    unordered_map<int, int> ump;

    ump[1] = 100;
    ump[2] = 200;
    ump[3] = 300;

    cout << "\nUnordered_map elements:\n";
    for (auto it : ump) {
        cout << it.first << " -> " << it.second << endl;
    }

    // -------- UNORDERED SET --------
    unordered_set<int> ust;

    ust.insert(5);
    ust.insert(3);
    ust.insert(3);
    ust.insert(10);

    cout << "\nUnordered_set elements:\n";
    for (auto x : ust) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
