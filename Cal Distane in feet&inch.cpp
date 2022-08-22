#include <iostream>
using namespace std;
class Distance{
    int feet,inch;
    public:
    Distance(int i = 0, int f = 0){
        feet = f;
        inch = i;
    }
    Distance  operator -(Distance obj){
       obj.feet = feet-obj.feet;
       obj.inch = inch -obj.inch;
       if(obj.inch<0){
           obj.inch = obj.inch+12;
           obj.feet = obj.feet-1;
       }
       return obj;
    } 
    public:
    void display(){
        cout<<feet<<"feet"<<inch<<"inch";
    }
};
int main()
{
    Distance d1(5,3) ,d2(2,7); 
    Distance d3 = d1-d2;
    d3.display();
    return 0;
}

