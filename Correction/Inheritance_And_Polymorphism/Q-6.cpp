#include <iostream>

using namespace std;

class Base {
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    int getPvt() {
        return pvt;
    }
};

class PublicDerived : public Base {
public:
    int getPROT() {
        return prot;
    }

    int getPUB() {
        return pub;
    }
};

int main() {
    PublicDerived obj1;

    cout << "Private = " << obj1.getPvt() << endl;
    cout << "Protected = " << obj1.getPROT() << endl;
    cout << "Public = " << obj1.getPUB() << endl;

    return 0;
}