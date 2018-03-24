class point{
	protected int x;
	protected int y;

	point(){

	}
	point(int x, int y){
		this.x = x;
		this.y = y;
	}
	public int getX(){
		return x;
	}
	public int getY(){
		return y;
	}

	public void setX(int x){
		this.x = x;
	}
	public void setY(int y){
		this.y = y;
	}

	public String toString(){
		return "(" + x + ", " + y + ")";
	} 
}

class point3D extends point{
	int z;

	point3D(){

	}
	point3D(int x, int y, int z){
		super(x, y);
		this.z = z;
	}

	@Override
	public String toString(){
		return "(" + x + ", " + y + ", " + z + ")"; 
	}
	public int getZ(){
		return z;
	}
	public void setZ(int z){
		this.z = z;
	}
}




class konstruktory{
	public static void main(String[] args) {
		point a;
		a = new point(0,40);
		System.out.println(a);


		point3D b = new point3D(99,99,99);
		System.out.println(b);
		b.setX(10);
		b.setY(20);
		b.setZ(30);
		System.out.println(b);		
	}
}