#include <iostream>
#include <cmath>
using namespace std;
float F(float y){
    return (pow(y, 2)*cos(y))+1;
}

int main() {
    float a=0,b=0,x=0,err=0;

        cout << "inserire estremi" << endl;
        cin >> a >> b;

    while((F(a)*F(b)>=0)) {
        cout << "inserire estremi" << endl;
        cin >> a >> b;
    }
    do {
        x=(a+b)/2;
        if (F(x)==0)
            break;
            if((F(a)*F(x))<0) {
                b=x;
            } else {
                a=x;
            }

            err=(abs((b-a)/2));
        }
     while(err>=0.00002);
   x=x*10000;
    float x1= int(x);
    float x2= x1/10000;
    cout<<x2;
    





    return 0;
}
