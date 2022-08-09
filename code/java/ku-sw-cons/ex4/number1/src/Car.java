public class Car {
    private Engine engine = new Engine("Skyline GT-R");
    private int numWheels;
    private int numDoors;
    private boolean hasSunroof;

    public Car() {
        this.engine = new Engine("4A-GE");
        this.hasSunroof = false;
    }

    public Car(String engineModel) {
        this.engine = new Engine(engineModel);
        this.hasSunroof = false;
    }

    public String getEngine() {
        return this.engine.getModeName();
    }

    public int getNumWheels() {
        return numWheels;
    }

    public void setNumWheels(int numWheels) {
        this.numWheels = numWheels;
    }

    public int getNumDoors() {
        return numDoors;
    }

    public void setNumDoors(int numDoors) {
        this.numDoors = numDoors;
    }

    public static void main(String[] args) {
        Car car = new Car();
        System.out.println("Engine: " + car.getEngine()); //1.1
        System.out.println("numWheels: " + car.getNumWheels()); //1.2
        System.out.println("numDoors: " + car.getNumDoors()); //1.3
        System.out.println("hasSunroof: " + car.hasSunroof); //1.4

        car =new Car("BMW S14");
        car.setNumWheels(4);
        car.setNumDoors(4);
        System.out.println("Engine: "+car.getEngine()); //1.5
        System.out.println("numWheels: "+car.getNumWheels()); //1.6
        System.out.println("numDoors: "+car.getNumDoors()); //1.7
        System.out.println("hasSunroof: "+car.hasSunroof); //1.8
    }
}