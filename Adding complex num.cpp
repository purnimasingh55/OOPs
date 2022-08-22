#include <iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int i= 0, int r=0){
        imag = i;
        real = r;
    }
    Complex  operator +(Complex &obj){
       Complex res;
       res.real = real+obj.real;
       res.imag = imag+obj.imag;
       return  res;
    } 
    public:
    void display(){
        cout<<real<<"+i"<<imag;
    }
};
int main()
{
    Complex c1(5, 3) ,c2(2,7); 
    Complex c3 = c1+c2;
    c3.display();
    return 0;
}

