public class SimpleRPG {
    public static void main(String[] args) {
        Player pro = new Player(90, "Knight", new Weapon(100),new Armor(100));
        System.out.println(pro.getHealth());//2.1

        pro.levelUp();
        pro.levelUp();
        pro.levelUp();
        System.out.println(pro.getHealth());//2.2
        pro.death();

        Weapon ptwWeapon = new Weapon(1000);
        Armor ptwArmor = new Armor(1000);
        pro = new Player(1, "Warrior", ptwWeapon, ptwArmor);
        System.out.println(pro.getHealth());//2.3
        pro.death();

        Player noob = new Player(1, "Wizard", ptwWeapon, ptwArmor);
        pro = noob;
        noob.levelUp();
        noob.levelUp();
        noob.death();
        System.out.println(noob.getHealth());//2.4
        System.out.println(pro.getHealth());//2.5

        System.out.println(noob.getDeathCount());//2.6
        System.out.println(pro.getDeathCount());//2.7
        System.out.println(Player.globalDeathCount);//2.8
    }
}
