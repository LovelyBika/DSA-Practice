// work upto two hourse to convert the string to integer but failed code is here below  but after using stringstream it done in three line of code

int createAtoi(string s) {
    // Write your code here.
   int i=0,n=s.size();
   int negative=0,positive=0;
    double ans=0;
     while(s[i]==' ')
       i++;
     if(s[i]=='-')
      {
        ++negative;
        i++;
    }
    if (s[i] == '+') {
        ++positive;
        i++;
    }   
    while(i<n){
   
   
    if(s[i]=='.')
       i++;
      if(s[i]>='a' && s[i]<'z' || s[i]>='A' && s[i]<='z' )
         break;
      if(s[i]>='0' && s[i]<='9'){
          ans=ans*10 +(s[i]-'0');
         
      }
      i++;
    }
    if(ans>INT_MAX)
      ans=INT_MAX;
    if(ans<INT_MIN)
     ans=INT_MIN;  
    if(negative>0)
       ans=-1*ans;
    if(negative>0 && positive>0)
           return  0;   
return (int)ans;
}   
//failed at 41 case

