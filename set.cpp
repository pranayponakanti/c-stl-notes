// topic 8
#include <bits/stdc++.h>
using namespace std;

void explainSet() {
    // A set stores elements in sorted order and keeps them unique
    set<int> st;

    // Insertion
    st.insert(2);      // {2}
    st.insert(1);      // {1, 2}
    st.emplace(2);     // {1, 2} (duplicate, ignored)
    st.insert(4);      // {1, 2, 4}
    st.insert(3);      // {1, 2, 3, 4}

    // Finding an element
    auto it = st.find(3); // iterator pointing to 3
    if (it != st.end()) {
        cout << "Found: " << *it << endl;
    }

    // If element is not found, find() returns st.end()
    auto it2 = st.find(6);
    if (it2 == st.end()) {
        cout << "6 not found\n";
    }

    // Erasing by value (log n)
    st.erase(4); // removes 4 -> {1, 2, 3}

    // Count (returns 0 or 1 because set has unique elements)
    cout << "Count of 2: " << st.count(2) << endl; // 1
    cout << "Count of 5: " << st.count(5) << endl; // 0

    // Erasing using iterator (amortized constant time)
    auto it3 = st.find(2);
    if (it3 != st.end()) {
        st.erase(it3); // {1, 3}
    }

    // Erasing a range [first, last)
    st.insert(2);
    st.insert(4);
    st.insert(5); // {1, 2, 3, 4, 5}

    auto start = st.find(2);
    auto end = st.find(4);
    st.erase(start, end); // removes 2 and 3 -> {1, 4, 5}

    // Print final set
    cout << "Final set: ";
    for (auto x : st) {
        cout << x << " ";
    }
    // lower and upperbound 
    // lower bound returns an iterator pointing to the first element that is not less than x
    auto it = st.lower_bound(2);//checks for two and returns it if there or return next immediate value greater than that
    // upper bound returns an iterator pointing to the first element greater than x
    auto it = st.upper_bound(2);// returns next greater value than key
    cout << endl;

}

int main() {
    explainSet();
    return 0;
}
