#include <bits/stdc++.h>
using namespace std;
int main() {

    // ===================== UNORDERED_SET =====================
    // Hash table, average O(1)
    unordered_set<int> us;
    us.insert(10);
    us.insert(20);
    us.insert(10); // duplicate ignored

    us.erase(20);
    cout << us.count(10) << endl; // 1 or 0
    cout << us.size() << endl;

    if (us.find(10) != us.end()) cout << "Found\n";

    // ===================== VECTOR =====================
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    cout << v[0] << endl;
    cout << v.front() << " " << v.back() << endl;

    v.pop_back();

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *it << " ";
    }

    v.erase(v.begin());
    v.clear();

    // ===================== SET =====================
    // Sorted, unique elements (Red-Black Tree)
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(5);

    cout << *s.begin() << endl; // smallest
    s.erase(1);

    if (s.find(5) != s.end()) cout << "Exists\n";

    // ===================== MULTISET =====================
    // Allows duplicates
    multiset<int> ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(20);

    cout << ms.count(10) << endl;

    ms.erase(ms.find(10)); // erase one instance

    // ===================== UNORDERED_MULTISET =====================
    unordered_multiset<int> ums;
    ums.insert(1);
    ums.insert(1);
    cout << ums.count(1) << endl;

    // ===================== MAP =====================
    // Sorted key-value
    map<int, string> mp;
    mp[1] = "A";
    mp.insert({2, "B"});

    cout << mp[1] << endl;

    for (auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }

    mp.erase(1);

    // ===================== UNORDERED_MAP =====================
    unordered_map<int, int> ump;
    ump[1] = 100;
    ump[2] = 200;

    cout << ump[1] << endl;

    if (ump.find(2) != ump.end()) cout << "Found\n";

    // ===================== MULTIMAP =====================
    multimap<int, int> mmp;
    mmp.insert({1, 100});
    mmp.insert({1, 200});

    for (auto it : mmp) {
        cout << it.first << " " << it.second << endl;
    }

    // ===================== UNORDERED_MULTIMAP =====================
    unordered_multimap<int, int> ummp;
    ummp.insert({1, 10});
    ummp.insert({1, 20});

    // ===================== STACK =====================
    stack<int> st;
    st.push(1);
    st.push(2);

    cout << st.top() << endl;
    st.pop();

    cout << st.size() << endl;

    // ===================== QUEUE =====================
    queue<int> q;
    q.push(1);
    q.push(2);

    cout << q.front() << endl;
    cout << q.back() << endl;

    q.pop();

    // ===================== DEQUE =====================
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(2);

    cout << dq.front() << " " << dq.back() << endl;

    dq.pop_back();
    dq.pop_front();

    // ===================== PRIORITY_QUEUE =====================
    // Max Heap (default)
    priority_queue<int> pq;
    pq.push(10);
    pq.push(20);

    cout << pq.top() << endl;

    pq.pop();

    // Min Heap
    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(10);
    minpq.push(5);

    cout << minpq.top() << endl;

    // ===================== LIST =====================
    list<int> lst;
    lst.push_back(1);
    lst.push_front(2);

    lst.remove(1);

    for (auto x : lst) cout << x << " ";

    // ===================== NEXT_PERMUTATION =====================
    vector<int> np = {1,2,3};
    next_permutation(np.begin(), np.end());

    for (int x : np) cout << x << " ";
    cout << endl;

    // ===================== __builtin_popcount =====================
    int num = 7; // 111
    cout << __builtin_popcount(num) << endl;

    // ===================== SORT =====================
    vector<int> sv = {4,2,5,1};
    sort(sv.begin(), sv.end());

    // descending
    sort(sv.begin(), sv.end(), greater<int>());

    // ===================== MIN_ELEMENT =====================
    cout << *min_element(sv.begin(), sv.end()) << endl;

    // ===================== MAX_ELEMENT =====================
    cout << *max_element(sv.begin(), sv.end()) << endl;

    return 0;
}