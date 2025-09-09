// practicing some imperative C++
// see README for instructions
#include <iostream>
#include <string>
#include <cmath>
#include <random>

using namespace std;

bool isPrime(int x);
int closestPrime(int x);
/** You should put in a main for testing, but then comment it out for submission.
 * The test.cpp file will include the main in your submission. You do not edit the test.cpp 
 * file. The only file to edit is app.cpp**/
/****
int main(){
    std::mt19937 engine(std::random_device{}());
    std::uniform_int_distribution<> dist(1, 10000);
    int tmp = dist(engine);
    cout << tmp << " " << isPrime(tmp) << endl;
    cout << tmp << " " << closestPrime(tmp) << endl;
    return 0;
}
****/

bool isPrime(int x){
    if(x < 2){
        return false;
    }
    for(int i = 2; i*i <= x; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}
int closestPrime(int x){
    if(isPrime(x)){
        return x;
    }
    int toReturn = x + 1;
    while(!isPrime(toReturn)){
        toReturn++;
    }
    return toReturn;
}
