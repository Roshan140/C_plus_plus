#include<iostream>
using namespace std;

class aa{
    public:
    aa(){
        cout<<"constructor"<<endl;
    }
    ~aa(){
        cout<<"destructor";
    }
};

int main(){
    aa o1;
}