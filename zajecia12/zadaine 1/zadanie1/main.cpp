#include <iostream>

using namespace std;

class Klasa
{
private:
    static int nextid;
    int id;
public:
    Klasa() : id(++nextid)
    {
        cout << "nowy obiekt o id:" << id << endl;
    }
    ~Klasa()
    {
        cout << "usunięto obiekt o id:" << id << endl;
    }
    int getId()
    {
        return id;
    }
    int test(int a)
    {
        cout << "\ntest klasy o id:" << id << "\n"<< endl;
        return a+1;
    }




};
class KlasaUsuwajaca
{
public:
    void operator () (Klasa *wzk)
    {
        cout << "czyszczenie klasy o id:"<<wzk->getId() << endl;
        delete wzk;
    }

};


int Klasa::nextid = 0;
void ftest(shared_ptr<Klasa> ptrf)
{
    cout<<"funkcja"<<endl;
    cout<<ptrf->test(123)<<endl;
}

template <typename T>
class Smart_Pointer
{
private:
    T *wzk;
public:
    Smart_Pointer(T* wzk) : wzk(wzk)
    {

    }
    ~Smart_Pointer()
    {
        delete *wzk;
    }
    void operator -> ()
    {
        return wzk;
    }
    void operator & ()
    {
        return *wzk;
    }



};

class Triangle
{
private:
    float x,y,z;
public:
    Triangle(float x,float y,float z) : x(x),y(y),z(z)
    {

    }
    ~Triangle()
    {
        cout << "usunaes trójkąt" << endl;
    }
    float getx()
    {
        return x;
    }
    float gety()
    {
        return y;
    }
    float getz()
    {
        return z;
    }

};

float obliczobw(shared_ptr<Triangle> hehs)
{
    return hehs->getx()+hehs->gety()+hehs->getz();
}


int main(int argc, char *argv[])
{
    Klasa nowy;
    shared_ptr<Triangle> nowwy(new Triangle(1,2,3));
    unique_ptr<Klasa> ptr1(new Klasa);
    shared_ptr<Klasa> ptr2(new Klasa);
    shared_ptr<Klasa> ptr3(ptr2);
    cout << ptr1->test(12)<< ptr2->test(11) << ptr3->test(13)<<endl;
    ptr1.reset(new Klasa);
    cout << obliczobw(nowwy)<<endl;
    ftest(ptr2);
    return 0;
}
