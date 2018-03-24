public class person{
	
	String name;
	int age;
	int height;
	String job;

	person(){
		name = "unknown";
		age = 0;
		height = 0;
		job = "unknown";
	}
	person(int a, int h){
		age = a;
		height = h;
	}
	person(int a, int h, String j){
		age = a;
		height = h;
		job = j;
	}
	person(String name, int age, int height, String job){
		this.name = name;
		this.age = age;
		this.height = height;
		this.job = job;
	}

	public void setJob(String job){
		this.job = job;
	}

	public String getName(){
		return name; 
	}
	public int getAge(){
		return age;
	}
	public int getHeight(){
		return height;
	}
	public String getJob(){
		return job;
	}
	@Override
	public String toString(){
		return name + " " + job;
	}
	public int getId(){
		return 10107;
	}
}