#ifndef HT_H
#define HT_H
#include <list>
#include <string>

class HashTable{
    private:
        static const int HashGroups= 10;
        std::list<std::pair<int, std::string>> Table[HashGroups];

    public:
        bool isEmpty() const;
        int HashFunction(int key);
        void insert(int key, std::string value);
        void remove(int key);
        // std::string search(int key);
        void display();
};


#endif