/* using class to process shopping list for a Departmental
Store. The list include details such as the code, name, price and quantity of
each item and perform the operations like adding & deleting items to the list
and printing the total value of a purchase order. */

#include <iostream>
#include <string>
using namespace std;
const int n=50;

class store{
    private:
        int code[n], quantity[n], count;
        string name[n];
        float price[n];
    public:
        void Count(){
            count=0;
        }

        void add_item(){
        	cout<<"Enter number of items to add: ";
        	int n;
        	cin>>n;
        	for (int i=0; i<n; i++){
				cout<<"\nEnter item code: ";
            	cin>>code[count];
            	cout<<"\nEnter item name: ";
            	cin>>name[count];
           		cout<<"\nEnter item price: ";
           		cin>>price[count];
            	cout<<"\nEnter quantity: ";
           		cin>>quantity[count];
            	cout<<"\nItem added to the list :)"<<endl;
            	count++;
            }
        }

        void delete_item(){
            int c;                                              //item code
            cout<<"\nEnter item code: ";
            cin>>c;
            for (int i=0; i<count; i++){
                if (code[i] == c){
                    quantity[i]=0;
                }
            }
        }
        void total_purchase(){
            cout<<"\n\n\n"<<"Code\t Name\t Price\t Quantity\t Cost\n\n"<<endl;
            for (int i=0; i<count; i++){
                if(quantity[i]!=0)
                    cout<<code[i]<<"\t"<<name[i]<<"\t"<<price[i]<<"\t\t"<<quantity[i]<<"\t"<<price[i]*quantity[i]<<endl;
            }
            float cost=0;
            for (int i=0; i<count; i++){
                cost=cost + (price[i]*quantity[i]);
            }
            cout<<"\nTotal cost= Rs. "<<cost<<endl;
            cout<<"\n";
        }
};

int main(){
    store order;
    order.Count();
    int ch;

    while (ch!=5){
    	cout<<"\n1. Add item to the list. \n2. Delete item from the list. \n3. Purchase Bill. \n4. Exit."<<endl;
    	cout<<"Enter choice: ";
    	cin>>ch;
        switch (ch){
            case 1:{
            	order.add_item();
				break;
			}
            case 2:{
                order.delete_item();
                break;
            }
            case 3:{
                order.total_purchase();
                break;
            }
            case 4:{
                cout<<"Thank you :)";
                exit (0);
            }
        }
    }
    return 0;
}
