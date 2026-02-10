int reverse(int x){
    double num=0;
    int dig;
    while(x){
        dig=x%10;
        num=num*10+dig;
        x/=10;
    }
    if(num < INT_MIN || num > INT_MAX){
        return 0;
    }
    return num;
}