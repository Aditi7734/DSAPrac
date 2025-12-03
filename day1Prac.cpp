/*finding the maximum element in the array*/
//DSA DAY2 Problem 1

#include<iostream>
using namespace std;
int main(){
cout<<"Enter boxes you have: ";
int max;
int n;
cin>>n;
cout<<"Enter weights of boxes: ";
int arr[20];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
max=arr[0];
for(int i=1;i<n;i++){
if(arr[i]>max){
     max=arr[i];
}
cout<<"Your heaviest box is: ";
cout<<max;


}


}


/*#include<iostream>
using namespace std; 
int main(){
cout<<"Enter boxes you have: "; 
int max;
int n; 
cin>>n; 
cout<<"Enter weights of boxes: "; int arr[20];
for(int i=0;i<n;i++){ if(arr[i]>arr[i+1]){ max=arr[i]; } cout<<"Your heaviest box is: "; cout<<max;
}
} */












//KEY LEARNING FROM THIS PROBLEM
/* 
1.without input array hold garbage values so comparisons fail
2.Always initialize variables before using them, otherwise results are unpredictable
3.Accessing arr[i+1] at the last index causes out‑of‑bounds error; correct logic is to compare with current maximum
4.Printing inside the loop gives multiple outputs before the max is finalized
5.Start from index 1 since index 0 is already used to initialize max









*/

