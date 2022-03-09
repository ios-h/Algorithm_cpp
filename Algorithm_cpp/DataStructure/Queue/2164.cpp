//  카드2
//  2164.cpp
//  Algorithm_cpp
//
//  Created by 안상희 on 2022/03/09.
//

#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

queue<int> q;

int main() {
    cin.tie(0);
    cout.tie(0);
    std::ios::sync_with_stdio(false);
    
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        q.push(i);
    }
    
    while (q.size() != 1) {
        q.pop();
        q.push(q.front());
        q.pop();
    }
    
    cout << q.front();
    return 0;
}
