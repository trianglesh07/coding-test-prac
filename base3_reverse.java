class Solution {
    public int solution(int m) {
        int answer;
        String n = Integer.toString(m,3);
        n = new StringBuilder(n).reverse().toString();
        answer = Integer.valueOf(n,3);
        return answer;
    }
}