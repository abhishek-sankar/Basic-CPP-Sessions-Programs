#include<bits/stdc++.h>

using namespace std;

long findFactorialTillNumber(long number);
void keepTakingInputsFromUser();

int main(){
keepTakingInputsFromUser();
    return 0;
}

long findFactorialTillNumber(long number){
    if(number==0){
        return 1;
    }else{
        std::cout<<number<<endl;
        return number*findFactorialTillNumber(number - 1);
    }
}

void keepTakingInputsFromUser(){
    string number;
    long factorial;
    do{
        std::cout<<"Enter number whose factorial is to be found. (enter exit to exit)"<<endl;
        getline(std::cin,number);
        if(number.compare("exit")==0){
            std::cout<<"You have chosen to exit"<<endl;
            exit(0);
        }
        int numberAsInt = std::stoi(number);
        factorial = findFactorialTillNumber(numberAsInt);
        std::cout<<"The factorial of "<<numberAsInt<<" is "<<factorial<<endl;
    }while(true);
    
}

