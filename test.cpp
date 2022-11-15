#include<iostream>
#include <fstream>
#include<string>
#define size 10000
using namespace std;

int main()
{   string l1[size],l2[size]; 
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q11.txt"); 
    ifstream ansfile("a11.txt");
    while(!quesfile.eof()) 
    {
        getline(quesfile,line); 
        l1[i] = line;
        i++;
    }
    while (!ansfile.eof()) 
    {
        getline (ansfile,line); 
        l2[k] = line;
        k++;
    }
    for(int q=0;q<ans.length();q++)
    {
        cout<<l2[q]<<endl;
    }
    quesfile.close(); 
    ansfile.close(); 
}