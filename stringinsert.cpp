#include <bits/stdc++.h>

using namespace std;

string insert_string(string str, int pos, string sub_str)
{
    string new_str;
    for(int i=0; i<pos; i++)
    {
        new_str=new_str+str[i];
    }

    new_str=new_str+sub_str;

    for(int i=pos; i<str.size(); i++)
    {
        new_str=new_str+str[i];
    }

    return new_str;
}

int main()
{
    string str, sub_str;
    int pos;

    cout<<"Enter the main string:"<<endl;
    getline(cin,str);
    cout<<"Enter the position you want to insert the substring:"<<endl;
    cin>>pos;
    cout<<"Enter the substring you want to insert:"<<endl;
    cin>>sub_str;
    str=insert_string(str, pos, sub_str);
    cout<<str<<endl;

    return 0;
}
