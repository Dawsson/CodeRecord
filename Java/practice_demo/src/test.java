class Person{
    private String name;
    private int age;
    public Person(){
        System.out.println("一个新的Person对象被实例化！");
    }
    public Person(String name){
        this();
        this.name = name;
        System.out.println("名字："+name);
    }
    public Person(String name,int age){
        this(name);
        this.name = name;
        this.age = age;
        System.out.println("名字："+name+"   年龄："+age);
    }
}


public class test {
    public static void main(String[] args) {

        Person person1 = new Person();
        Person person2 = new Person("小王");
        Person person3 = new Person("小李",23);

      /*  String str1 = "Hello";
        String str2 = "world";
        String str3 = new String("Hello");
        System.out.println("new String(\"hello\") == new String(\"hello\"): "+
                (new String("hello") == new String("hello")));
        System.out.println("\"hello\" == \"hello\": "+("hello" == "hello"));*/
    }
}
