public class crypto_solver {

    static String a="send";
    static String b="more";
    static String c="money";
    static int[]charToNumber=new int[26];
    static boolean[]numberUsed=new boolean[10];

    public static int stringToNumber(String str){
        int num=0;
        for(int i=0;i<str.length();i++){
            char ch=str.charAt(i);
            int val=charToNumber[ch-'a'];
            num=num*10+val;
        }
        return num;
    }
//     S E N D     =   9 5 6 7
// +   M O R E     =   1 0 8 5
// = M O N E Y     = 1 0 6 5 2

    public static int cryptoSolver(String str,int idx){
        if(idx==str.length()){
            int x=stringToNumber(a);
            int y=stringToNumber(b);
            int z=stringToNumber(c);
            if(x+y==z&&charToNumber[a.charAt(0)-'a']!=0&&charToNumber[b.charAt(0)-'a']!=0&&charToNumber[c.charAt(0)-'a']!=0){
                System.out.println(x+" + "+y+" = "+z);
                return 1;
            }
            return 0;
        }
        int count=0;
        char ch=str.charAt(idx);
        for(int i=0;i<10;i++){//demnorsy
            if(numberUsed[i]==false)
            {
                numberUsed[i]=true;
                charToNumber[ch-'a']=i;
                count+=cryptoSolver(str, idx+1);
                // charToNumber[str.charAt(idx)-'a']=0;
                numberUsed[i]=false;
            }
        }
        return count;
    }
    
    public static void isCryptoValid(){
        String str=a+b+c;
        int[]freq=new int[26];
        for(int i=0;i<str.length();i++)
            freq[str.charAt(i)-'a']++;
        str="";
        for(int i=0;i<26;i++)
            if(freq[i]>0)
                str+=(char)(i+'a');
        System.out.println(str);
        System.out.println(cryptoSolver(str, 0));
    }
    public static void main(String[] args) {
        isCryptoValid();
    }
    
}
