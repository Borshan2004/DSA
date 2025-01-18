#include<bits/stdc++.h>

using namespace std;
int main(){
    int day;
    cin>>day;
    switch (day)
    {
    case 1:
    cout<<"Monday";
    break;

    case 2:
    cout<<"Tue";
        break;    
    
    case 3:
    cout<<"Wed";
        break;

    case 4:
    cout<<"Thu";
    break;
    
    case 5:
    cout<<"Fri";
    break;

    case 6:
    cout<<"sat";
    break;


    case 7:
    cout<<"Sun";
    break;                
    default:
    cout<<"there is no month";
        break;
    }

    return 0;
}