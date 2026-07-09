class Solution {
public:
    int countPrimes(int n) {
        int c=0;
        vector<bool> prime(n+1, true);
        prime[0]=prime[1]=false;
        for(int i=2;i<n;i++){
            if(prime[i]){
                c++;
                for(int j=2*i;j<n;j=j+i){
                    prime[j]=0;
                }
            }
        }
        return c;
        

        // if(n==0||n==1){
        //     return 0;
        // }
        // vector<int>ans;
        // for(int i=2;i<n;i++){
        //     int count=0;
        //     int a=i;
        //     for(int j=1;j<=i;j++){
        //         if(a%j==0){
        //             count++;
        //         }
        //     }
        //     if(count==2){
        //         ans.push_back(a);
        //     }
        // }
        // int d=ans.size();
        // return d;
    }
};