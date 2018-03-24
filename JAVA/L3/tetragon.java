abstract public class tetragon extends shape{
	protected double edge1;
	protected double edge2;
	protected double edge3;
	protected double edge4;
	protected double angleDeg;


	public double getArea(){
		return edge1 * edge2 * Math.sin(Math.toRadians(angleDeg));
	}
	public double getPerimeter(){
		return edge1 + edge2 + edge3 + edge4;
	}
}