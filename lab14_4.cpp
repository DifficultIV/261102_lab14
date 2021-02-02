#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d){
	for(int k = 0;k < 4;k++){
	int temp = a;
	int i = rand()%4;
	if(i == 1){
		a = b;
		b = temp;
	}
	if(i == 2){
		a = c;
		c = temp;

	}
	if(i == 3){
		a = d;
		d = temp;
	}
	}
	
}