// there are two types of Hash Tables one employs seperate chaining,
// the other employs open addressing (to deal with collisions: multiple
// keys that have the exact same hash)

#include "HashTable.hpp"
#include <iostream>

bool HashTable::isEmpty() const{
    int sum{};
    for (int i{}; i < HashGroups; i++){
        sum += Table[i].size();
    }

    if (!sum){
        return true;
    }

    return false;
}

int HashTable::HashFunction(int key){
    return key % HashGroups;
}

void HashTable::insert(int key, std::string value){
    int hashValue= HashFunction(key);
    auto& cell= Table[hashValue];
    auto Itr= std::begin(cell);
    bool keyExist= false;
    for (; Itr != std::end(cell); Itr++){
        if (Itr->first == key){
            keyExist= true;
            Itr->second= value;
            std::cout << "Value Replaced!" << std::endl;
            break;
        }
    }

    if (!keyExist){
        cell.emplace_back(key, value);
    }
}

void HashTable::remove(int key){
    int hashValue= HashFunction(key);
    auto& cell= Table[hashValue];
    auto Itr= std::begin(cell);
    bool keyExist= false;
    for (; Itr != std::end(cell); Itr++){
        if (Itr->first == key){
            Itr= cell.erase(Itr);
            keyExist= true;
            std::cout << "Key Removed!" << std::endl;
            return;
        }
    }

    if (!keyExist){
        std::cout << "Key Not Found!" << std::endl;
    }
}

void HashTable::display(){
    for (int i{}; i < HashGroups; i++){
        if (Table[i].size() == 0) continue;

        auto Itr= Table[i].begin();
        for (; Itr != Table[i].end(); Itr++){
            std::cout << "The Key: " << Itr->first << " It's Value "\
            << Itr->second << std::endl;
        }
    }
}