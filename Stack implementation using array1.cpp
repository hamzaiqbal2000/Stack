#include <iostream>
using namespace std;

template<class T>
class Stack {
private:
	T* s;
	int top;
	int size;
public:
	Stack() {//constructor
		//initialize
		size = 10;
		top = -1;
		s = new T[size];
	}
	Stack(int size) {//for specific size of array
		this->size = size;
		top = -1;
		s = new T[this->size];
	}

	void push(T data);
	T pop();
	int stackTop();
	int isEmpty();
	int isFull();
	void Display();
};

template <class T>
void Stack<T>::push(T data) {
	if (isFull()) {
		cout << "Stack overflow";
	}
	else {
		s[++top] = data;
	}
}

template<class T>
T Stack<T>::pop() {
	T x = -1;
	if (isEmpty()) {
		cout << "Stack Underflow";
	}
	else {
		x = s[top--];
	}
	return x;
}

template<class T>
int Stack<T>::stackTop() {
	if (isEmpty)
		return -1;
	else {
		return s[top];
	}
}

template<class T>
int Stack<T>::isEmpty() {
	if (top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}

template<class T>
int Stack<T>::isFull() {
	if (top == size - 1) {
		return 1;
	}
	else
		return 0;
}

template <class T>
void Stack<T>::Display() {
	for (int i = top; i >= 0; i--) {
		cout << s[i] << " ";
	}
	cout << endl;
}

int main() {
	Stack<char> a(5);
	a.push('a');
	a.push('b');
	a.push('c');
	a.push('d');
	a.push('e');
	a.Display();
}