public class shapetest{
	public static void main(String[] args) {
		shape s1 = new circle(3);
		System.out.println(s1.getArea());
		System.out.println(s1.getPerimeter());

		shape s2 = new rectangle(10, 20);
		System.out.println(s2.getArea());
		System.out.println(s2.getPerimeter());

		shape s3 = new square(10);
		System.out.println(s3.getArea());
		System.out.println(s3.getPerimeter());

		shape s4 = new rhombus(10, 45);
		System.out.println(s4.getArea());
		System.out.println(s4.getPerimeter());

		shape s5 = new pentagon(10);
		System.out.println(s5.getArea());
		System.out.println(s5.getPerimeter());

		shape s6 = new hexagon(10);
		System.out.println(s6.getArea());
		System.out.println(s6.getPerimeter());
	}
}