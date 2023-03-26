// #include<bits/stdc++.h>
// using namespace std;
int rightShift(int n)
{
    int temp=n%10;
    int rightShift=n/10;
    int fact=1;
    while(n/10)
    {
        fact*=10;
        n/=10;
    }
    temp*=fact;
    return temp+rightShift;
}
// int main()
// {
//     int n=5;
//     int r=1234;
//     for(int i=0;i<n;i++)
//     {
//         r=rightShift(r);
//         cout<<r<<endl;
//     }
//     return 0;
// }
