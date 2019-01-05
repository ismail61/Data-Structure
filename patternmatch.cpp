#include <bits/stdc++.h>
using namespace std ;
void patternmatch(char *str , char *pat ) {
    int ls = strlen(str) ;
    int lp = strlen(pat) ;
    int i , j , c = 0 ;
    for( i = 0 ; i < ls - lp ; i ++ ) {
        for( j = 0 ; j < lp ; j ++ ) {
            if( str[i+j] != pat[j])
                break ;
        }
        if( j == lp ) {
                cout<<"Pattern found at "<<i+1<<" location"<<endl;
                c ++ ;
        }
    }
    if( c == 0 ) cout<<"Pattern not found\n"<<endl;
}
int main() {

    char *str = "what not to do" ;
    char *pat = "no" ;
    patternmatch(str , pat) ;
return 0 ;
}

