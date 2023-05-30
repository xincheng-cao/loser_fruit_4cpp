#include <iostream>
#include <vector>
using namespace std;

class MyClass{
public:
    static vector<int> myStaticVector;
    const static int myStaticNumber=1;
    const vector<int> myStaticVector2= vector<int>(6,10000);
};

vector<int> MyClass::myStaticVector= vector<int>(3,2);
//vector<int> MyClass::myStaticVector;

int main() {
    MyClass::myStaticVector.push_back(33);
    MyClass myClass=MyClass();
    cout<<myClass.myStaticVector2[5]<<endl;

    cout<<MyClass::myStaticNumber<<endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
