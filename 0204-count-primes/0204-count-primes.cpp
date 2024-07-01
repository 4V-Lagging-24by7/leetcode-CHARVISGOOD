class Solution {
    // time limit got exceeded
/*private:
    bool Prime(int c){
        if(c<=1){
            return false;
        }
        for(int i=2;i<c;i++){
            if(c%i==0){
                return false;
            }
        }
        return true;
    }
    */
public:
    int countPrimes(int c){
        int counting=0;
        vector <bool>prime(c+1, true);
        prime[0]=prime[1]=false;
        for(int i=2;i<c;i++){
            if(prime[i]){
                counting++;

                for(int j=2*i;j<c;j=j+i){
                    prime [j]=0;
                }
            }
        }
        return counting++;

    }
    
};