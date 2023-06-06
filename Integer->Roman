char symbol[] = {'I','V','X','L','C','D','M'};
class Solution {
public:    
    int MSB(int n){
        int ans=0;
        while(n>0){
            n = n/10;
            ans++;
        }
        return ans-1;
    }
    
    string roman(int n, int index){
        string ans = "";
        if(n==9){
            ans = symbol[2*index];
            ans += symbol[2*index+2];
        }
        else if(n>=5){
            ans = symbol[2*index+1];
            for(int i=6; i<=n; i++)
                ans += symbol[2*index];
        }
        else if(n==4){
            ans = symbol[2*index];
            ans += symbol[2*index+1];
        }
        else {
            for(int i=1; i<=n; i++)
                ans += symbol[2*index];
        }
        return ans;
    }
    
    string intToRoman(int num) {
        int msb = MSB(num);
        string ans = "";
        for(int i=0; i<=msb; i++){
            int divisor = pow(10,msb-i);
            int q = num/divisor;
            num = num%divisor;
            ans += roman(q,msb-i);
        }
        return ans;
    }
};
