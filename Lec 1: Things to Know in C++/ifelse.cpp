//write a problem that takes an input of age and prints if you are adult or not 
//>=18,yes;
//,18,no 

// #include<bits/stdc++.h>

// using namespace std;
// int main(){
//     int age;
//     cin>>age;
//     if(age>=18){
//         cout<<"You are adult";
//     }
//     else{
//         cout<<"you are not adult";
//     }

//     return 0;
// }
 



// A school has the following rules for the grading system:
// a. Below 25 – F
// b. 25 to 44 – E
// c. 45 to 49 – D
// d. 50 to 59 – C
// e. 60 to 79 – B
// f. 80 to 100– A

// Ask the user to enter marks and print the corresponding grade.

// #include<bits/stdc++.h>

// using namespace std;
// int main(){

//     int marks;
//     cin>>marks;
//     if(marks<=25){
//         cout<<"F";
//     }
//     else if(marks<=44){
//         cout<<"E";
//     }
//     else if(marks<=49){
//         cout<<"D";
//     }
//     else if(marks<=59){
//         cout<<"C";
//     }
//     else if(marks <=79){
//         cout<<"B";
//     }
//     else if(marks <=100){
//         cout<<"A";
//     }

//     return 0;
// }


/*
Take the age from the user and then decide accordingly

1. If age < 18,
   print-> "not eligible for job"

2. If age >= 18 and age <= 54,
   print-> "eligible for job"

3. If age >= 55 and age <= 57,
   print-> "eligible for job, but retirement soon."

4. If age > 57
   print-> "retirement time"
*/


#include<bits/stdc++.h>

using namespace std;
int main(){

int age;
cin>>age;

if(age<18){
    cout<<"not eligible for job";
}
else if(age<=57){
    cout<<"eligible for job";
    if(age>=55){
        cout<<"  retirement soon";
    }
}
else{
    cout<<"retirement time";
}


    return 0;
}






#include<bits/stdc++.h>

using namespace std;
int main(){

    return 0;
}