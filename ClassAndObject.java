//OOP's
class Dog
{
    String name,task;

    public void decription()
    {
        System.out.println(name+" is "+task);
    }
}

class ClassAndObject 
{
	public static void main (String[] args) 
	{
	    Dog dog1=new Dog();
	    Dog dog2=new Dog();
	    
	    dog1.name="Tom";
	    dog1.task="eating";
	    
	    dog2.name="Jack";
	    dog2.task="Running";
	    
	    dog1.decription();
	    dog2.decription();
	}
}


