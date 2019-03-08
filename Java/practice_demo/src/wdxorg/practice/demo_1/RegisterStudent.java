package wdxorg.practice.demo_1;

/**
 * 学生注册信息:
 * 需注册学生的姓名和密码；
 */
 public class RegisterStudent {

     private String stuName;
     private String stuPassword;
    public RegisterStudent(){
    }
    public RegisterStudent(String stuName,String stuPassword){
        this.setStuName(stuName);
        this.setStuPassword(stuPassword);
    }
    public String getStuName(){
        return stuName;
    }
    public void setStuName(String stuName){
        this.stuName = stuName;
    }

    public String getStuPassword(){
        return stuPassword;
    }
    public void setStuPassword(String stuPassword) {
        this.stuPassword = stuPassword;
    }
}
