public class rectangle extends tetragon{
	rectangle(){
		edge1 = 0;
		edge2 = 0;
		edge3 = 0;
		edge4 = 0;
		angleDeg = 90;
	}
	rectangle(double edge1, double edge2){
		this.edge1 = edge1;
		this.edge2 = edge2;
		this.edge3 = edge1;
	 	this.edge4 = edge2;
	 	angleDeg = 90;
	}
	@Override
	public String toString(){
		return "rectangle with edges: " + edge1 + " and " + edge2; 
	}
}