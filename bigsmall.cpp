#include <iostream> 
using namespace std;

int main () { 
    int num[5], big, small; 

    cout << "Enter 5 numbers\n"; 
    for (int i = 0; i < 5; i++) { 
    cin >> num[i]; 
} 
    big = num[0]; 
    for (int i = 0; i < 5; i++) { 
    if (num[i] > big) { 
    big = num[i];
} 
}
    cout << "\nGreatest number is: " << big <<endl; 

    small = num[0]; 
    for (int i = 0; i < 5; i++) { 
    if (num[i] < small) {
    small = num[i];
}
}
    cout << "Smallest number is: " << small <<endl; 
   return 0; 
} 
