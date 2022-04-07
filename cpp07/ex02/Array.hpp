#pragma once

template <class T>
class Array {

public:
    Array(void)
    {
        array = new T[0];
        _size = 0;
    };
    Array(unsigned int n)
    {
        array = new T[n];
        for (unsigned int i = 0; i < n; i++)
            array[i] = 0;
        _size = n;
    };
    Array(Array<T> &copy)
    {
        *this = copy;
    };
    ~Array(void)
    {
        delete [] array;
    };
	Array<T> &operator=(Array<T> &copy)
    {
        this->_size = copy.size();
        this->array = new T[copy.size()];
        for (unsigned int i = 0; i < this->_size; i++)
            array[i] = copy[i];
        return *this;
    };
    T &operator[](unsigned int i)
    {
        if (i >= _size || i < 0)
            throw std::out_of_range("out of range");
        else
            return this->array[i];
    };
    unsigned int size(void) const
    {
        return _size;
    }

private:
    T *array;
    unsigned int _size;
};