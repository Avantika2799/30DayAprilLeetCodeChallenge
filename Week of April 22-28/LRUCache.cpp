/*
https://leetcode.com/explore/featured/card/30-day-leetcoding-challenge/531/week-4/3309/
*/

class LRUCache {
    int _capacity;
    list<int>Keys;
    unordered_map<int,pair<int,list<int>::iterator>>m;
public:
    LRUCache(int capacity): _capacity(capacity) {
        
    }
    
    int get(int key) {
        if(m.find(key)!=m.end())
        { //removing from last position and putting in first position
            Keys.erase(m[key].second);
            Keys.push_front(key);
            m[key].second=Keys.begin();
            return m[key].first;
        }
        return -1;
    }
    
    void put(int key, int value) {
        //updating the value for the same key
        if(m.find(key)!=m.end())
        {
            Keys.erase(m[key].second);
            Keys.push_front(key);
            m[key]={value,Keys.begin()};
        }//new key -have to check capacity
        else{
            if(Keys.size()==_capacity)
            {
                m.erase(Keys.back());
                Keys.pop_back();
            }
            Keys.push_front(key);
            m[key]={value,Keys.begin()};
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
