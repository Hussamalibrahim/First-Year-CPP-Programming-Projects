#include<iostream>
using namespace std;
class name
{
    string name ;
protected:
    void set_name(string name)
    {
        this->name = name ;
    }
    void print_name()
    {
        cout << "name : " << name <<endl;
    }
};
class id {
int id ;
protected:
    void set_id(int id)
    {
        this->id = id ;
    }
    void print_id()
    {
        cout << "id : " << id <<endl;
    }
};
class student : public name, public id {
public:
    student (string Name, int Id)
    {
        set_name(Name);
        set_id(Id);
    }
    void print ()
    {
        print_name();
        print_id();
    }
};
int main()
{
    student s1("hussam",7094);
    s1.print();
    return 0;
}