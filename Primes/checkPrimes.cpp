#include<bits/stdc++.h>

using namespace std;

bool checkPrime(int numToCheck);
vector<int> findPrimesTillMax(int numMax);
void executeCheck();
int main(){
    executeCheck();
    return 0;
}
bool checkPrime(int numToCheck){
    bool isPrime = true;
    for(int i=2;i*i<=numToCheck;i++){
        if(numToCheck%i==0){
            isPrime=false;
            break;
        }
    }
    return isPrime;
}
vector<int> findPrimesTillMax(int numMax){
    vector<int> primeVector;
    switch (numMax)
    {
    case 0:
    case 1:
        return primeVector;
        break;
    }
    for(int i=2;i<numMax;i++){
        if(checkPrime(i)){
            primeVector.push_back(i);
        }
    }
    return primeVector;

}
void executeCheck(){
    int numMax;
    vector<int>Primes;
    std::cout<<"Enter range"<<endl;
    std::cin>>numMax;
    Primes = findPrimesTillMax(numMax);
    std::cout<<endl<<"Displaying Primes till "<<numMax<<endl;
    for(int i=0;i<Primes.size();i++){
        std::cout<<Primes[i]<<endl;
    }
}