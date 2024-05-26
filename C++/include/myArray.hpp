#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include <iostream>

class Array{
    private:
        int size{};
        int length{};
        int* arrPtr{};
        int elements{};

    public:
        Array(int arrSize);
        ~Array();
        void Fill();
        void Display();
        int getSize(){ return this->size; }
        int getLength(){ return this->length; }
        int Search(int element);
        void Append(int element);
        void Insert(int index, int element);
        void Delete(int index);
};








#endif 