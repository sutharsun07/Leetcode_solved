class Solution {
    public boolean checkIfExist(int[] arr) {
        HashSet<Integer> a=new HashSet<>();
        int zero=0;
        for(int i=0;i<arr.length;i++){
            a.add(arr[i]);
            if(arr[i]==0){
                zero++;
            }
        }
        if(zero>=2){
            return true;
        }
        for(int i:arr){
            if(a.contains(i*2) && i!=0){
                return true;
            }
        }
        return false;
    }
}