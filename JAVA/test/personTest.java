class personTest{
	public static void main(String[] args) {
		person p1 = new person("Arek Dębski", 20, 172, "progamer");
		System.out.println(p1);

		clubMember p2;
		p2 = new clubMember("Kamil Król", 20, 999, "Górnik/Kopacz/Szczurołap", 1234567);
		System.out.println(p2);

		person p3;
		p3 = new clubMember();
		System.out.println(p3);
		System.out.println(p3.getId());
	}
}