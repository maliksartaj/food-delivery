#include <iostream>
using namespace std;
int main(){
    int a[]={10, 20, 30, 40,50};
    int *p;
    p = a;
    cout<< *((int *)p + 3);
    return 0;
}