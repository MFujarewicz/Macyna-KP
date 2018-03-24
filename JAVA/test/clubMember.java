public class clubMember extends person{
	int id;

	clubMember(){
		super();
		id = 0;
	}

	clubMember(String name, int age, int height, String job, int id){
		super(name, age, height, job);
		this.id = id;
	}

	@Override
	public String toString(){
		return super.toString() + " " +id;
	}

	public int getId(){
		return id;
	}
	
}