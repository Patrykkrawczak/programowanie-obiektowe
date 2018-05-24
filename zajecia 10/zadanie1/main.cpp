#include <iostream>

using namespace std;
template <typename T>
class Array {
    unsigned int m_size;
    T *arr;
public:
    Array(int size);
    ~Array();
    int size();
    T& operator[](int index);
    T *forward();
    void tab()
    {
        arr = new T[m_size];
        for(T t=0;t<m_size;t++)
        {
            arr[t] = t;
        }
    }
};

template <typename T>
Array<T>::Array(int size) {
    this->m_size=size;
    this->arr=new T[size];
}

template <typename T>
Array<T>::~Array() {
    delete [] arr;
}

template <typename T>
int Array<T>::size() {
    return m_size;
}

template <typename T>
T& Array<T>::operator[](int index) {
    return arr[index];
}

template <typename T>
class iteratorforward
{
    T* element;
    int pozycja = 0;
public:
    iteratorforward(T* x): element(x) {}
    iteratorforward(const iteratorforward &mit) : element(mit.nastepny) {}
    iteratorforward& operator++()
    {

        pozycja++;
        return *this;
    }
    T& operator*()
    {
        return element[pozycja];
    }
    bool operator==(const iteratorforward& rhs)
    {
        return element[pozycja]==rhs.element[pozycja];
    }
    bool operator!=(const iteratorforward& rhs)
    {
        return element[pozycja]==rhs.element[pozycja];
    }

};
template <typename T>

class element
{
    T liczba;
    element* nastepny;
public:
    element(T liczba)
    {
        this->liczba = liczba;
                nastepny = NULL;
    }
    void ustaw(element *nastepny) {this->nastepny = nastepny;}




};


int main(int argc, char *argv[])
{
    Array <int> nowy(5);
    iteratorforward<Array<int>> it(&nowy);
    nowy.tab();


    cout << "\tx|o|x\n\t-|-|-\n\to|x|o\n\t-|-|-\n\tx|o|x" << endl;
    return 0;
}
