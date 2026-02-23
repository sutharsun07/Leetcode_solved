class Solution {
    public int findNonMinOrMax(int[] nums) {
        Queue<Integer> q=new PriorityQueue<>();
        for(int i:nums){
            q.offer(i);
        }
        if(q.size()<=2){
            return -1;
        }
        q.poll();
        return q.poll();
    }
}