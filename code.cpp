#include <iostream>

using namespace std;

void swap(int *a , int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


void sorted(int n[],int k)
{
    
    for(int i=0;i<k-1;i++)
    {
        int count=0;
      for(int j=0;j<k-i-1;j++)
      {
          if(n[j]>n[j+1])
          {
          swap(&n[j],&n[j+1]);
          count+=1;
              
          }
          
      }
      if(count==0)
          {
              break;
          }
    }
}

int main()
{
    int k ,s, n[50];
    cout<<"Enter the limit"<<endl;
    cin>>k;
    cout<<"Enter the lenght of subarray"<<endl;
    cin>>s;
    cout<<"enter the elements"<<endl;
    for(int i=0;i<k;i++)
    {
        cin>>n[i];
    }
    sorted(n,k);
    
    int sum=0;
    for(int i=1;i<=s;i++)
    {
        sum=sum+n[k-i];
    }
    cout<<"max sub array sum is upto k terms "<<sum;
    
}
