//3:. Write a  program to find sum of all even and odd numbers between 1 to n. 
#include <iostream>
using namespace std;

int main() {
    int n,i,sum=0;
    cout << "Enter a positive integer: ";
    cin >> n;
    for(i=0;i<=n;i++){
        sum=sum+i;
    }
    cout<<"Sum of all numbers between 1 to "<<n<<" is "<<sum<<endl;
    return 0;
}