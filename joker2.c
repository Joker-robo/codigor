#pragma config(Sensor, S1,     SR,             sensorEV3_Color)//sensor da direita
#pragma config(Sensor, S2,     SF,             sensorEV3_Color)//sensor do meio
#pragma config(Sensor, S3,     SL,             sensorEV3_Color)//sensor da esquerda
#pragma config(Motor,  motorA,          ML,            tmotorNXT, PIDControl, driveLeft, encoder)
#pragma config(Motor,  motorB,          MR,            tmotorNXT, PIDControl, driveRight, encoder)
task main()
{
    while(true){
        int cor1 = getColorName(S1);
        int cor2 = getColorName(S2);
        int cor3 = getColorName(S3);
        if (cor2 == 1) {
            setMultipleMotors(200,ML,MR);
            wait(250,milliseconds);
            stopAllMotors();
        }
        if (cor1 == 1) {
                setMotor(ML,-100 );
                setMotor(MR, 100);
                wait(500,milliseconds);
        }//vira direita
        if (cor3 == 1) {
            setMotor(MR,-100);
            setMotor(ML, 100);
            wait(500,milliseconds);
        }//vira esquerda
        if (cor1 == 3) {
            setMotor(ML,-150 );
            setMotor(MR, 150);
            wait(900,milliseconds);
        }//verde direita
        if (cor3 == 3) {
            setMotor(MR,-150);
            setMotor(ML, 150);
            wait(900,milliseconds);
        }//verde esquerda
	}//fim do while
}//fim da task
