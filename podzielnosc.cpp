#include <iostream>

int main(){
	int x,y;	
	std::cin>>x>>y;
	if(x<=0 || y<=0){
		std::cout<<"wartosc niedodatnia";
		return 0;
	}
	std::cout<<x<<y;
	return 0;
}
