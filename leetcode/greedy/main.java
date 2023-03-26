public class main {
    public static void main(String[] args) {
        Solution s = new Solution();
        // System.out.println(s.isMatch("aa", "a"));
        // System.out.println(s.isMatch("aa", "*"));
        // System.out.println(s.isMatch("cb", "?a"));
        // System.out.println(s.isMatch("adceb", "*a*b"));
        System.out.println(s.isMatch("abcabczzzde", "*abc???de*"));
    }
}
