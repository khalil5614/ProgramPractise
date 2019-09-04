public class RepeatingString {
   static long repeatedString(String s, long n) {
      long repeat;
      int noA=0;
      for(int i=0;i<s.length();i++){
         if(s.charAt(i)=='a'||s.charAt(i)=='A')
           noA++;
       }

      repeat=((long) n/ s.length())*noA;

      for(int i=0;i<n% s.length();i++){
         if(s.charAt(i)=='a'||s.charAt(i)=='A')
            repeat++;
      }

return repeat; 

    }

     public static void main(String[] args) {
        // TODO code application logic here
         
         Scanner scanner = new Scanner(System.in);

        String s = scanner.nextLine();

        long n = scanner.nextLong();

        long result = repeatedString(s, n);
         System.out.println("No of a=" +result);
          
    }
}
