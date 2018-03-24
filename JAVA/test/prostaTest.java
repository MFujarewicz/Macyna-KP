public class prostaTest{
	public static void main(String[] args) {
		point2D a = new point2D(10,20);
		point2D b = new point2D(1,5);
		line2D ab = new line2D(a,b);


		ab.getA().setX(-12);
		System.out.println(ab.getA().getX());
		System.out.println(ab);

		line2D ac;
		ac = new line2D(a, new point2D (11, 22));
		System.out.println(ac);
		System.out.println(ac.getB());

		line2D zx = new line2D(new point2D(-100, 567), new point2D(67, 0));
		System.out.println(zx);


	}
}