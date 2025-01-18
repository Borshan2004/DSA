// #include<bits/stdc++.h>

// using namespace std;

// void printName(string name){
//     cout<<"hey"<<  name  <<endl;
// }

// int main(){
//     string name;
//     cin>>name;
//     printName(name);

//     string name2;
//     cin>>name2;
//     printName(name2);
//     return 0;
// }


//take two numbers and print its sum

// #include<bits/stdc++.h>


// int sum(int num1,int num2){
//     int num3 = num1 + num2;
//     return num3;  
// }

// using namespace std;
// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     int result = sum(num1,num2);
//     cout<<result;



//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;


// void sum(int num1,int num2){
//     int num3 = num1 +num2 ;
//     cout<<num3;
// }

// int main(){
//     int num1,num2;
//     cin>>num1>>num2;
//     sum(num1,num2);
//     return 0;
// }


#include<bits/stdc++.h>

int maxx(int num1, int num2){
    if(num1>=num2)return num1;
    else return num2;
}

using namespace std;
int main(){

    int num1,num2;
    cin>>num1>>num2;
    int ans = maxx(num1,num2);
    cout<<ans;


    return 0;
}