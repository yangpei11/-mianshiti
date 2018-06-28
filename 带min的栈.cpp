#include <iostream>

using namespace std;
const int MAXN = 2000;
const int inf = 1<<30;

struct  stack
{
	int min;
	int top;
	int data[MAXN]
};

void initStack(stack &s){
	s.min = inf;
	s.top = 0;
}

void push(stack &S, int x){

	data[top++] = x - S.min;

	if(x < S.min){
		S.min = x;
	}
}

int pop(stack &S){}{
	if(data[--top] >= 0){
		return S.data[top] + S.min;
	}

	else{
		int temp = S.min;
		S.min = S.min - S.data[top]
		return temp;
	}
}