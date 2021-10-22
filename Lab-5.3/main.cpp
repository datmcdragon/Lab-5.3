#include <iostream>
#include <cmath>

using namespace std;

double h(const double r);

int main()
{
 double rp, rk, z;
 int n;
    
    cout << "rp = "; cin >> rp;
    cout << "rk = "; cin >> rk;
    cout << "n = "; cin >> n;
    
 double dr = (rk-rp)/n;
 double r = rp;
    
 while (r <= rk)
  {
     z = h(1+sqrt(r))+h(1+r+pow(h(r),2))*h(1+r+pow(h(r),2));
     
        cout << r << " " << z << endl;
     r += dr;
  }
 return 0;
 }
double h(const double x)
{
 if (abs(x) >= 1)
 return (1+cos(x))/(exp(-x*2));
 else
 {
        double S=0;
        int n=0;
        double a=x;
        S = a;
 do
    {
 n++;
     double R = pow(x,3)*(3*n-2)/(3*n+1);
        a *= R;
        S += a;
    }
        while(n<5);
 return S;
 }
}

