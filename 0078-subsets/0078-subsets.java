class Solution {
    HashSet<ArrayList<Integer>> set=new HashSet<>();
    void generate(int arr[],int i,ArrayList<Integer> curr){
        if(arr.length == i){
            set.add(new ArrayList<>(curr));
            return;
        }
        curr.add(arr[i]);
        generate(arr,i+1,curr);
        curr.remove(curr.size()-1);
        generate(arr,i+1,curr);
    }
    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> ans=new ArrayList<>();
        Arrays.sort(nums);
        generate(nums,0,new ArrayList<>());
        for(ArrayList<Integer> i:set){
            ans.add(i);
        }
        return ans;
    }
}