#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    long l;
    char c;
    float f;
    double d;
    cin>>n>>l>>c>>f>>d;
    cout<<n<<endl<<l<<endl<<c<<endl;
    cout<<setprecision(3)<<f<<endl;
    cout<<setprecision(9)<<d;
}
