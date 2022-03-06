#include<iostream>
using namespace std;

// Function declaration
void order_num(int& max, int& min);

int main()
{
    char repeat;
    int n1, n2, n3, n4;
    // Loop the program until the users says yes or no
    do{
        // Prompt user inpute for 4 numbers
        cout << "Please enter 4 intergers separated by spaces\n";

        // Receive input
        cin >> n1 >> n2 >> n3 >> n4;

        // Compare n1 to n2, swap if n2 is bigger.
        order_num(n1, n2);
        // Compare n3 to n4, swap if n4 is bigger.
        order_num(n3, n4);
        // Compare n1 to n3, swap if n3 is bigger.
        order_num(n1, n3);
        // Compare n2 to n4, swap if n4 is bigger.
        order_num(n2, n4);

        // Output results
        cout << n1 << " is the max number\n";
        cout << n4 << " is the min number\n";


        cout << "Do you want to enter another 4 numbers?\n ";
        cin >> repeat;
    } while ((repeat=='Y') || (repeat == 'y'));
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