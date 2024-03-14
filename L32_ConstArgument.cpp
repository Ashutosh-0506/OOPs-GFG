#include<iostream>
using namespace std;

class Test
{
/* Class data members */
public:
Test(Test &t) { /* Copy data members from t*/}
Test()	 { /* Initialize data members */ }
};

Test fun()
{
	cout << "fun() Called\n";
	Test t;
	return t;
}

int main()
{
	Test t1;
	Test t2 = fun();
	return 0;
}
/*In the above codes, what’s actually happening?

It gets executed but the copy constructor is not called, instead, it calls the default constructor where the assignment operator is overloaded. Even if we have an explicitly overloaded assignment operator, it is not going to call it. 

The function fun() returns by value. So the compiler creates a temporary object which is copied to t2 using the copy constructor in the original program (The temporary object is passed as an argument to the copy constructor). The reason for compiler error is that compiler-created temporary objects cannot be bound to non-const references and the original program tries to do that. It doesn’t make sense to modify compiler-created temporary objects as they can die at any moment. (generally at the end of the full expression where it is created)

In simpler terms,

In C++, temporary objects are objects that are created during the evaluation of an expression, typically for immediate use and  to be copied to any named variable.

The error “compiler created temporary objects cannot be bound to non-const references” is related to binding temporary objects to non-const references. This means that a temporary object cannot be directly assigned to a non-const reference variable.
To resolve this, you have two options:

1. Use a const reference in the function parameter to increase the lifetime of the temporary object.
2. Use a named variable to store the value and then pass it to the function.

Using a const reference allows you to read the value but not modify it within the function, which is a common approach when working with temporary objects. Alternatively, using a named variable ensures that the object’s lifetime extends to the function call and beyond, avoiding the issue with temporaries.*/