#include <iostream>
#include <cmath>
using namespace std;
float F(float y){
    return (pow(y, 2)*cos(y))+1;
}

int main() {
    float a,b,x,err;

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
     while(err>=pow(10,-6));
    cout.precision(5);
    cout<<x;





    return 0;
}
