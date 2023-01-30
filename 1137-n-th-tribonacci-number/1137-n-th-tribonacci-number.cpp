class Solution {
public:
    int tribonacci(int n) {
        if(n==0) return 0;
        if(n==1) return 1;
        else {
            int a =0, b=1 , c=1;
            
            for(int i=3; i<=n; i++){
                int temp= c; 
                c+= (a+b);
                a =  b;
                b = temp;
            }
            return c;
        }
    }
};