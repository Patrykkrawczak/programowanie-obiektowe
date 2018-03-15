#include <iostream>

using namespace std;

class User
{
   protected:
    string login;
    string password;

public:

    User(string login,string password)
    {
        this-> login = login;
        this -> password = password;


    }
    bool authorize(string login,string password)
    {
        if(this-> login == login && this -> password == password){
            return true;
        }
        else return false;



    }
};
class Student : public User
{
private:
    int semestr;


public:

Student(int SEMESTR,string login,string haslo) : User(login,haslo), semestr(SEMESTR)
{

}


};
class Subject
{
private:
    int max;
    string name;
    Student *student[100];
    int cur;
public:
    Subject(int max,string name) : name(name), max(max)
    {
      cur=0;
    }
    bool addStudent(Student *stud)
    {
        if(cur+1>max){
            return false;
        }
        student[cur]=stud;
        cur++;
        return true;

    }
    Student *Sprawdzenie(Student *student,bool *logik)
    {
        for(int i=0;i<=cur;i++)
        {
            if(student==this -> student[i]){
                *logik = true;
                return &student[i];
            }
        }

    }


};
//UML

int main()
{

    User s=User("login","password");
    Student s2=Student(2,"jacek","kaczka");
    Student s4=Student(2,"maciek","kliczka");
    Subject s3=Subject(10,"matematyka");
    s3.addStudent(&s2);
    s3.addStudent(&s4);
    bool zmienna=0;
    s3.Sprawdzenie(&s4,&zmienna);

    cout << zmienna<< endl;
    return 0;

}
