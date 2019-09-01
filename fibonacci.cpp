#include<bits/stdc++.h>

using namespace std;

vector<int> fibonacciFind(vector<int> fibonacci,int manNum);
void getDetails();

int main(){
	
	getDetails();
	return 0;
}

void getDetails(){
	int maxNum;
	vector<int>fibonacci;
	std::cout<<"Enter the limit"<<endl;
	std::cin>>maxNum;
	fibonacci = fibonacciFind(fibonacci,maxNum);
	for(int i=0;i<fibonacci.size();i++){
		std::cout<<fibonacci[i]<<endl;
	}
}

vector<int> fibonacciFind(vector<int> fibonacci, int maxNum){

	int first, second, third;
	first = 0;
	second = 1;
	third = 1;

	switch (maxNum)
	{
	case 2:
		fibonacci.push_back(third);
	case 1:
		fibonacci.insert(fibonacci.begin(),second);
	case 0:
		fibonacci.insert(fibonacci.begin(),first);
	default:
		break;
	}
	fibonacci.push_back(1);
	fibonacci.insert(fibonacci.begin(),1);
	fibonacci.insert(fibonacci.begin(),0);
	for(auto i=3;i<maxNum;i++){
		first  = second;
		second = third;
		third  = first+second;
		fibonacci.push_back(third);
	}
	return fibonacci;
}