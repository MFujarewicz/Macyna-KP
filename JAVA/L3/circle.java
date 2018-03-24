public class circle extends shape{
	double radius;

	circle(){
		radius = 0;
	}
	circle(double radius){
		this.radius = radius;
	}

	public double getArea(){
		return Math.PI * radius * radius;
	}
	public double getPerimeter(){
		return 2 * Math.PI * radius;
	}
	@Override
	public String toString(){
		return "circle with radius: " + radius;
	}
}