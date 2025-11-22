#include <iostream>
using namespace std;
void fn(int num)
{
    int a = 0, b = 1, c, s=0;
    for (int i = 1; a<=num; i++)
    {
        cout << a << ", ";
        s=s+a;
        c=a+b;
        a=b;
        b=c;
    }
    cout << s;
}
int main()
{
    int n;
    cout << "enter number: ";
    cin >> n;
    fn(n);
    return 0;
}

