#include <iostream>
using namespace std;
int main()
{
    int r, s, cpool, spool;
    cin>>r;
    cin>>s;
    cpool=3.14*r*r;
    spool=s*s;
    if(cpool>spool){cout<<"I Prefer Center 1";}
    else{cout<<"I Prefer Center 2";}
	return 0;
}