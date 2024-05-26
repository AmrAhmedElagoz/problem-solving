#include "myArray.hpp"
#include <cassert>

Array::Array(int arrSize){
    this->size= arrSize;
    
    if (this->size > 0){
        this->size= size;
        this->length= 0; 
        this->arrPtr= new int[size];
    } else{
        this->size= size;
        this->length= 0; 
        this->arrPtr= nullptr;
    }
}

Array::~Array(){
    delete[] this->arrPtr;
}

void Array::Fill(){
    std::cout << "How many elements you want to fill?" << '\n';
    std::cin >> this->elements;
    assert(this->elements <= this->size);
    
    for (int i= 0; i < this->elements; i++){
        std::cin >> arrPtr[i];
        this->length++;
    }
}

void Array::Display(){
    for (int i= 0; i < this->length; i++){
        std::cout << "Element of " << i << " is " << arrPtr[i] << std::endl;
    }
}

int Array::Search(int element){
    // TODO
    return 0;
}

void Array::Append(int element){
    assert(this->length < this->size);
    this->arrPtr[this->length] = element;
    this->length++;
}

void Array::Insert(int index, int element){
    assert((this->length < this->size) && (index >= 0) && (index < this->size));

    for (int i= this->length; i > index; i--){
        this->arrPtr[i]= this->arrPtr[i-1];
    }
    this->arrPtr[index]= element;
    this->length++;
}

void Array::Delete(int index){
    assert((index >= 0) && (index < this->size));
    int c= this->length;
    for (int i= index;i < c -1; i++){
        this->arrPtr[i]= this->arrPtr[i + 1];
    }
    this->length--;
}