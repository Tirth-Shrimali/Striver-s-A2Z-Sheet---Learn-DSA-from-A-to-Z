
#include<bits/stdc++.h>
#include<iostream>
#include<string>
using namespace std;

// void print(){
//     cout<<"Tirth";
// }

// int sum(int a,int b){
//     return a + b;
// }


void explainPair(){     //  Utility Library

    //  Single Pair OR  Simple Pair
    pair<int,int> p ={1,3};
    cout<<"Simple Pair:= "<<p.first<<" "<<p.second<<endl;
    
    //  Nested Pair
    pair<int,pair<int,int>> p1 = {1,{2,3}};
    cout<<"Nested Pair:= "<<p1.first<<" "<<p1.second.first<<" "<<p1.second.second<<endl;

    //  Pair Array
    pair<int,int> arr[] = {{1,2},{2,5},{5,1}};
    cout<<"Pair Array:= "<<arr[1].second;
}

void explainVector(){

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);
    v.emplace_back(6);
    v.emplace_back(7);
    v.emplace_back(8);
    
    vector<pair<int,int>>vec;
    
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> V(5,100);

    vector<int> v1(5,20);
    vector<int> v2(v1);


    //  Access element in Vector
    //      1.v[possition]
    //      2 v.st(position)
    //      3.iterator
    cout<<"Proffesional Way to display:= "<<v[0]<<endl;   //OR
    cout<<"Other and improfession way to display:= "<<v.at(0)<<endl;   

    //  Iterator for acces elemwnt in vector
    vector<int>::iterator it = v.begin();   //  begin = pointing to the memeory address 
    it++;   //  iterator incerase 1 to the 2nd 
    cout<<"Accesing element by iterator:= "<<*(it)<<" "<<endl;   //display 2
    
    
    it = it + 2;
    cout<<"it + 2"<<*(it)<<" "<<endl;
    
    vector<int>::iterator ite =v.end();
    cout<<"[Before] v.end():= "<<*(ite)<<" "<<endl;   //display after 2 garbage
    ite--;
    cout<<"[After] v.end():= "<<*(ite)<<" "<<endl<<endl;   //display 2
    

    vector<int>::reverse_iterator itr =v.rend();
    cout<<"[Before] v.rend():= "<<*(itr)<<" "<<endl;   //display 2
    itr--;
    cout<<"[After] v.rend():= "<<*(itr)<<" "<<endl<<endl;   //display 2
    

    vector<int>::reverse_iterator itrb =v.rbegin();
    cout<<"v.rbegin():= "<<*(itrb)<<" "<<endl;   //display 2


    cout<<"\n\nDisplay the all elements of a vector:="<<endl;
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout<<*(it)<<"->";
    }
    cout<<"\nShort Cut for displying elements [AUTO]:=\n";
    //  OR
    for (auto itc = v.begin(); itc != v.end(); itc++)
    {
        cout<<*(itc)<<"->";
    }
    cout<<"\nForeach loops:=\n";
    for(auto it :v){
        cout<<it<<"->";
    }
    
    
    //  Deletion in vector
    //  Single deletion
    
    cout<<"\n\n";
    cout<<"Single Deletion:= ";
    v.erase(v.begin()+1);
    for(auto it :v){
        cout<<it<<"->";
    }
    
    //  Multiple deletion
    cout<<"\nMultiple Deletion:= ";
    v.erase(v.begin()+2,v.begin()+4);
    for(auto it :v){
        cout<<it<<"->";
    }
    cout<<"\n";


    //  Insertion an element
    vector<int>v3(2,100);
    v3.insert(v3.begin(),300);
    v3.insert(v3.begin() +1,2,10);
    for(auto it :v3){
        cout<<it<<"->";
    }
    cout<<"\n";
    vector<int> copy(2,50);
    v3.insert(v3.begin(),copy.begin(),copy.end());

     for(auto it :v3){
        cout<<it<<"->";
    }
    cout<<"\n";
    
    cout<<v3.size();
    cout<<"\n";
    for(auto it :v3){
        cout<<it<<"->";
    }
    cout<<"\n";
    v3.pop_back();  //  10
    cout<<"\n";
    for(auto it :v3){
        cout<<it<<"->";
    }
    cout<<"\n";

    //v1 -> ( 10,20 ,   v2 ->30,400())
    v1.swap(v2);    //v1 -> (30,400 ,   v2 ->(10,20))
    v.clear();
    cout<<"\n"<<v3.empty();
}

void explainList(){
    list <int> ls;
    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    for(auto lsIndex:ls){
    cout<<lsIndex;}
    // ls.emplace_back(2,4);
}

void 

int main(){
    system("cls");
    
    // int s =sum(1,2);
    // cout<<s;


    // explainPair();

    // explainVector();

    explainList();

    return 0;
}