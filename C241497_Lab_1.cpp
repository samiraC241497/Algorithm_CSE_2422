#include <bits/stdc++.h>
using namespace std;
void scana(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

void printa(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"    ";
	}
}

int linear_search(int a[],int n,int key)
  {
  	for(int i=0;i<n;i++)
	{
		if(a[i]==key)
		{
		  	return i;
		}
	}
	return -1;
  }


int main()
{
int n;
cin>>n;
int a[n];
scana(a,n);
int key;
cin>>key;
int pos= linear_search(a,n,key);
if (pos != -1)
        cout << "Element found at index " << pos << endl;
    else
        cout << "Element not found" << endl;

    return 0;
return 0;
}


