public class Player {
    public static int globalDeathCount = 0;
    private int deathCount = 0;
    private int level;
    private String jobClass;
    private double baseHealth;
    private double health;
    private Weapon weapon;
    private Armor armor;

    public Player(int level,String jobClass, Weapon weapon, Armor armor) {
        this.level = level;
        this.jobClass = jobClass;
        this.weapon = weapon;
        this.armor = armor;

        if(jobClass.equalsIgnoreCase("Warrior")){
            this.baseHealth = 2;
        } else if (jobClass.equalsIgnoreCase("Wizard")) {
            this.baseHealth = 1;
        }else {
            this.baseHealth = 1.5;
        }

        this.health = (this.baseHealth + this.level) * 100 + this.getArmor().getDefendPoint();
    }

    public void levelUp(){
        this.level++;
    }

    public int getDeathCount() {
        return deathCount;
    }

    public void death(){
        globalDeathCount++;
        deathCount++;
    }

    public Weapon getWeapon(){
        return weapon;
    }

    public Armor getArmor() {
        return armor;
    }

    public double getHealth() {
        return health;
    }
}