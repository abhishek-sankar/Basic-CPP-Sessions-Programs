#include<bits/stdc++.h>
using namespace std;
vector<int>populate(vector<int>searchvector);
int binarySearch(vector<int>searchVector,int leftIndex, int rightIndex,int elementToBeFound);
void execute();
int main(){
	execute();
    return 0;
}

int binarySearch(vector<int>searchVector,int leftIndex, int rightIndex,int elementToBeFound){
	if(leftIndex>=rightIndex){
		std::cout<<"Element doesnt exist in the searchVector"<<endl;
		return -1;
	}
	int midIndex = (leftIndex + rightIndex)/2;

	if(searchVector[midIndex]==elementToBeFound){
		return midIndex;
	}
	else if(searchVector[midIndex]<elementToBeFound){
		leftIndex = midIndex;
		return binarySearch(searchVector,leftIndex,rightIndex,elementToBeFound);
	}else{
		rightIndex = midIndex;
		return binarySearch(searchVector,leftIndex,rightIndex,elementToBeFound);
	}
}
vector<int>populate(vector<int>searchVector){
	for(int i=0;i<1000;i+=13){
	searchVector.push_back(i);	
	}
	return searchVector;
}
void execute(){
	string number;
	vector<int>searchVector;
	searchVector = populate(searchVector);
	do{
    std::cout<<"Enter a number (enter exit to exit)"<<endl;
    getline(std::cin,number);
    if(number.compare("exit")==0){
        std::cout<<"You have chosen to exit"<<endl;
        exit(0);
    }else{
		int numberAsInt = std::stoi(number);
		int position = binarySearch(searchVector,0,searchVector.size(),numberAsInt);
		if(position!=-1){
			std::cout<<"Element found at position "<<position<<endl;
		}else{
			std::cout<<"Element not found"<<endl;
		}
	}
	}while (true);
		
	}