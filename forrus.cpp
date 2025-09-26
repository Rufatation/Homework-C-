#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z;
	//1
	int a = 450/(60+90);
	cout << a << endl;
	//2
	float b = 10000.0*(1.12+0.12+0.12);
	cout << b << endl;
	//3
	double c = 220.0/60.0;
	cout << c << endl;
	//4
	cin >> d >> e >> f;
	g = (d+e+f)/2.0;
	h = sqrt(g*(g-d)*(g-e)*(g-f));
	cout << h << endl;
	//5
	cin >> m >> v;
	e = (m*pow(v,2.0))/2.0;
	cout << e << endl;
	//6
	cin >> b >> p;
	s = b*(1.0+p);
	cout << s << endl;
    return 0;
}
