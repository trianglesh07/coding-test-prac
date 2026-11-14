class Solution {
    public int[] solution(String s) {
        int l = s.length();
        int[] answer = new int[l];
        
        for (int i=0; i<l; i++){
            char m = s.charAt(i);
            boolean flag = true;
            
            for (int j=i-1; j>=0; j--){
                if (m == s.charAt(j)){
                    answer[i] = i-j;
                    flag = false;
                    break;
                }
            }
            
            if (flag){
                answer[i] = -1;
            }
        }
        return answer;
    }
}