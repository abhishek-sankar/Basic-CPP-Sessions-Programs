#include<bits/stdc++.h>
using namespace std;

bool checkPalindrome(int number);
void keepAskingForNumbersFromTheUser();

int main(){
    keepAskingForNumbersFromTheUser();
    return 0;
    }

bool checkPalindrome(int number){
    int backupNumber = number;
    int reversal = 0;
    int lastDigitTakenUningMod = 0;
    for(auto i=0;backupNumber>0;i++){
        lastDigitTakenUningMod = backupNumber%10;
        backupNumber /=10;
        reversal = reversal*10 + lastDigitTakenUningMod;
        }
    if(reversal == number){
        return true;
        }
    return false;
    }

void keepAskingForNumbersFromTheUser(){
    string number;
	do{
    std::cout<<"Enter a number (enter exit to exit)"<<endl;
    getline(std::cin,number);
    if(number.compare("exit")==0){
        std::cout<<"You have chosen to exit"<<endl;
        exit(0);
    }else{
        int numberAsInt = std::stoi(number);
    	if(checkPalindrome(numberAsInt)){
    	    std::cout<<"Yes, "<< numberAsInt <<" is a palindrome"<<endl;
    	}else{
    	    std::cout<<"No, "<< numberAsInt <<" is not a palindrome"<<endl;
    		}
    	}
	}while (true);
		
	}
