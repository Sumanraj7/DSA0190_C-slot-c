#include<iostream>
int main()
{
    int a[]={8,7,9,1,6,2,5,3,10,4};
    int temp;
    int s=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
         if(a[i]>a[j])
         {
           temp=a[j];
           a[j]=a[i];
           a[i]=temp;

         }
        }
       
    }
    std::cout<<"sorted array \n";
    for(int i=0;i<s;i++)
    {
        std::cout<<a[i]<<",";
    }
    return 0;
}