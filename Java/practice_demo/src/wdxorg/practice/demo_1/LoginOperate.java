package wdxorg.practice.demo_1;

import java.util.Scanner;

public class LoginOperate {
    private RegisterOperate registerOperate;
    public LoginOperate(RegisterOperate registerOperate){
        this.setRegisterOperate(registerOperate);
        System.out.println("********************");
        System.out.println("No.2,注册成功，请登录：");
         boolean flag = true;
        while (flag){
            Scanner scanInfo = new Scanner(System.in);
            scanInfo.useDelimiter("\n");
            System.out.print("请输入登录用户名：");
            String stuName = scanInfo.next();
            System.out.print("请输入用户密码：");
            String stuPassword = scanInfo.next();
            String info[] = {stuName,stuPassword};
            LoginStudent loginStudent = new LoginStudent(registerOperate.getStudent());
            if ("登录失败！".equals(loginStudent.login(info))){
                System.out.println("***登录的用户名或密码错误，请重试！");
            }else {
                System.out.println(loginStudent.login(info));
                flag = false;
            }
        }
    }
    public RegisterOperate getRegisterOperate(){
        return this.registerOperate;
    }
    public void setRegisterOperate(RegisterOperate registerOperate){
        this.registerOperate = registerOperate;
    }


}
