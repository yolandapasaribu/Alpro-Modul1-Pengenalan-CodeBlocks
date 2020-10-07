#include <iostream>

using namespace std;

int add(int,int);

int add(int a, int b){
    int c;

    c=a+b;

    return c;
}

int main()
{
   int x=5, y=2, z;

   z=add(x,y);
   cout<<z<<endl;
    return 0;
}
