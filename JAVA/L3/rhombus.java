public class rhombus extends tetragon{
	rhombus(double edge, double angleDeg){
		edge1 = edge;
		edge2 = edge;
		edge3 = edge;
		edge4 = edge;
		this.angleDeg = angleDeg; 
	}
	rhombus(){
		edge1 = 0;
		edge2 = 0;
		edge3 = 0;
		edge4 = 0;
		angleDeg  = 90;
	}
	@Override
	public String toString(){
		return "rhombus with edge: " + edge1 + " and angle: " + angleDeg + "deg";
	}
}