package wdxorg.practice.demo_1;

public class ShopSystemMain {
    public static void main(String[] args) {

//        System.out.println("Hello!");
//        RegisterOperate registerOperate = new RegisterOperate();
//        LoginOperate loginOperate = new LoginOperate(registerOperate);
        Pets p = new Pets("小花","猫","花色",3,23.1);
        Goods goods = (Goods)p;
        System.out.println(goods.getPetAge()+"\t"+goods.getBookYear());
        System.out.println(goods.toString());






    }
}
