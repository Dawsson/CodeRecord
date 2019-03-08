package wdxorg.practice.demo_1;

public class Pets extends GoodsInfo{

    private String name; //宠物名字
    private String kinds; //宠物种类
    private double price;  //宠物价格
    private int petAge;  //宠物价格
    private String petColor;  //宠物颜色
    public Pets(String name,String kinds,String petColor,int petAge,double price){
       this.name = name;
       this.kinds = kinds;
       this.price = price;
       this.petAge = petAge;
       this.petColor = petColor;
    }

    //覆写getter()方法：
    @Override
    public String getName() {
        return this.name;
    }
    @Override
    public String getKinds() {
        return this.kinds;
    }
    @Override
    public double getPrice() {
        return this.price;
    }
    @Override
    public int getPetAge() {
        return this.petAge;
    }
    @Override
    public String getPetColor() {
        return this.petColor;
    }

    //覆写equals()方法
    @Override
    public boolean equals(Object object){
        if (this == object){
            return true;
        }
        if (!(object instanceof Pets)){
            return false;
        }
        Pets pet = (Pets)object; //向下转型
        if (pet.getName().equals(this.name) && pet.getKinds().equals(this.kinds)
                && pet.getPetColor().equals(this.petColor) && pet.getPetAge()==this.petAge
                && pet.getPrice()==this.price){
            return true;
        }else {
            return false;
        }
    }

    //覆写toString()方法
    @Override
    public String toString(){
        return "宠物名字："+this.getName()+";  种类："+this.getKinds()+";  颜色："+this.getPetColor()
                +";  年龄："+this.getPetAge()+"岁;  价格："+this.getPrice()+"¥.";
    }
}
