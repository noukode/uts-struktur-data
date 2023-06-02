#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> stack_satu;
    stack_satu.push(1);
    stack_satu.push(2);
    stack_satu.push(3);
    stack_satu.push(4);
    stack_satu.push(5);
    stack_satu.push(6);
    
    stack<int> stack_dua;
    stack_dua.push(6);
    stack_dua.push(5);
    stack_dua.push(4);
    stack_dua.push(3);
    stack_dua.push(2);
    stack_dua.push(1);
    
    if (stack_satu.size() != stack_dua.size()){
        cout << "Stack satu dan Stack dua tidak memiliki nilai yang sama";
    }else{
        bool status = true;
        while(!stack_satu.empty()){
            if(stack_satu.top() != stack_dua.top()){
                status = false;
                break;
            }else{
                stack_satu.pop();
                stack_dua.pop();
            }
        }
        if(status){
            cout << "Stack satu dan Stack dua memiliki nilai yang sama";
        }else{
            cout << "Stack satu dan Stack dua tidak memiliki nilai yang sama";
        }
    }
}