package wdxorg.practice.demo_1;

/**
 * 2.类：
 * 字符串的工具类，封装了常用字符串的判断方法：
 * 主要包括对注册时传入的用户名、密码判断的方法；
 * 判断密码时有定义较多的方法；
 * 调用了许多Character类的一些方法；
 */
public class StringUtil {

    /**
     * 方法：
     * 判断传入的用户名是否是合法的用户名
     *用户名3-18个字符长度，不能包含空格、单双引号、问号等特殊符号
     * 验证用户名格式正确时返回值isCorrect为true;否则为false.
     */
    public boolean isCorrectName(String stuName){
        boolean isCorrect=true;
        if (stuName == null) return false;
        if (stuName.length() <3 || stuName.length() > 18) return false;
        char illegalChar[] = {' ','，','。','\'','\"','?'};
        for (char ch : illegalChar){
            if (stuName.contains(Character.toString(ch))){
                isCorrect = false;
                break;
            }
        }
        return isCorrect;
    }

    /**方法：判断密码合法性
     *密码6-18位，只能包含数字、字母、特殊符号（下划线、@、#、*、！）
     */
    public boolean isCorrectPassword(String stuPassword){
        boolean isCorrect = true;
        if (stuPassword == null) return false;
        if (stuPassword.length()<6 || stuPassword.length()>18) return false;
        if (isChinese(stuPassword)) return false;
        String correctChar = "\"_@*#$!";
        for (int i=0;i<stuPassword.length();i++){
            if (!Character.isLetterOrDigit(stuPassword.charAt(i))){
                if (!correctChar.contains(Character.toString(stuPassword.charAt(i)))){
                    isCorrect = false;
                }
            }

        }
        return isCorrect;
    }

    /**判断密码强度：
     *  纯数字、纯字母时，密码强度为弱（★★☆☆☆☆）
     *  数字+字母、数字+符号、字母+符号时，密码强度为中（★★★★☆☆）
     *  同时存在三种字符时，密码强度为强（★★★★★★）
     *  若passwordPower返回值为-1，则密码的验证失败；若验证成功，则返回密码强度；
     */
    public String passwordPower(String password){
        String passwordPower = "-1";
        if (isDigit(password) || isLetter(password)){
            passwordPower = "★★☆☆☆☆";
        }else if (isLetterAndDigit(password)){
            passwordPower = "★★★★☆☆";
        }else if (containCorrectString(password)){
            passwordPower = "★★★★★★";
        }
        return passwordPower;
    }

    //判断密码时所用到的一些方法:

    public boolean isDigit(String value){
        //判断是否为纯数字
        for (int i=0;i<value.length();i++){
            if (!Character.isDigit(value.charAt(i))){
                return false;
            }
        }
        return true;
    }

    public boolean isLetter(String value){
        //判断是否为纯字母
        for (int i=0;i<value.length();i++){
            if (!Character.isLetter(value.charAt(i))){
                return false;
            }
        }
        return true;
    }

    public boolean isLetterAndDigit(String value){
        //字母和数字的混合
        for (int i=0;i<value.length();i++){
            if (!Character.isLetterOrDigit(value.charAt(i))){
                return false;
            }
        }
        return true;
    }

    public boolean containCorrectString(String value){
        //判断是否仅包含合法的字符
        String correctChar = "\"_@*#$!";
        for (int i=0;i<value.length();i++){
            if (correctChar.contains(Character.toString(value.charAt(i)))){
                return true;
            }
        }
        return false;
    }

    public boolean isChinese(char ch){
        //判断字符是否为汉字
        return ch>=0x4E00 && ch<=0x9FA5;
    }
    public boolean isChinese(String value){
        //判断字符串是否包含汉字
        if (value == null) return false;
        for (char ch:value.toCharArray()){
            if (isChinese(ch)){
                return true;
            }
        }
        return false;
    }
}
