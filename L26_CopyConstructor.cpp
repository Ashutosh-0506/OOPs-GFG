//***********************************ASHUTOSH KUMAR***********************************//
/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥

Karmanye vadhikaraste Ma Phaleshu Kadachana,
Ma Karmaphalaheturbhurma Te Sangostvakarmani,

The meaning of the verse is :—
You have the right to work only but never to its fruits.
Let not the fruits of action be your motive, nor let your attachment be to
inaction
*/
#include <bits/stdc++.h>
using namespace ::std;
#include <iostream>
#include <string.h>
using namespace std;
class student
{
    int rno;
    char name[50];
    double fee;

public:
    student(int, char[], double);
    student(student &t) // copy constructor
    {
        rno = t.rno;
        strcpy(name, t.name);
        fee = t.fee;
    }
    void display();
};

student::student(int no, char n[], double f)
{
    rno = no;
    strcpy(name, n);
    fee = f;
}

void student::display()
{
    cout << endl
         << rno << "\t" << name << "\t" << fee;
}

int main()
{
    student s(1001, "Manjeet", 10000);
    s.display();

    student manjeet(s); // copy constructor called
    manjeet.display();

    return 0;
}

int main()
{
    return 0;
}