#include <iostream>

using namespace std;

class person
{
protected:
    string name;
public:
    virtual string ident()
    {
        return name;
    }
};

class teacher : public person
{
private:
    string title;
public:

    string ident()
    {
        return name+" "+title;
    }
};
class student : public person
{
private:
    int semestr;
public:
    string ident()
    {
        return name+" "+(char)semestr;
    }
};


int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
