public class p5{
  public static void main(String[] args) {
    char[] fir=args[0].toCharArray();
    char[] sec=args[1].toCharArray();
    int[] charset1=new int[128];
    int[] charset2=new int[128];
    for(int i=0;i<128;i++){charset1[i]=charset2[i]=0;}
    for(int i=0;i<fir.length;i++){
      charset1[(int)fir[i]]++;
    }
    for(int i=0;i<sec.length;i++){
      charset2[(int)sec[i]]++;
    }
    String ans="";
    for(int i=0;i<128;i++){
      if(charset1[i]!=0){
        for(int j=0;j<128;j++){
          if(charset2[j]!=0){
            char char1=(char)i;
            char char2=(char)j;
            ans+=Character.toString(char1)+Character.toString(char2)+" ";
          }
        }
      }
    }
    System.out.println(ans);
  }
}
