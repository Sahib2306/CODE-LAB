package Questions;

public class QuestionStrings {
    public static void main(String[] args) {
           // Q1. convert String into Lowercase
        String textLower = "HELLO THIS IS JAVA PROGRAMING";
        System.out.println(textLower.toLowerCase());

        // Q2. replace spaces with underscore
        String textReplace = "Sahib Chouhan";
        System.out.println(textReplace.replace(" ","_"));

        // Q3. identify spaces in the java code or string
        String identify = "Java is a   usefull language";
        System.out.println(identify.indexOf("  "));
        System.out.println(identify.indexOf("   "));

    }
}
