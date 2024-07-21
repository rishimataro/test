//* Xay dung class phan so, sau do in ra phan so toi gian

#include <iostream>

using namespace std;

class Phanso
{
    private:
        int x;
        int y
    public:
        Phanso(int x, int y);
        
        ~Phanso();
};

Phanso::Phanso(int x, int y)
{
    this->x = x;
    this->y = y;
}



Phanso::~Phanso()
{
    cout << "Da huy phan so!" << endl;
}


int main() {
    Phanso p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}