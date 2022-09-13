#include <iostream>
#include <string>

// Stack Implementation

#define MAX 100
#include <iostream>
using namespace std;

class Stack{

    private:
        char arr[MAX];
        

    public:

        int tos=-1;
        char push(char x){

                if(!isFull()){
                    tos++;
                    arr[tos]=x;
                    return 0;
                }
                else{
                    exit(-1);
                }
        }

        char pop(){
            if(!isEmpty()){
                tos--;
                return 0;
            }
            else{
                exit(-1);
            }
        }

        char topEl(){
            if(!isEmpty()){
                return arr[tos];
            }
            else{
                exit(-1);
            }
        }

        bool isEmpty(){
            if(tos==-1){
                return true;
            }
            else{
                return false;
            }
        }

        bool isFull(){
            if(tos==MAX-1){
                return true;
            }
            else{
                return false;
            }
        }  
};

class paranthesiss{
	private:
        string A;
        Stack paranthesis ;
        

    public:

        paranthesiss(string A){
            this->A= A;
            cout<<bool(parant());    
    }
		bool parant(){
		    for(int i=0;i<=A.length();i++){
    		   
				if(A[i]=='[' || A[i]=='{' || A[i]=='('  ){
					paranthesis.push(A[i]);
					
				
				}
				
				else if(A[i]==']' || A[i]=='}' || A[i]==')'){
				      
					if((A[i]==')' && paranthesis.topEl()=='(') || (A[i]=='}' && paranthesis.topEl()=='{') || (A[i]==']' && paranthesis.topEl()=='['))  {
					  
						paranthesis.pop();
					
					}
					else{
						return false;
					}
				
				}
			
				
				
			}
    		return true;
			    		
		}
};

int main(){
	string A;
    cin>>A;
    paranthesiss obj(A);
	return 0;
	}
