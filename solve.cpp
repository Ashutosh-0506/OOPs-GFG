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
bool solve(int a,int b,int c,int d)
{
    if(a==c && b==d)
    {
        return true;
    }
    if(a>c ||b>d)
    {
        return false;
    }
    return (solve(a+b,b,c,d)||solve(a,a+b,c,d));
}
int main()
{
    cout<<solve(1,4,5,9)<<endl;
    return 0;
}