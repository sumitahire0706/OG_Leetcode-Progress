class Solution {
public:
    bool isPalindrome(int x) 
    {
        long digit=0 ,pali=0,num2=x;
        if(x>=0){
            while(x!=0){
            digit=x%10;
            pali=pali*10+digit;
            x=x/10;
            }
        }else{
            return false;
        }
        
        return pali==num2;
        
    }
};