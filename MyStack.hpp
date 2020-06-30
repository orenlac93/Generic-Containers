#pragma one
#include<vector>
#include<stdexcept>

using namespace std;

template <typename T>
class MyStack 
{
    private:
        vector<T> data; 

    public:
        void push(T const&);
        void pop();
        T top() const;
        bool isEmpty() const
        {
            return data.empty();
        }     

};

template <typename T>
void MyStack<T>::push(T const& var)
{
    data.push_back(var);
}

template <typename T>
void MyStack<T>::pop()
{
    if(data.empty())
    {
        throw out_of_range("Stack is empty!");
    }
    data.pop_back();
}

template <typename T>
T MyStack<T>::top() const
{
    if(data.empty())
    {
        throw out_of_range("Stack is empty!");
    }
    return data.back();
}

