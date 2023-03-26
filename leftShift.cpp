// #include<bits/stdc++.h>
// using namespace std;
int leftShift(int n)
{
    int temp;
    int fact=10;
    int leftShift=0;
    while(n/10)
    {
        temp=n%10*fact;
        leftShift+=temp;
        n/=10;
        fact*=10;
    }
    return leftShift+n;
}
// int main()
// {
//     cout<<leftShift(123456);
//     return 0;
// }
