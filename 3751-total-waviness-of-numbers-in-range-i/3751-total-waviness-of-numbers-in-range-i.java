class Solution {
    public int totalWaviness(int num1, int num2) {
        int cnt=0;
        for(int i=num1;i<=num2;i++){
            if(i<100) continue;
            String s=String.valueOf(i);
            for(int j=1;j<s.length()-1;j++){
                int a=s.charAt(j-1)-'0';
                int b=s.charAt(j)-'0';
                int c=s.charAt(j+1)-'0';
                if((a<b && b>c) || (b<a && b<c)){
                    cnt++;
                }
            }
        }
        return cnt;
    }
}