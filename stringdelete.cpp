#include <bits/stdc++.h>

using namespace std;

void delete_string(string *str, int pos, int lastpos)
{
    string new1_str,new2_str;
    for(int i=0; i<pos-1; i++)
    {
        new1_str=new1_str+(*str)[i];
    }
    int x=pos-1+lastpos;
    for(int i=x; i<(*str).size(); i++)
    {
        new2_str=new2_str+(*str)[i];
    }
    (*str)=new1_str+new2_str;
}

int main()
{
    string str;
    int pos,lastpos;

    cout<<"Enter the main string:"<<endl;
    getline(cin,str);
    cout<<"Enter the position you want to delete the string:"<<endl;
    cin>>pos;
    cout<<"Enter the last position you want to delete the string:"<<endl;
    cin>>lastpos;
    delete_string(&str, pos, lastpos);
    cout<<str<<endl;

    return 0;
}

