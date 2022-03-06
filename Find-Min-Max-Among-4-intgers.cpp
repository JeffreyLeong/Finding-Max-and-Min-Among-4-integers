#include<iostream>
using namespace std;

// Function declaration
void order_num(int& max, int& min);

int main()
{
    int a=20, b=120;
    order_num(a, b);
    cout << a << ", " << b << endl;
 return 0;
}


// Function definition
void order_num(int& max, int& min){
    if (max  >=min) {
        return;
    }
    int temp = max;
    max = min;
    min = temp;
}