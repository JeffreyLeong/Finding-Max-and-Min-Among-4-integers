#include<iostream>
using namespace std;

// Function declaration
void order_num(int& max, int& min);

int main()
{
    char repeat;
    // Loop the program until the users says yes or no
    do{

    } while ((repeat='Y') || (repeat = 'y'));
        // int a=20, b=-9;
        // order_num(a, b);
        // cout << a << ", " << b << endl;
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