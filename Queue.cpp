// Queue Implementation

#define MAX 50
#include <iostream>
using namespace std;

template <class T> class Queue{

    private:
        T arr[MAX];
        

    public:

        int add=-1;
        int remove=-1;
        int Enqueue(T x){

                if(!isFull()){
                    
                    add++;
                    arr[add]=x;
                    return 0;
                }
                else{
                    exit(-1);
                }
                
        }

        int Dequeue(){
            if(!isEmpty()){
                remove++;
                return 0;
            }
            else{
                exit(-1);
            }
        }

        int topEl(){
            
            if(!isEmpty()){
               
                remove++;
                return arr[remove];
            }
            else{
                exit(-1);
            }
        }

        bool isEmpty(){
            if(add>remove-1){
                return false;
            }
            else{
                return true;
            }
        }

        bool isFull(){
            if(add==MAX-1){
                return true;
            }
            else{
                return false;
            }
        }  
};
int main(){
    Queue <int> obj;
    obj.Enqueue(10);
    obj.Enqueue(20);
    obj.Dequeue();
    cout<<obj.topEl();
    return 0;
}

