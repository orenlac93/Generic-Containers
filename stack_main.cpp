#include<iostream>
#include<string>
#include"MyStack.hpp"

using namespace std;

int main()
{
    MyStack<int> int_stk;
    MyStack<char> c_stk;
    MyStack<string> str_stk;

    int_stk.push(1);
    int_stk.push(2);
    int_stk.push(3);

    c_stk.push('a');
    c_stk.push('b');
    c_stk.push('c');

    str_stk.push("hello");
    str_stk.push("world");

    while(!int_stk.isEmpty())
    { 
        cout << int_stk.top() << endl;
        int_stk.pop();
    }

    while(!c_stk.isEmpty())
    { 
        cout << c_stk.top() << endl;
        c_stk.pop();
    }

    while(!str_stk.isEmpty())
    { 
        cout << str_stk.top() << endl;
        str_stk.pop();
    }

    try
    {
        int_stk.pop();  // stack is empty
    }
    catch(const exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    

    return 0;
}