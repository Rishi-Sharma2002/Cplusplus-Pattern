#include<iostream>
#include<string>
using namespace std;

void solid_rectangle()
{   
    int n;
    cout << "\nEnter the size:- ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = 0; j <n; j++)
            cout <<" * ";
        cout <<endl;
    }
}
void hollow_rectangle()
{
    int n, m;
    cout << "\nEnter the size:- ";
    cin>>n>>m;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=m; j++)
        {
            if(i == 1  || i==n || j == 1 || j==m)
                cout <<" * ";
            else
                cout<<"   ";
        }
            cout<<endl;
    }
}
void half_pyramid()
{   
    int n;
    cout<< "\nEnter the size:- ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j =1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
void inverted_half_pyramid()
{
    int n;
    cout<< "\nEnter the size:- ";
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        for (int j = n-i; j >0; j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}
void hollow_inverted_half_pyramid()
{
    int n;
    cout<< "\nEnter the size:- ";
    cin>>n;
    for (int i =0; i<=n; i++)
    {
        for (int j =n+1-i; j>=0; j--)
        {
            if(i==0 || i==n-1 || j==0 || j==n-1)
            {
                cout<<"*";
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
}
void Pyramid()
{
    int n;
    cout<< "\nEnter the size:- ";
    cin>>n;

    for (int i =1, k=0; i<=n; i++, k=0)
    {
        for (int j =n-i; j>0; j--)
            cout<<" ";
        while(k!=2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }

}
void inverted_full_pyramid()
{
    int n;
    cout<< "\nEnter the size:- ";
    cin>>n;
    for (int i = 1, k=n-1; i <=n; i++, k=n-i)
    {
        for (int j =0; j <i; j++)
            cout<<" ";
        while(k!=2*i-1)
        {
            cout<<"*";
            k--;
        }
        cout<<endl;
    }
}
int main()
{   system("clear");
    int n;
    cout<<"Enter the choice: - \n1.Solid Rectangle \n2.Hollow Rectangle\n3.Half Pyramid\n4.Inverted half pyramid\n5.Hollow inverted half pyramid\n6.Full Pyramid\n7.Inverted Full Pyramid";
    cout<<"\n\nEnter your choice:- ";
    cin>>n;

    switch(n)
    {
        case 1: 
            solid_rectangle();
            break;
        case 2:
            hollow_rectangle();
            break;
        case 3:
            half_pyramid();
            break;
        case 4:
            inverted_half_pyramid();
        case 5:
            hollow_inverted_half_pyramid();
            break;
        case 6:
            Pyramid();
        case 7:
            inverted_full_pyramid();
        default:
            break;
    }
    return 0;
}