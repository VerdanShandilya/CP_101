#include <vector>
#include <list>
#include <iostream>
#include <functional>
using namespace std;

class HashMap {
    static const int DEFAULT_SIZE = 101;
    vector<list<pair<string, string>>> buckets;
    int capacity;
    int size;

    int getbucketindex(const string& key) const {
        hash<string> hasher;
        size_t hash_value = hasher(key);
        return hash_value % capacity;
    }

    void rehash() {
        int old_capacity = capacity;
        capacity *= 2;
        vector<list<pair<string, string>>> new_buckets(capacity);
        for (const auto& bucket : buckets) {
            for (const auto& kv : bucket) {
                int idx = hash<string>{}(kv.first) % capacity;
                new_buckets[idx].push_back(kv);
            }
        }
        buckets.swap(new_buckets);
    }

public:
    HashMap(int cap = DEFAULT_SIZE) : capacity(cap), size(0) {
        buckets.resize(capacity);
    }

    void put(const string& key, const string& val) {
        int idx = getbucketindex(key);
        for (auto& kv : buckets[idx]) {
            if (kv.first == key) {
                kv.second = val;
                return;
            }
        }
        buckets[idx].push_back({key, val});
        size++;
        if ((double)size / capacity > 0.75) {
            rehash();
        }
    }

    bool get(const string& key, string& val) const {
        int idx = getbucketindex(key);
        for (const auto& kv : buckets[idx]) {
            if (kv.first == key) {
                val = kv.second;
                return true;
            }
        }
        return false;
    }

    void erase(const string& key) {
        int idx = getbucketindex(key);
        for (auto it = buckets[idx].begin(); it != buckets[idx].end(); ++it) {
            if (it->first == key) {
                buckets[idx].erase(it);
                size--;
                return;
            }
        }
    }

    double load_factor() const {
        return (double)size / capacity;
    }
};

int main() {
    HashMap m;
    m.put("apple", "red");
    m.put("banana", "yellow");
    m.put("grape", "purple");

    string val;
    if (m.get("banana", val)) cout << "banana: " << val << endl;
    else cout << "banana not found\n";

    m.erase("banana");
    if (m.get("banana", val)) cout << "banana: " << val << endl;
    else cout << "banana not found\n";

    cout << "Current load factor: " << m.load_factor() << endl;
}