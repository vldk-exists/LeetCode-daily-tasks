/*
Design a HashSet without using any built-in hash table libraries.

Implement MyHashSet class:
    - void add(key) Inserts the value key into the HashSet.
    - bool contains(key) Returns whether the value key exists in the HashSet or not.
    - void remove(key) Removes the value key in the HashSet. If key does not exist in the HashSet, do nothing.
*/

class MyHashSet {   
    vector<int> data;

    public:
        MyHashSet() {}
    
        void add(int element) {
            if (!contains(element)) {
                auto it = lower_bound(data.begin(), data.end(), element);
                data.insert(it, element);
            }
        }
        
        void remove(int key) {
            int i = index(key);
            if (i >= 0) data.erase(data.begin()+i);
        }

        int index(int key) {
            if (!data.empty()) {
                int low = 0, high = data.size()-1;
    
                while (low <= high) {
                    int middle = low + (high-low)/2;
    
                    if (data[middle] == key) return middle;
                    else if (data[middle] < key) low = middle + 1;
                    else high = middle - 1;
                }
            }
    
            return -1;
        }
    
        bool contains(int key) {
            return index(key) >= 0; 
        }

        void print() {
            for (const int& i: data) cout << i << endl;
        }
};
