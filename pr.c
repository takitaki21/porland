	#include <stdio.h>
        int stack[100];
		int p,i;
		int a,b;
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

		int clac(char *c){ 
		  	while(*c){
		  		 switch (*c) { 
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

		              case '=': printf("%d\n",pop() );
		       return 0;

		              default : push(atoi(c));
		              break;
		            }	 
		      c++;      
		    }
		    return pop();
		}
		
		
 int main(){
	char c[100];		
	scanf("%s",*c);
	printf("%d\n", clac(c) );
	}