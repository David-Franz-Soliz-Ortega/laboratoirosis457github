#include<iostream>
#include<stdlib.h>
using namespace std;


class factorial{
private:
	int n;
public:
	factorial(int _n){
		n=_n;
	}
	void calcular(){
		int result=1;
		for(int i=1;i<=n;i++){
			result=result*i;
		}
		cout<<result<<endl;
	};
};

int main(){
	factorial o1(3);
	factorial o2(4);
	factorial o3(5);
	o1.calcular();
	o2.calcular();
	o3.calcular();
}
