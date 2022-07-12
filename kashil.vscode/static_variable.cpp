#include<iostream>
using namespace std;
void use_static()
{
    static int x;
    cout<<"\n x : "<<x++;
}
int main()
{
    use_static();
    use_static();
    use_static();
    return 0;
}