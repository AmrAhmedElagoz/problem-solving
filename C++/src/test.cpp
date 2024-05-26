#include "HashTable.hpp"
#include <iostream>

int main(){

    HashTable HT;

    HT.insert(905, "Amr");
    HT.insert(118, "Ali");
    HT.insert(332, "Ahmed");
    HT.insert(124, "Mohammed");
    HT.insert(905, "Omar");

    HT.display();

    HT.remove(201);
    HT.remove(124);

    if (HT.isEmpty()){
        std::cout << "Empty" << std::endl;
    } else {
        HT.display();
    }
}
