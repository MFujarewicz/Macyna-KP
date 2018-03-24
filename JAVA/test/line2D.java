public class line2D{
	protected point2D a;
	protected point2D b;

	line2D(){

	}
	line2D(point2D a, point2D b){
		this.a = a;
		this.b = b;
	}

	public point2D getA(){
		return a;
	}
	public point2D getB(){
		return b;
	}
	public String toString(){
		return a + " " + b + " length: " + getLength();
	}
	public double getLength(){
		return Math.sqrt((a.getX()-b.getX())*(a.getX()-b.getX())+(a.getY()-b.getY())*(a.getY()-b.getY()));
	}
}