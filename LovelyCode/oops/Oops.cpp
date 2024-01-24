#include <iostream>
using namespace std;
class Phone
{
private:
    string name;
    int screenSize, memory;

public:
    Phone()
    {
        name = "";
        screenSize = 0;
        memory = 0;
    }
    void setData(string name, int screenSize, int memory)
    {
        this->name = name;
        this->screenSize = screenSize;
        this->memory = memory;
    }
    void showData()
    {
        cout << "Name of Phone:- " << name << endl;
        cout << "ScreenSize of Phone:- " << screenSize << ".Cm" << endl;
        cout << "Memory of Phone:- " << memory << "GB" << endl;
    }
};

int main()
{
    Phone m1;
    m1.setData("Realme", 14, 4);
    m1.showData();
    return 0;
}