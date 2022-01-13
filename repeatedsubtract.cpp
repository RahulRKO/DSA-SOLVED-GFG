class Solution {
    public:
    int repeatedSubtraction(int A,int B){
        
        int step=0;
       while(A!=0 &&B!=0){
           if(A>B){
               A=A-B;
               step++;
           }
           if(B>A){
               B=B-A;
               step++;
           }
           if(A==B){
               A=A-B;
               step++;
           }
       }
       return step;
    }
};
