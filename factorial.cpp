// tested in cpp.sh

#include <iostream>
#include <string>
using namespace std;

auto factorial(auto n){
/********** Obsolete
    if(n < 1){
        return 1;
    } else {
        return n*factorial(n - 1);
    }
************/
    // Many thanks to @presariohg for showing me a more beautiful way to find n! ~
long long result = 1;
    for(int i = 1; i <= n; i++){
        result *= i;
    }
return result;
}

int main()
{
 long long int x = 0;
   cout << "Enter a positive, whole number: ";
   cin>>x;
   cout << x << "! is equal to " << factorial(x);
 return 0;
}
