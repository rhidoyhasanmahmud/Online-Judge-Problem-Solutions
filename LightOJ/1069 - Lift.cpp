#include<bits/stdc++.h>

using namespace std;

int main()

{
    
long long int T,a,b,sum,temp;
    
cin>>T;
   
 for(int i=1;i<=T;i++)
   
 {
   
 sum=0,temp=0;
       
 cin>>a>>b;
       
 temp=a-b;
        
if(a<=b)
       
 {
          
 sum = (b*4)+19;
           
printf("Case %d: %lld\n",i,sum);
      
  }
       
 else
     
   {
   
      sum = ((a+temp)*4)+19;
        
   printf("Case %d: %lld\n",i,sum);
      
  }
  
  }
 
   return 0;

}