public class square extends tetragon{
	square(){
		edge1 = 0;
		edge2 = 0;
		edge3 = 0; 
		edge4 = 0;
		angleDeg = 90;
	}
	square(double edge)
	{
		edge1 = edge;
		edge2 = edge;
		edge3 = edge;
		edge4 = edge;
		angleDeg = 90;
	}
	@Override
	public String toString(){
		return "square with edge: " + edge1;
	}
}