package wdxorg.practice.demo_1;

/**
 * 父类设计：接口
 * Goods: 商品
 */
public interface Goods {
    public abstract String getName();  //商品名字
    public abstract double getPrice();  //商品价格
    public abstract String getKinds();  //种类

    public abstract int getPetAge(); //动物年龄
    public abstract String getPetColor(); //动物的颜色
    public abstract int getBookYear();  //图书出版年份
}
