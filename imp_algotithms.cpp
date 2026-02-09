#include <bits/stdc++.h>
using namespace std;

// Custom comparator for pair sorting
// Sort by second ascending
// If second same -> sort by first descending
bool comp(pair<int,int> p1, pair<int,int> p2) {

    if (p1.second < p2.second) return true;
    if (p1.second > p2.second) return false;

    // second is same
    if (p1.first > p2.first) return true;
    return false;
}

int main() {

    // -------- BASIC SORT --------
    int a[] = {2, 1, 5, 2, 3};
    int n = 5;

    sort(a, a + n); // ascending

    vector<int> v = {7, 4, 1, 9};
    sort(v.begin(), v.end());

    // Sort subarray
    sort(a + 1, a + 4); // index 1 to 3

    // Sort in descending order
    sort(a, a + n, greater<int>());

    // -------- SORT PAIRS WITH CUSTOM COMPARATOR --------
    pair<int,int> p[] = {{1,2}, {2,1}, {4,1}, {3,2}};

    sort(p, p + 4, comp);

    cout << "Sorted pairs:\n";
    for(auto x : p){
        cout << x.first << " " << x.second << endl;
    }

    // -------- POPCOUNT --------
    int num = 7;
    cout << "Set bits in 7: " << __builtin_popcount(num) << endl;

    long long big = 123456789876LL;
    cout << "Set bits in big: " << __builtin_popcountll(big) << endl;

    // -------- NEXT PERMUTATION --------
    string s = "123";
    sort(s.begin(), s.end());

    cout << "Permutations:\n";
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end()));

    return 0;
}
