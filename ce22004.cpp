#include<bits/stdc++.h>
using namespace std;

class item
{
public:
    int n;
    int itemcode[50];
    float itemprice[50];
    int sum;

    void itemlist()
    {

        cout<<"enter itemnumber:";
        cin>>n;
        cout<<"enter itemcode itemprice";
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cin>>itemcode[i]>>itemprice[i];
        }
        cout<<"total list:"<<endl;
        cout<<"code"<<" "<<"price";
        cout<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<itemcode[i]<<" "<<itemprice[i];
            cout<<endl;
        }

    }
    void add()
    {
        int choice;
        cout<<"enter how much item want to buy:";
        cin>>choice;
        sum=0;
        for(int i=0; i<choice; i++)
        {
            int x;
            cout<<"enter product code:";
            cin>>x;
            cout<<"code"<<" "<<"price";
            cout<<endl;
            cout<<itemcode[x-1]<<" "<<itemprice[x-1];
            sum+=itemprice[x-1];
            cout<<endl;


        }
    }
    void deletevalue()
    {
        int ch;
        cout<<"enter how much item want to delete:";
        cin>>ch;
        for(int i=0; i<ch; i++)
        {
            int a;
            cout<<"enter item code:";
            cin>>a;

                sum-=itemprice[a-1];

        }
    }
        void display()
        {
            cout<<"code"<<" "<<"price";
            cout<<endl;

            for(int i=0; i<n; i++)
            {
                cout<<itemcode[i]<<" "<<itemprice[i];

                cout<<endl;
            }
            cout<<"total value:"<<sum;
        }
    };
    int main()
    {

        item shopping;
        shopping.itemlist();
        shopping.add();
        shopping.deletevalue();
        shopping.display();
    }
