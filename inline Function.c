#include<iostream>

using namespace std;

inline float mul(float x,float y)
{
    return (x*y);
}
inline double div(double p,double q)
{
    return (p/q);
}
int main()
{
    float a= 126230.522;
    float b= 5451.521;

    cout<<mul(a,b)<<"\n";
    cout<<div(a,b)<<"\n";

    return 0;
}
