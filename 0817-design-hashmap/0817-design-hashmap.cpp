class MyHashMap
{
public:
    vector<pair<int, int>> vp;
    MyHashMap()
    {
    }
    void put(int key, int value)
    {
        bool alreadyPresent = false;
        for (auto &p : vp)
        {
            if (p.first == key)
            {
                alreadyPresent = true;
                p.second = value;
            }
        }
        if (alreadyPresent == false)
            vp.push_back({key, value});
    }

    int get(int key)
    {
        for (auto &p : vp)
        {
            if (p.first == key)
                return p.second;
        }
        return -1;
    }

    void remove(int key)
    {
        int size = vp.size();
        for (int i = 0; i < size; i++)
        {
            if (vp[i].first == key)
            {
                vp[i].second = -1;
                break;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */