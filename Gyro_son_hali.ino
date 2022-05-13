#include <Adafruit_MPU6050.h>
#include <Adafruit_Sensor.h>
#include <Wire.h>

Adafruit_MPU6050 mpu;


void setup() {
  Serial.begin(115200);
  if(!mpu.begin()){
    Serial.println("Gyro Bulanamadı");
    while(1){
      delay(10);
      
      }
    }
Serial.println("Gyro Bulundu");
mpu.setAccelerometerRange(MPU6050_RANGE_8_G);
mpu.setGyroRange(MPU6050_RANGE_500_DEG);
mpu.setFilterBandwidth(MPU6050_BAND_21_HZ);

delay(100);
}

void loop() {

sensors_event_t a,g,sicaklik;
mpu.getEvent(&a,&g,&sicaklik);
Serial.println("X:");
Serial.println(g.gyro.x);
Serial.println(",Y:");
Serial.println(g.gyro.y);
Serial.println(",Z:");
Serial.println(g.gyro.z);
Serial.println("Sıcaklık:");
Serial.println("temp.tempure");
Serial.println("C");


}
