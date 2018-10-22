/*
in the first of half of this chapter you will learn how to define
pointers and access the values to which they point.

With a variable you can access a value at a fixed location.

With a pointer, the location can vary.

This capability has many useful applications.

Pointers can be used to share values among different parts of a program. 

Pointers allow allocation of values on demand.

Pointers are necessary for implementing programs that manipulate objects
of multiple related types. 

A pointer tells you where a value is located, not what a value is.

Like a pointer that points to different locations on a blackboard,
a C++ pointer can point to different memory locations.


The pointer denotes the location of a variable in memory.

The pointer variable is initialized with the location (also called the address)
of the variable harrys_account.

double* account_pointer = &harrys_account;

The type double*, or "pointer to double", denotes the location of a double
variable.

The & operator, also called the address operator, yields the location of a
variable. Taking the address of a double variable yields a value of type double*.

(1) double account_pointer = &harrys_account

(2) account_pointer = &joint_account


ACCESSING VARIABLES THROUGH POINTERS

The * operator accesses the variable to which a pointer points. When you have
a pointer, you will want to access the variable to which it points.

The * operator is used to read or update the variable to which a pointer points.

When used with pointers, the * operator has no relationship with multiplication.

In the C++ standard, this operator is called the indirection operator, but it
is also commonly called the dereferencing operator. 







#include <iostream>
	

using namespace std;

int main()

{

	
   double harrys_account = 0;
	

   double joint_account = 2000;


   double* account_pointer = &harrys_account; 


   *account_pointer = 1000; // Initial deposit


   *account_pointer = *account_pointer - 100; // Withdraw $100

   cout << "Balance: " << *account_pointer << endl; // Print balance


   // Change the pointer value

   account_pointer = &joint_account; 



   // The same statements affect a different account



   *account_pointer = *account_pointer - 100; // Withdraw $100

   cout << "Balance: " << *account_pointer << endl; // Print balance

	

   return 0;
	
}

--------------------------------------------------------------------------

void sort2(double* p, double* q)
{
    
}


int main()

{
    sort2(&x, &y)

}

*/




/*
Author: Farhan Pushan
Course: CSCI-136
Instructor: maryash
Assignment: pointers7.1

I'm learning about pointers and starting to work with them. 

i want to work with brains.
*/

#include <iostream>
#include <string>
using namespace std;

void sort2(double* p, double* q)
{
    if (*p <= *q)
    {
        *p = *q;
    }
    //return *p;
}

int main()
{
    double x = 1;
    double y = 2;
    sort2(&x, &y);
    
    cout << x <<" "<< y << endl;
}












