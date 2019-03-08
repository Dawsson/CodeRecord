package wdxorg.practice.demo_1;

/**
 * 父类设计：抽象类
 * GoodsInfo: 商品信息
 * 覆写的方法体为空;
 */
public abstract class GoodsInfo implements Goods{
    //得到商品名字
   public  String getName(){
       return "";
   }

    //得到商品细分种类
    public  String getKinds(){
        return "";
    }
    //得到商品价格
   public  double getPrice(){
       return 0;
   }

    //得到动物年龄
    public  int getPetAge(){
       return 0;
    }

    //得到的动物的颜色
    public String getPetColor(){
       return "";
    }

    //得到图书出版年份
    public  int getBookYear(){
       return 0;
    }
}
