public class pentagon extends shape{
	double edge;
	
	pentagon(){
		edge = 0;
	}
	pentagon(double edge){
		this.edge = edge; 
	}

	public double getArea(){
		return (edge*edge*Math.sqrt(5*(5+2*Math.sqrt(5))))/4;
	}
	public double getPerimeter(){
		return edge * 5;
	}

	@Override
	public String toString(){
		return "pentagon with edge: " + edge; 
	}
}