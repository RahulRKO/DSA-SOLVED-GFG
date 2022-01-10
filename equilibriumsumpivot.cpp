 int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        long long sum=0;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        long long leftsum=0;
        long long rightsum=sum;
         for(int i=0;i<n;i++){
            rightsum-=a[i];
             
             if(leftsum==rightsum){
                 return i+1;
             }
             leftsum+=a[i];
        }
        return -1;
    }
