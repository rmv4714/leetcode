bool isPalindrome(int x)
    
{
    int n = x;
    if(x<0) return false;
    int c=0;
    
    while(n!=0) {   c++; n = n/10; }       
    
    n=x;
    
    int y=0;
        
    for(int i = 0; i<c; i++)
    {   
        y = (x%10)*pow(10,c-i-1) + y;
        x = x/10;            
    }
    
    if(n-y == 0)  return true;
    return false;
    
}
