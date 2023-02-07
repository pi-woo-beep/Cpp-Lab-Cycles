// progtram to perform operations such as compare, concatenate and length on String objects..

#include <iostream>
using namespace std;

void comp(string s1,string s2){
	int x=s1.compare(s2);
	if (x!=0){
		cout<<"Both the strings are not the same :(";
	}
	else if (x==0){
		cout<<"Both the strings are the same :)";
	}
}

string concatenate(string s1,string s2){
	string result;
	result=s1+s2;
	cout<<"The resultant string is: "<<result;
}

void length(string s){
	cout<<"The length of "<<s<<" is: "<<s.length();
}

int main(){
	int ch;
	string s, s1, s2;
	
	while (ch!=5){
		cout<<"\n\n1. Compare 2 strings. \n2. Concatenate 2 strings. \n3. Check the length of a string. \n4. Exit."<<endl;
		
		cout<<"\nEnter choice: ";
		cin>>ch;
		
		switch (ch){
			case 1:{
				cout<<"Enter string 1: ";
				cin>>s1;
				cout<<"Enter string 2: ";
				cin>>s2;
				comp(s1,s2);
				break;
			}
			case 2:{
				cout<<"Enter string 1: ";
				cin>>s1;
				cout<<"Enter string 2: ";
				cin>>s2;
				concatenate(s1,s2);
				break;
			}
			case 3:{
				cout<<"Enter string: ";
				cin>>s;
				length(s);
				break;
			}
			case 4:{
				cout<<"Thank you for using the program :)"<<endl;
				exit (0);
				break;
			}
		}
	}
	return(0);
}


/*
#include <iostream>
using namespace std;

class STRING{
    private:
        string s,s1,s2;
    public:
        void comp();
        void concatenate();
        void len();
};

void STRING::comp(){
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<"Enter string 2: ";
    cin>>s2;
    int x=s1.compare(s2);
    if (x==0){
        cout<<"Both strings are the same :)";
    }
    else{
        cout<<"Both strings are not the same :(";
    }
}

void STRING::concatenate(){
    cout<<"Enter string 1: ";
    cin>>s1;
    cout<<"Enter string 2: ";
    cin>>s2;
    cout<<"The resultant string is: "<<s1+s2;
}

void STRING::len(){
    cout<<"Enter string: ";
    cin>>s;
    cout<<"Length of string: "<<s.length();
}

int main(){
    int ch;
    
    while (ch!=5){
        cout<<"\n1. Compare 2 strings. \n2. Concatenate 2 strings. \n3. Check the length of a given string. \n4. Exit."<<endl;
        switch (ch){
            case 1:{
        }
    }
}
*/
