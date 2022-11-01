import java.util.*;
import java.lang.*;
class string_builtin{
Scanner k=new Scanner(System.in);
String s=k.nextLine();

System.out.println("The length of string is "+s.length());
System.out.println("String in UpperCase is "+s.toUpperCase());
System.out.println("String in LowerCase is "+s.toLowerCase());
System.out.println("Enter another string ");
String s1=k.nextLine();
String s3=s+s1;
System.out.println("The concatinated string is "+s3);
}

};