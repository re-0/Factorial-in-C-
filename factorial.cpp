// tested in cpp.sh

#include <iostream>
#include <string>
using namespace std;

auto factorial(auto n){
    if(n < 1){
        return 1;
    } else {
        return n*factorial(n - 1);
    }
}

int main()
{
 long long int x = 0;
   cout << "Enter a positive, whole number: ";
   cin>>x;
   cout << x << "! is equal to " << factorial(x);
 return 0;
}
