public class zadanie{
	public static void main(String[] args){

		if (args.length == 0)
		{
			System.out.println("brak argumentow");
			System.exit(0);
		}

		char[] whatShapes = args[0].toCharArray();

		//okrag o 
		//czwrokat c
		//piaciokat p
		//szesciokat s
		double edge;
		double edge1;
		double edge2;
		double edge3;
		double edge4;
		double angle;
		double radius;


		int argumentCount = 0;
		int shapesCount = 0;
		shape[] shapes = new shape[whatShapes.length];


		double a;
		int badArgs = 0;
		for (int i = 1; i<args.length; i++){
			try{
				a = Float.parseFloat(args[i]);
				if (a<=0){
					badArgs++;
				}
			}
			catch(Exception ex){
				badArgs++;
			}
		}

		double[] doubleArgs = new double[args.length-badArgs];

		int goodArgsCounter = 0;
		for (int i=1; i<args.length; i++){
			try{
				a = Float.parseFloat(args[i]);
				if (a<=0){
					Float.parseFloat("wiem że to glupi sposob ale dziala");
				}
				doubleArgs[goodArgsCounter] = Float.parseFloat(args[i]);
				goodArgsCounter++;
			}
			catch(Exception ex){
				System.out.println("Usunieto argument " + i + ": " + args[i] + " powod: " + "nie liczba dodatnia");
			}

		}

		int argsLeft = goodArgsCounter;


		for (char s: whatShapes){
			switch(s){
				case 'o':{
					if(argsLeft<1){
						System.out.println("nie stworzono okregu: za malo argumentow");
						break;
					}
					argsLeft--;

					//System.out.println("okrag");
					radius = doubleArgs[argumentCount];//Float.parseFloat(args[argumentCount]);
					argumentCount++;
					shapes[shapesCount] = new circle(radius);
					shapesCount++;
					break;
				}
				case 'c':{
					if(argsLeft<5){
						System.out.println("nie stworzono czwrokata: za malo argumentow");
						break;
					}
					argsLeft = argsLeft - 5;
					//System.out.println("czwrokat");
					edge1 = doubleArgs[argumentCount];
					argumentCount++;
					edge2 = doubleArgs[argumentCount];
					argumentCount++;
					edge3 = doubleArgs[argumentCount];
					argumentCount++;
					edge4 = doubleArgs[argumentCount];
					argumentCount++;
					angle = doubleArgs[argumentCount];
					argumentCount++;

					if(edge1 == edge2 && edge2 == edge3 && edge3 == edge4 && angle == 90){
						shapes[shapesCount] = new square(edge1);
						shapesCount++;
					}else
					if(edge1 == edge2 && edge3 == edge4 && angle == 90){
						shapes[shapesCount] = new rectangle(edge1, edge3);
						shapesCount++;
					}else
					if(edge1 == edge2 && edge2 == edge3 && edge3 == edge4 && angle>0 && angle<180 && angle != 90){
						shapes[shapesCount] = new rhombus(edge1, angle);
						shapesCount++;
					}else{
						System.out.println("nie stworzono czwrokata: zle argumenty");
					}

					break;
				}
				case 'p':{
					if(argsLeft<1){
						System.out.println("nie stworzono pieciokata: za malo argumentow");
						break;
					}
					argsLeft--;
					//System.out.println("pieciokat");
					edge = doubleArgs[argumentCount];
					argumentCount++;
					shapes[shapesCount] = new pentagon(edge);
					shapesCount++;
					break;
				}
				case 's':{
					if(argsLeft<1){
						System.out.println("nie stworzono szesciokata: za malo argumentow");
						break;
					}
					argsLeft--;
					//System.out.println("szesciokat");
					edge = doubleArgs[argumentCount];
					argumentCount++;
					shapes[shapesCount] = new hexagon(edge);
					shapesCount++;
					break;
				}
				default:{
					System.out.println(s + " - nieznany symbol");
					break;
				}
			}

		}


		shape s;
		for (int i=0; i<shapesCount; i++){
			s = shapes[i];
			System.out.println("\n" + s);
			System.out.println("Pole: " + s.getArea());
			System.out.println("Obwod: " + s.getPerimeter());
		}
	}
}