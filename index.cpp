#include<iostream>
#include <fstream>
#include<string>
#define size 10000
using namespace std;

class score
{ 
    protected:
    int sc=0;
    public:
    //to store score info
    void s();
};

class category:public score
{   string l1[size],l2[size]; 
    int cat;
    public:
    //to choose a category
    void choose1(); //objective
    void choose2(); //subjective
    
    //to read the questions from the file and display
    void ques1(); //objective
    void ques2(); //subjective
    //to take answer form the user
    void read();
    void q1();void q2();void q3();void q4();void q5();void q6();
    void q11();void q22();void q33();void q44();void q55();void q66();

};

class mode:public category
{   int c,rep;
    public:
    void cont();
    //to choose a mode
    void m();
}; 
void mode::cont()
{
        cout<<"\nDO YOU WANT TO CONTINUE??1.yes 2.no: ";
        cin>>rep;
        switch(rep){
        case 1: m();break; 
        case 2: break;
        default: cout<<"enter 1 for yes and 2 for no";cont();
    }
}

void mode::m()
{
    cout<<"choose a mode"<<endl;
    cout<<"press 1.objective(mcq)"<<endl;
    cout<<"press 2.subjective"<<endl;
    cout<<"enter: ";
    cin>>c;

    switch(c)
    {
        case 1: choose1(); break;
        case 2: choose2(); break;
        default: cout<<"wrong choice";
    }
    cont();
}

void category:: choose1() //objective
{
    cout<<"choose a category: "<<endl;
    cout<<"1.science"<<endl;
    cout<<"2.sports"<<endl;
    cout<<"3.music"<<endl;
    cout<<"4.literature"<<endl;
    cout<<"5.technology"<<endl;
    cout<<"6.conundrums"<<endl;
    cin>>cat;
    ques1(); //objective
}

void category:: choose2() //subjective
{cout<<"choose a category: "<<endl;
    cout<<"1.science"<<endl;
    cout<<"2.sports"<<endl;
    cout<<"3.music"<<endl;
    cout<<"4.literature"<<endl;
    cout<<"5.technology"<<endl;
    cout<<"6.conundrums"<<endl;
    cin>>cat;
    ques2(); //subjective
}

void category::ques1() //objective
{
    switch(cat)
    {
        case 1: q1();break;
        case 2: q2();break;
        case 3: q3();break;
        case 4: q4();break;
        case 5: q5();break;
        case 6: q6();break;
        default:cout<<"choose a valid category";
    }
}

void category::ques2() //subjective
{
    switch(cat)
    {
        case 1: q11();break;
        case 2: q22();break;
        case 3: q33();break;
        case 4: q44();break;
        case 5: q55();break;
        case 6: q66();break;
        default:cout<<"choose a valid category";
    }
}

void category::q1()
{   cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q1.txt"); 
    ifstream ansfile("a1.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; cin>>ans;
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q2(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q2.txt"); 
    ifstream ansfile("a2.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; cin>>ans;
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q3(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q3.txt"); 
    ifstream ansfile("a3.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; cin>>ans;
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q4(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q4.txt"); 
    ifstream ansfile("a4.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" ";cin>>ans;
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q5(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q5.txt"); 
    ifstream ansfile("a5.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; cin>>ans;
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q6(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q6.txt"); 
    ifstream ansfile("a6.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" ";cin>>ans;
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q11(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; getline(cin,ans);
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q22(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q22.txt"); 
    ifstream ansfile("a22.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; getline(cin,ans);
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}
void category::q33(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q33.txt"); 
    ifstream ansfile("a33.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; getline(cin,ans);
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);

        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q44(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q44.txt"); 
    ifstream ansfile("a44.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; getline(cin,ans);
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q55(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q55.txt"); 
    ifstream ansfile("a55.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<" "; getline(cin,ans);
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void category::q66(){
    cout<<"TYPE \"stop\" TO STOP THE GAME\n";
    int i=0,k=0; 
    string line,ans; 
    ifstream quesfile("q66.txt"); 
    ifstream ansfile("a66.txt");
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
    for(int j=0;j<i;j++)
    {   cout<<l1[j]<<": "; getline(cin,ans);
        for(int q=0;q<ans.length();q++)
        {
            ans[q]=tolower(ans[q]);
        }
        if(ans==l2[j]) {cout<<"correct!!\n";sc++;}
        else if (ans == "stop" || ans == "STOP"){break;}
        else cout<<"incorrect\n";}
    quesfile.close(); 
    ansfile.close(); 
    s();
}

void score::s()
{
    cout<<"YOUR TOTAL SCORE IS: "<<sc;
}

int main()
{   mode obj;
    cout<<"~ WELCOME TO THE QUIZ GAME ~ "<<endl;
    obj.m();
    return 0;
}