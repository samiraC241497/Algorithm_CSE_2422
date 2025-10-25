#include<bits/stdc++.h>
using namespace std;
void scana(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int bubble_sort(int a[],int n){
   for(int i=0;i<n;i++)
   {
   	bool flag=false;
   	for(int j=0;j<n-i-1;j++){
		if(a[j]>a[j+1])
			{
				int temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=true;
			}
   	}
   	if (!flag)
	break;
   }
}
void printa(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";;
	}
}
int main(){
    int n;
    cin>>n;
    int a[n];
    scana(a,n);
    cout<<"before sorting:";
    printa(a,n);
    cout<<endl;
    bubble_sort(a,n);
    cout<<"after sorting:";
    printa(a,n);
return 0;
}


