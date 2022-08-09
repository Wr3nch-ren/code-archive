package ex5;
public class Player implements Comparable{

    private String name;
    private int health;
    private int level;

    public Player(String name, int health, int level) {
        this.name = name;
        this.health = health;
        this.level = level;
    }

    public Player(Player player){
        this.name = player.name;
        this.health = player.health;
        this.level = player.level;
    }
    public void setName(String new_name){
        this.name = new_name;
    }

    @Override
    public String toString() {
        return name;
    }

    @Override
    public int compareTo(Object o) {
        Player clan_server = (Player) o;
        int diff = this.health - clan_server.health;
        if (diff > 0)
            return 1;
        else if(diff == 0)
            return 0;
        else
            return -1;
    }
}
