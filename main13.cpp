#include<iostream>
using namespace std;

int n = 623;

int main(){
    while(n>0)
{
    int digit = n%10;
    cout << digit << " ";
    n=n/10;

}
}