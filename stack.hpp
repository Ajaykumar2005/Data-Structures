// Stack Implementation

#define MAX 50
#include <iostream>
using namespace std;

template <class T> class Stack{

    private:
        T arr[MAX];
        

    public:

        T tos=-1;
        T push(T x){

                if(!isFull()){
                    tos++;
                    arr[tos]=x;
                    return 0;
                }
                else{
                    exit(-1);
                }
        }

        T pop(){
            if(!isEmpty()){
                tos--;
                return 0;
            }
            else{
                exit(-1);
            }
        }

        T topEl(){
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

