public class hexagon extends shape{
	double edge;

	hexagon(){
		edge = 0;
	}
	hexagon(double edge){
		this.edge = edge;
	}

	public double getArea(){
		return (edge * edge * 3 * Math.sqrt(3))/2;
	}
	public double getPerimeter(){
		return 6 * edge;
	}
	@Override
	public String toString(){
		return "hexagon with edge: " + edge;
	}
}