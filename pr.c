	#include <stdio.h>
int stack[100];
int a,b,i,p,w;
char c[100];

void push(int i){
	stack[p++]=i;
	i++;
}

int pop() {
	int i;
	p--;
	i=stack[p-1];

	return(i);
}

int main(){ 
	stack = 0;


	while(1){
		switch (stack.charAt(i)) { 

			case '+':
			a=pop();
			b=pop();
			push(b+a);
			break;

			case '-':
			a=pop();
			b=pop();
			push(b-a);
			break;

			case '*':
			a=pop();
			b=pop();
			push(b*a);
			break;

			case '/':
			a=pop();
			b=pop();
			if (a==0)
				break;
            push(b/a);
			break;

			default : 
			break;
		}	      
	}
	return pop();
}


