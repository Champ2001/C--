#include<bits/stdc++.h>
using namespace std;
// // 3
// // 321
// // 321
// // 321
// // int main(){
// //     int n;
// //     cin>>n;
// //     int row=1;
// //     while (row<=n)
// //     {
// //         int col=1;
// //         while (col<=n)
// //         {
// //             cout<<n-col+1;
// //             col=col+1;
// //         }
// //         cout<<endl;
// //         row=row+1;
// //     }
    
// // }

// // 3
// // 123
// // 456
// // 789
// // int main(){
// //     int n;
// //     cin>>n;
// //     int row=1;
// //     int count =1;
// //     while (row<=n)
// //     {
// //         int col=1;
        
// //         while (col<=n)
// //         {
// //             cout<<count;
// //             count=count+1;
// //             col=col+1;
// //         }
// //         cout<<endl;
// //         row=row+1;
// //     }
    
// // }
// // 1
// // 12
// // 123
// // 1234
// // 12345
// // int main(){
// //     int n;
// //     cin>>n;
// //     int row=1;
// //     while (row<=n)
// //     {
// //         int col=1;
        
// //         while (col<=row)
// //         {
// //             cout<<col;
// //             col=col+1;
// //         }
// //         cout<<endl;
// //         row=row+1;
// //     }
    
// // }
// // *
// // **
// // ***
// // ****
// // *****
// // int main(){
// //     int n;
// //     cin>>n;
// //     int row=1;
// //     while (row<=n)
// //     {
// //         int col=1;
        
// //         while (col<=row)
// //         {
// //             cout<<"*";
// //             col=col+1;
// //         }
// //         cout<<endl;
// //         row=row+1;
// //     }
    
//! There might be an error here
// // }
// 1
// 22
// 333
// 4444
// 55555
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=row)
//         {
//             cout<<row;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
    
// }
// 1
// 23
// 456
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     int count=1;
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=row)
//         {
//             cout<<count;
//             count =count+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// 1
// 23
// 345
// 4567
// 56789
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int value=row;
//         int col=1;
        
//         while (col<=row)
//         {
//             cout<<value;
//             value+=1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// 
// 1
// 21
// 321
// 4321
// 54321
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=row)
//         {
//             cout<<row-col+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// AAA
// BBB
// CCC
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=n)
//         {
//             char ch=('A'+row-1);
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// ABC
// ABC
// ABC
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=n)
//         {
//             char ch=('A'+col-1);
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// ABC
// DEF
// GHI
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char start='A';
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=n)
//         {
//             char ch=(start);
//             start=start+1;
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// ABC
// DEF
// GHI
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char start='A';
//     while (row<=n)
//     {
//         int col=1;
        
//         while (col<=n)
//         {
//             char ch=(start);
//             start=start+1;
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// ABC
// DEF
// GHI
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char start='A';
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=n)
//         {
//             cout<<start;
//             start+=1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// // }
// ABC
// BCD
// CDE
// Formula comes out to be row+col-1=1.So we have to map this formula to "A".So taking 'A'-1 on both sides this formula comes out.
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         while (col<=n)
//         {
//             char ch=row+col-2+'A';
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// A
// AB
// ABC
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;
//         char ch='A';

//         while (col<=row)
//         {
//             cout<<ch;
//             ch+=1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// A
// BB
// CCC
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while (row<=n)
//     {
//         int col=1;

//         while (col<=row)
//         {
//             char ch='A'+row-1;
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// A
// BC
// DEF
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     char start='A';

//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             cout<<start;
//             start=start+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// A
// BC
// CDE
// int main(){
//     int n;
//     cin>>n;
//     int row=1;

//     while (row<=n)
//     {
//         int col=1;
//         while (col<=row)
//         {
//             char ch=row+col+'A'-2;
//             cout<<ch;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
// D
// CD
// BCD
// ABCD
// int main(){
//     int n;
//     cin>>n;
//     int row=1;

//     while (row<=n)
//     {
//         int col=1;
//         char ch='A'+n-row;
//         while (col<=row)
//         {
//             cout<<ch;
//             ch=ch+1;
//             col=col+1;
//         }
//         cout<<endl;
//         row=row+1;
//     }
// }
//     *
//    **
//   ***
//  ****
// *****
// int main(){
//    int n;
//    cin>>n;
//    int row=1;
//    while(row<=n){
//     int space=n-row;
//     while(space){
//         cout<<" ";
//         space-=1;
//     }
//     int col=1;
//     while(col<=row){
//         cout<<'*';
//         col=col+1;
//     }
//     cout<<endl;
//     row+=1;
//    }
// }
//   *
//  **
// ***
// int main() {

//     int n;
//     cin>>n;

//     int row = 1;

//     while(row <= n) {

//         //space print karlo
//         int space = n - row;
//         while(space) {
//             cout<<" ";
//             space = space - 1;
//         }

//         //stars print karlo
//         int col = 1;
//         while( col <= row ) {
//             cout<<"*";
//             col = col + 1;
//         }
//         cout<<endl;
//         row = row + 1;
//     }
//     return 0;
// }

//    1
//   121
//  12321
// 1234321
// int main(){
//     int n;
//     cin>>n;
//     int row=1;
//     while(row<=n){
//         //spaces(1st traingle)
//         int space=n-row;
//         while(space){
//             cout<<" ";
//             space=space-1;
//         }
//         //2nd triangle
//         int col=1;
//         while(col<=row){
//             cout<<col;
//             col+=1;
//         }
//         //3rd triangle
//         int start=row-1;
//         while(start){
//             cout<<start;
//             start--;
//         }
//         cout<<endl;
//         row+=1;
//     }
// }
//Dabang pattern
// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
int main(){
    int n;
    cin>>n;
    int row=1;
    while(row <= n){
        //1st triangle
        int col=1;
        while(col<=n-row+1){
            cout<<col;
            col+=1;
        }
        //stars
        int star=row-1;
        while(star){
            cout<<"*";
            star--;
        }
        int star2=row-1;
        while(star2){
            cout<<"*";
            star2--;
        }
        //last triangle
        int count=n-row+1;
        while(count){
            cout<<count;
            count--;
        }
        cout<<endl;
        row+=1;
    }
}