public class MethodString {
    public static void main(String[] args) {
        // Methods to print the string 
        // String name = new String("Java");
        // System.out.println(name);
        // String nameString= "JAVA";
        // System.out.println(nameString);

        // String methods
        
         String sample = "Coding ";  //  Sample variable for all

        // 1.Length()
        System.out.println(sample+sample.length());
        // 2.toUpperCase()
        System.out.println(sample.toUpperCase());
        // 3.toLowerCase()
        System.out.println(sample.toLowerCase());
        // 4.indexOf()
        String stringIndex = "Java is a OOP Language";
        System.out.println(stringIndex.indexOf("OOP"));
        // 5.trim()
        String nonTrim = "    Coding   ";
        System.out.println(nonTrim);
        System.out.println(nonTrim.trim());
        //6.substring()
        System.out.println(sample.substring(2));
        System.out.println(sample.substring(2, 5));  // the ending index is not included
        //7.replace()
        String replaceText = "Harry";
        System.out.println(replaceText);
        System.out.println(replaceText.replace("a", "u")); 
        //8.startsWith()
        System.out.println(sample.startsWith("Co"));
        //9.endsWith()
        System.out.println(sample.endsWith("ing "));
        //10.charAt()
        System.out.println(sample.charAt(4));
        //11.lastIndexOf()
        System.out.println(sample.lastIndexOf("o",5));
        //12.equals()
        System.out.println(sample.equals("java"));
        //13.equals.IgnoreCase()
        System.out.println(sample.equalsIgnoreCase("CODING "));


        // String Concatenation
        String firstName = "Sahib";
        String secondName = "Chouhan";
        System.out.println(firstName.concat(secondName));
    }
}
