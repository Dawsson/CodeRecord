package wdxorg.practice.demo_1;

import java.util.Scanner;

/**
 * 学生注册操作;
 *
 */
public class RegisterOperate {

    private RegisterStudent student;
    private String stuName;
    private String stuPassword;

    //构造方法进行注册操作
    public RegisterOperate(){
        boolean flag = true;
        while (flag){
            this.stuName = registerName();
            this.stuPassword = registerPassword();
            if (new StringUtil().isCorrectName(stuName) && new StringUtil().isCorrectPassword(stuPassword)){
                student = new RegisterStudent(stuName,stuPassword);//注册当前学生
                System.out.println("注册成功，密码强度为："+new StringUtil().passwordPower(stuPassword));
                flag = false;
            }else {
                System.out.println("信息错误，请重新注册！");
            }
        }
    }

    //得到此对象的student属性
    public RegisterStudent getStudent(){
        return this.student;
    }
//    public void setStudent(RegisterStudent student){
//        this.student=student;
//    }

    //用户名:3-18个字符长度，不能包含空格、单双引号、问号等特殊符号;
    private String registerName(){
           System.out.println("###No.1,注册时请注意：\n  用户名:3-18个字符长度，不能包含空格、单双引号、问号等特殊符号;");
           System.out.println("  密码:6-18位，只能包含数字、字母、特殊符号（下划线、@、#、*、！）;");
           System.out.print("请输入注册用户名(3-18位字符)：");
           Scanner scanName = new Scanner(System.in);
           scanName.useDelimiter("\n");
           return scanName.next();
    }

    //密码:6-18位，只能包含数字、字母、特殊符号（下划线、@、#、*、！）;
    private String registerPassword(){
           Scanner scanPassword = new Scanner(System.in);
           scanPassword.useDelimiter("\n");
           System.out.print("请输入密码(6-18位字符):");
          return scanPassword.next();
    }

}
