package wdxorg.practice.demo_1;

public class LoginStudent {

    private String info[];
    private RegisterStudent student;
    public LoginStudent(RegisterStudent student){
        this.setStudent(student);
    }

    public RegisterStudent getStudent(){
        return student;
    }
    public void setStudent(RegisterStudent student){
        this.student = student;
    }

    private boolean isExit(){
       return this.info.length==2;
    }
    private boolean checkLogin(String stuName,String stuPassword){
        return  stuName.equals(getStudent().getStuName()) && stuPassword.equals(getStudent().getStuPassword());
    }

    public String login(String info[]){
        this.info = info;
        String str =null;
        if (this.isExit()){
            String stuName = this.info[0];
            String stuPassword = this.info[1];
            if (this.checkLogin(stuName,stuPassword)){
                str = "欢迎<"+stuName+">登录！";
            }else {
                str = "登录失败！";
            }
        }else {
            str = "登录失败！";
        }

        return str;
    }

}
