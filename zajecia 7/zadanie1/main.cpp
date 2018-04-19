#include <iostream>

using namespace std;

class person
{
protected:
    string name;

};

class teacher : public person
{
    string title;
};
class student : public person
{
    int semestr;

};


int main(int argc, char *argv[])
{
    cout << "Hello World!" << endl;
    return 0;
}
