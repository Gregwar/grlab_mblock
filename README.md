# grlab_mblock
Blocks for mblock users (Grove us, Grove motor diver, Grove 6 axis accelerometer &amp; gyroscope, Pololu encoders).

## Install

- Download the repository (zip file)
- open mblock
- go to Extensions -> Manage Extensions (Ctrl + Shift + T).
- Click on "Add Extension"
- Select the downloaded zip file 

## How to use ? 

- GR-LAB - Start program : start of a new program.
- Read ultrasonic pin [ ]  : return the value mesured by a ultrasonic ranger in cm
- Imu [ ] : return the accelerometer / gyroscope / temp value. Value between -1 and 1 for the accelerometer and the gyroscope, in °c or °F for the temperature.
- Read encoder pin ([ ] , [ ]) : return the encoder tick count.
- I2C motor driver adresse [ ] set motor [1 / 2] to [   ] % : set the motor speed. Zero will stop the motor. Negative value run the engine in the opposite direction. The adress is setup on the board manualy.
- I2C motor driver adresse [ ] stop motor [1 / 2]  : Stop the selected motor.
