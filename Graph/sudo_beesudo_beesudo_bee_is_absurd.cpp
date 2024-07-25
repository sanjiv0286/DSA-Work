#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
#include <queue>

using namespace std;

int main() {
    int f, n, m;
    cin >> f >> n;

    unordered_map<string, vector<string>> graph;
    unordered_set<string> sudo_bee_friends;
    
    for (int i = 0; i < f; ++i) {
        string friend_name;
        cin >> friend_name;
        sudo_bee_friends.insert(friend_name);
    }

    for (int i = 0; i < n; ++i) {
        string person_name;
        cin >> person_name;
        int k;
        cin >> k;

        for (int j = 0; j < k; ++j) {
            string friend_name;
            cin >> friend_name;
            graph[person_name].push_back(friend_name);
            graph[friend_name].push_back(person_name);
        }
    }

    unordered_set<string> visited;
    unordered_set<string> introduced_people;
    queue<string> bfs_queue;

    for (const string& friend_name : sudo_bee_friends) {
        visited.insert(friend_name);
        introduced_people.insert(friend_name);
        bfs_queue.push(friend_name);
    }

    int total_introductions = sudo_bee_friends.size();

    while (!bfs_queue.empty()) {
        string current_person = bfs_queue.front();
        bfs_queue.pop();

        for (const string& friend_name : graph[current_person]) {
            if (!visited.count(friend_name)) {
                visited.insert(friend_name);
                introduced_people.insert(friend_name);
                bfs_queue.push(friend_name);
                total_introductions++;
            }
        }
    }

    cout << total_introductions << endl;

    return 0;
}


