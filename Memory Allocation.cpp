#include<iostream>
#include<vector>
#include<numeric>
#include <bits/stdc++.h>
using namespace std;
class Database{
public:
int n,q;
vector<double> Thread;
vector<double> Thread2;
void Initilization(){
cout<<"Enter the number of people"<<endl;
cin>>n;
cout<<"Threads to each process call: "<<endl;
for(int i=0;i<n;i++){
    cin>>q;
    Thread.push_back(q);
} 
sort(Thread.begin(),Thread.end(),greater<int>());}
double Availabe_Memory;
double Final, Final1,Final3,Final4,Final5,sum;
void Memory_Mangenment(){
cout<<"What is the Availabe_Memory: "<<endl;
cin>>Availabe_Memory;
Final1=accumulate(Thread.begin(),Thread.end(),0); 
for(int i=0;i<n;i++){
     Final=(Thread[i]/Final1)*Availabe_Memory;
     Thread2.push_back(Final);
     Final3=Final3+Final;
     
      }
    
     if(Final3<=Availabe_Memory)
     { cout<<" Memroy Allocated to process successfully"<<endl;}
     else{
         cout<<"error"<<endl;
         }
    Final5=accumulate(Thread2.begin(),Thread2.end(),0);
     for(int i=0;i<n;i++){
             Final4=(Thread2[i]/Final5)*Availabe_Memory;
             sum=sum+Final4; }
     if(sum<=Availabe_Memory){
         cout<<"Memroy Allocated to process successfully"<<endl;
     } 
} };

int main()
{
    Database d;
    d.Initilization();
    d.Memory_Mangenment();
    
    return 0; }