



class Solution
{
    public:
    string reverse(string str)
    { 


int n = str.length();
       
       int low  =  0 ;
       int high =  n-1;
       
       while(low<=high)
       {
          //agar alphabet nhi hai low aage badh
           if(!((str[low]>=65 && str[low]<=90) || (str[low]>=97 && str[low]<=122)))
           {
               low++;
               continue;
           }
           //agar alphabet nhi hai high piche aa
           if(!((str[high]>=65 && str[high]<=90) || (str[high]>=97 && str[high]<=122)))
           {
               high--;
               continue;
           }
           
           swap(str[low],str[high]);
           low++;high--;
       }
       return str;
    } 
};

