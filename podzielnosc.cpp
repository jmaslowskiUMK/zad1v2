#include <iostream>

int nwd(int a,int b){
	while(a!=b){
		if(a>b)a-=b;
		else b-=a;
	}
	return a;
}

int main(){
	int x,y;
	std::cin>>x>>y;
	std::cout<<x<<" "<<y<<" "<<nwd(x,y);
	return 0;
}
