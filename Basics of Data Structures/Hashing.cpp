#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int hash_func(int i)
{
	return i%10;
}

int add(int ht[],int id)
{
	int pos,i;
	pos=hash_func(id);

    //If its first ELement then add it into Hash Table O(1)
	if(ht[pos]==-1)
	{
		ht[pos]=id;
		cout<<"\nELEMENT INSERTED\n";
		return 0;
	}

    //If that index contains any value then 
	else
	{
		for(i=pos+1;i!=pos;i=(i+1)%10)
		{
			if(ht[i]==-1)
			{
				ht[i]=id;
				cout<<"\nELEMENT INSERTED\n";
				return 0;
			}
		}

	}
    //To check Hash if Full...
	if(i==pos)
	cout<<"\n HASH TABLE IS FULL\n";
	return 0;

}

int deleteKey(int ht[],int id)
{
    int pos,i;
	pos=hash_func(id);
	if(ht[pos]==id)
	{
        cout<<"\nDELETED ELEMENT: "<<ht[pos];
		ht[pos]=-1;
		return 0;
	}
	else
	{
		for(i=pos+1;i!=pos;i=(i+1)%10)
		{
			if(ht[i]==id)
			{
			    cout<<"\nDELETED ELEMENT: "<<ht[i];
				ht[i]=-1;
				return 0;
			}
		}
	}
	if(i==pos)
	cout<<"\nKEY NOT FOUND\n ";
	return 0;
}

int Search(int ht[],int id)
{
    int pos,i;
	pos=hash_func(id);
	if(ht[pos]==id)
	{

		cout<<"KEY FOUND AT "<<pos<<" LOCATION\n";;
	}
	else
	{
		for(i=pos+1;i!=pos;i=(i+1)%10)
		{
			if(ht[i]==id)
			{
				cout<<"KEY FOUND AT "<<i<<" LOCATION\n";
				return 0;
			}
		}
	}
	if(i==pos)
	cout<<"\nKEY NOT FOUND\n";
	return 0;
}
int display(int ht[])
{
	int i;
	cout<<"BUCKET\t\tKEYS \t"<<endl;
	cout<<"========================"<<endl;
	for(i=0;i<10;i++)
	if(ht[i]==-1)
    {
        cout<<i<<"\t|\tNULL\n";
        cout<<"-----------------------"<<endl;
    }
	else
    {
        cout<<i<<"\t|\t"<<ht[i]<<"\n";
        cout<<"-----------------------"<<endl;
    }
	return 0;
}



int main() {

    //Initialze All contents of Hash Table as Null or -1
	int ht[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},n,ch;

	do
	{
	    cout<<"\n*****Linear Probing*****\n";
		cout<<"\n1) ADD: \n2) DELETE: \n3) SEARCH: \n4) DISPLAY: \n5) EXIT\n\n";
		cout<<"ENTER YOUR CHOICE :";
		cin>>ch;
		switch(ch)
		{
			case 1:
				cout<<"\nENTER THE INSERT KEY :";
				cin>>n;
				add(ht,n);
				break;
			case 2:
				cout<<"\nENTER THE DELETE KEY :";
				cin>>n;
				deleteKey(ht,n);
				break;
            case 3:
				cout<<"\nENTER THE SEARCH KEY :";
				cin>>n;
				Search(ht,n);
				break;
			case 4:
				display(ht);
				break;
            case 5:
                exit(0);
            default:
                cout<<"ENTER THE CORRECT CHOICE";
                break;

		}
		}while(ch!=5);
		return 0;

}