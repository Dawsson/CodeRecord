package wdxorg.practice.demo_1;

public class Books extends GoodsInfo{
    private String name;  //书的名字
    private String kinds;  //书的种类
    private double price;  //书的价格
    private int bookYear;  //书的出版年份
    public Books(String name,String kinds,int bookYear,double price){
        this.name = name;
        this.kinds = kinds;
        this.price = price;
        this.bookYear = bookYear;
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
    public int getBookYear(){
        return this.bookYear;
    }



    //覆写equals()方法
    @Override
    public boolean equals(Object object){
        if (this == object){
            return true;
        }
        if (!(object instanceof Books)){
            return false;
        }
        Books book = (Books)object; //向下转型
        if (book.getName().equals(this.name) && book.getKinds().equals(this.kinds)
                && book.getPrice()==this.price && book.getBookYear()==this.bookYear){
            return true;
        }else {
            return false;
        }
    }

    //覆写toString()方法
    @Override
    public String toString(){
        return "图书名字："+this.getName()+";  种类："+this.getKinds()
                +";  出版年份："+this.getBookYear()+"年;  价格："+this.getPrice()+"¥.";
    }

}
