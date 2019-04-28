#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007
#define MOD 1000000007
#define count__ __builtin_popcount
#define mul(num) (num)*(num)
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define newline printf("\n")
#define ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//tuple<int,int,int>extended_eucledian(int a,int b)
//{
//    if(a==0 and b==0) return make_tuple(0,1,0);///gcd=0,x=1,y=0
//    if(a==b)return make_tuple(b,0,1);///gcd=b/a,x=0,y=1
//    if(a==0)return make_tuple(b,0,1);///gcd=b,x=0,y=1
//    if(b==0)return make_tuple(a,1,0);///gcd=b,x=1,y=0
//    int gcd,x,y;
//    tie(gcd,x,y)=extended_eucledian(b%a,a);
//    return make_tuple(gcd,(y-(b/a)*x),x);///gcd=gcd,x=y-(b/a)*x,y=x
//}
tuple<int,int,int>extended_eucledian(int a,int b)
{
    if(a==0) return make_tuple(b,0,1);
    int gcd,x,y;
    tie(gcd,x,y)=extended_eucledian(b%a,a);
    return make_tuple(gcd,(y-(b/a)*x),x);
}
int modInverse(int a,int m)
{
    int x,y;
    tuple<int,int,int>t = extended_eucledian(a,m);
    int gcd = get<0>(t);
    x = get<1>(t);
    if(gcd!=1)
    {
        printf("Inverse doesn't exits\n");
    }
    else
    {
        y = (x%m+m)%m;
        //cout<<y<<endl;
    }
    return y;
}
void Chinese_Remainder_Theorem(int num[],int rem[],int k)
{
    int prod=1;
    for(int i=0;i<k;i++)
    {
        prod*=num[i];
    }
    //cout<<prod;
    int result = 0;
    for(int i=0;i<k;i++)
    {
        int pp = prod/num[i];
        result += rem[i]*modInverse(pp,num[i])*pp;
        //cout<<modInverse(pp,num[i])<<endl;
    }
    cout<<result%prod<<endl;
}
int main()
{
    int num[] = {3,4,5};
    int rem[] = {2,3,1};
    int k = sizeof(num)/sizeof(num[0]);
    Chinese_Remainder_Theorem(num,rem,k);
}
