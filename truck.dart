import 'test.dart';

class Truck extends Car{
  Car car = Car();
  
  int get  carNumber {
    return car.number;
  }
  
}
void main() {
  Truck truck = Truck();
  print(truck.carNumber);
  //cant do that without getter and setter
  //print(truck._number);
}
