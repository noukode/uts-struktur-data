#include <iostream>
#include <stack>

using namespace std;

int main(){

    //declare stack 1
    stack<int> stack_satu;
    stack_satu.push(1);
    stack_satu.push(2);
    stack_satu.push(3);
    stack_satu.push(4);
    stack_satu.push(5);
    stack_satu.push(6);
    
    //declare stack 2
    stack<int> stack_dua;
    stack_dua.push(6);
    stack_dua.push(5);
    stack_dua.push(4);
    stack_dua.push(3);
    stack_dua.push(2);
    stack_dua.push(1);
    
    //pengecekan ukuran / panjang stack
    if (stack_satu.size() != stack_dua.size()){
        cout << "Stack satu dan Stack dua tidak memiliki nilai yang sama";
    }else{
        //looping stack selama stack 1 masih memiliki value
        bool status = true;
        while(!stack_satu.empty()){
            // pengecekan tiap value antara stack 1 dan 2
            if(stack_satu.top() != stack_dua.top()){
                status = false;
                break;
            }else{
                //menghapus 1 value dari stack
                stack_satu.pop();
                stack_dua.pop();
            }
        }

        ///pengecekan hasil status dari pengecekan tiap value di dalam stack
        if(status){
            cout << "Stack satu dan Stack dua memiliki nilai yang sama";
        }else{
            cout << "Stack satu dan Stack dua tidak memiliki nilai yang sama";
        }
    }
}